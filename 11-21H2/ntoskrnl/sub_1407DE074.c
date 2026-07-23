/*
 * XREFs of sub_1407DE074 @ 0x1407DE074
 * Callers:
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 */

__int64 __fastcall sub_1407DE074(__int64 a1, const WCHAR *a2, _OWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rdi
  NTSTATUS v9; // ebx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __m256i FileHandle; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  __int128 FsInformation; // [rsp+80h] [rbp-1h] BYREF
  __int64 v17; // [rsp+90h] [rbp+Fh]

  memset(&FileHandle, 0, 24);
  v17 = 0LL;
  v6 = 0x200000000LL;
  FsInformation = 0LL;
  FileHandle.m256i_i64[3] = 0x200000000LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v9 = sub_1407DFC68((unsigned int)&FileHandle, a1, (unsigned int)&DestinationString, 0, 1048960, 0, 0, 0LL);
  if ( v9 < 0
    || (v9 = NtQueryVolumeInformationFile(
               (HANDLE)FileHandle.m256i_i64[0],
               &IoStatusBlock,
               &FsInformation,
               0x18u,
               FileFsVolumeInformation),
        (v9 & 0xC0000000) == 0xC0000000) )
  {
    v6 = FileHandle.m256i_i64[3];
  }
  else
  {
    v10 = *(_OWORD *)FileHandle.m256i_i8;
    v11 = *(_OWORD *)&FileHandle.m256i_u64[2];
    FileHandle.m256i_i64[0] = 0LL;
    *a4 = FsInformation;
    v9 = 0;
    *a5 = DWORD2(FsInformation);
    *a3 = v10;
    FileHandle.m256i_i64[3] = 0x200000000LL;
    *(_OWORD *)&FileHandle.m256i_u64[1] = 0LL;
    a3[1] = v11;
  }
  if ( (v6 & 0x400000000LL) != 0 )
    sub_1407DFFD8(&FileHandle, a1);
  return (unsigned int)v9;
}
