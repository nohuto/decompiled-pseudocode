/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x180103EE0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18006C380 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x180014630 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014660 (RtlSetOwnerSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x1800A14B0 (NtOpenProcessTokenEx.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtAdjustPrivilegesToken @ 0x1800A16D0 (NtAdjustPrivilegesToken.c)
 *     NtSetSecurityObject @ 0x1800A4560 (NtSetSecurityObject.c)
 */

NTSTATUS __fastcall RtlpSysVolTakeOwnership(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  int v3; // eax
  HANDLE v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-59h]
  HANDLE FileHandle[2]; // [rsp+38h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v8[40]; // [rsp+78h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+17h] BYREF
  int v10; // [rsp+B0h] [rbp+27h]
  __int64 v11; // [rsp+B4h] [rbp+2Bh]
  int v12; // [rsp+BCh] [rbp+33h]
  __int16 v13; // [rsp+C0h] [rbp+37h] BYREF
  int v14; // [rsp+C2h] [rbp+39h]
  __int16 v15; // [rsp+C6h] [rbp+3Dh]
  int v16; // [rsp+C8h] [rbp+3Fh]
  int v17; // [rsp+CCh] [rbp+43h]

  result = NtOpenProcessTokenEx();
  if ( result >= 0 )
  {
    FileHandle[1] = (HANDLE)9;
    v11 = 9LL;
    v10 = 1;
    v12 = 2;
    if ( (int)NtAdjustPrivilegesToken() >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor((__int64)v8, 1);
        v14 = 0;
        v15 = 1280;
        v13 = 513;
        v16 = 32;
        v17 = 544;
        v3 = RtlSetOwnerSecurityDescriptor((__int64)v8, (__int64)&v13, 0);
        v4 = FileHandle[0];
        if ( v3 >= 0 )
        {
          NtSetSecurityObject();
          v4 = FileHandle[0];
        }
        NtClose(v4);
      }
    }
    return NtClose(Handle);
  }
  return result;
}
