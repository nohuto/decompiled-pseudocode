/*
 * XREFs of sub_140911EA8 @ 0x140911EA8
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_140911D28 @ 0x140911D28 (sub_140911D28.c)
 */

__int64 __fastcall sub_140911EA8(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _PRIVILEGE_SET *v4; // rdi
  WCHAR *TargetPath; // rax
  WCHAR *v6; // rsi
  int PersistedStateLocation; // ebx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG DataSize; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID v14; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Data; // [rsp+D8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Data.QuadPart = 0LL;
  v4 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  DataSize = 0;
  memset(&ObjectAttributes, 0, 44);
  v14 = 0LL;
  DestinationString = 0LL;
  TargetPath = (WCHAR *)Allocate(PagedPool, 0x410uLL, 0x30384D43u, a4);
  v6 = TargetPath;
  if ( TargetPath )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ShutdownPath",
                               0LL,
                               L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\SHUTDOWN",
                               LocationTypeRegistry,
                               TargetPath,
                               0x410u,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v6);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        Data = KeQueryPerformanceCounter(&PerformanceFrequency);
        RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
        PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
        if ( PersistedStateLocation >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
          PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
          if ( PersistedStateLocation >= 0 )
          {
            PersistedStateLocation = sub_140911D28(&v14, &DataSize);
            if ( PersistedStateLocation < 0 )
            {
              v4 = (_PRIVILEGE_SET *)v14;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterBuildLabEx");
              v4 = (_PRIVILEGE_SET *)v14;
              PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v14, DataSize);
            }
          }
        }
      }
    }
    SeFreePrivileges((PPRIVILEGE_SET)v6);
  }
  else
  {
    PersistedStateLocation = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v4 )
    SeFreePrivileges(v4);
  return (unsigned int)PersistedStateLocation;
}
