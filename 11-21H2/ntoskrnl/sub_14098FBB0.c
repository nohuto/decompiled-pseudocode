/*
 * XREFs of sub_14098FBB0 @ 0x14098FBB0
 * Callers:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140245968 @ 0x140245968 (sub_140245968.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     sub_140A6BCB0 @ 0x140A6BCB0 (sub_140A6BCB0.c)
 *     sub_140A6BCCC @ 0x140A6BCCC (sub_140A6BCCC.c)
 */

__int64 __fastcall sub_14098FBB0(HANDLE FileHandle, __int64 a2)
{
  __int64 v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]

  IoStatusBlock = 0LL;
  v11 = 0LL;
  FileInformation = 0LL;
  sub_140A6BCB0();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v7 = 0LL;
    v4 = FileInformation;
    v5 = 0LL;
    do
    {
      v8 = v4 - v5;
      if ( (int)sub_140245968(a2, (__int64)&v7, &v8, 0x10000u) >= 0 )
        break;
      v4 = FileInformation;
      v5 = (v7 & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v7 = v5;
    }
    while ( v5 < (__int64)FileInformation );
  }
  return sub_140A6BCCC();
}
