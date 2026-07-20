/*
 * XREFs of SmpGetPagingFileSize @ 0x14000AF88
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x14000C86C (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpGetPagingFileSize(void *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS v5; // r8d
  __int64 v7; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _QWORD FileInformation[3]; // [rsp+40h] [rbp-28h] BYREF

  v5 = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v5 < 0 )
  {
    v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v7 + 2] = 4269;
    SmpGlobalLog[2 * v7 + 3] = v5;
    *(_QWORD *)&SmpGlobalLog[2 * v7 + 4] = a2;
    return (unsigned int)v5;
  }
  else
  {
    *a3 = FileInformation[0];
    return 0LL;
  }
}
