/*
 * XREFs of SmpPagefileInitialize @ 0x140009BE8
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000B010 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpQueryDedicatedDumpSetting @ 0x140006FC8 (SmpQueryDedicatedDumpSetting.c)
 *     SmpQueryFilterPagesDumpSetting @ 0x140009B98 (SmpQueryFilterPagesDumpSetting.c)
 *     SmpQueryCrashDumpType @ 0x140009DE0 (SmpQueryCrashDumpType.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpQueryCopyDumpSetting @ 0x140011730 (SmpQueryCopyDumpSetting.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

NTSTATUS SmpPagefileInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  WCHAR *NtSystemRoot; // rax
  WCHAR v5; // ax
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v20; // [rsp+38h] [rbp-C8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD SystemInformation[4]; // [rsp+70h] [rbp-90h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF
  char v24; // [rsp+1AAh] [rbp+AAh]

  v17 = 11141288;
  v18 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v19 = 8388734;
  v20 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  qword_14002BCD8 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_14002BCB8 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  NtQuerySystemInformation(SystemPrefetcherInformation|0x80, SystemInformation, 0x18u, 0LL);
  SmpMemorySize = SystemInformation[0];
  SmpHighestPhysicalAddress = SystemInformation[2];
  NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot(v1, v0, v2, v3);
  v5 = RtlUpcaseUnicodeChar(*NtSystemRoot);
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SmpDumpType = SmpQueryCrashDumpType(v8, v7, v9, v10);
      SmpUseDedicatedDumpFile = SmpQueryDedicatedDumpSetting();
      SmpUseFilterPagesDumpFile = SmpQueryFilterPagesDumpSetting(v11);
      SmpForceCopyDumpFile = SmpQueryCopyDumpSetting(v13, v12, v14, v15);
      memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v16 = SmpClientSku;
        if ( v24 == 1 )
          v16 = 1;
        SmpClientSku = v16;
      }
      return 0;
    }
  }
  return result;
}
