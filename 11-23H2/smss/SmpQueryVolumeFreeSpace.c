/*
 * XREFs of SmpQueryVolumeFreeSpace @ 0x140018510
 * Callers:
 *     SmpGetDumpDestination @ 0x140017DF4 (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryVolumeFreeSpace(__m128i *a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  int v4; // r8d
  unsigned __int64 v5; // xmm0_8
  __int16 *v6; // rcx
  unsigned __int64 v7; // rdx
  __int16 v8; // ax
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  void *FileHandle; // [rsp+30h] [rbp-29h] BYREF
  __m128i v12; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  _BYTE FsInformation[8]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+90h] [rbp+37h]
  unsigned int v17; // [rsp+98h] [rbp+3Fh]
  unsigned int v18; // [rsp+9Ch] [rbp+43h]

  v3 = _mm_cvtsi128_si32(*a1);
  v12 = *a1;
  v4 = v3;
  v5 = _mm_srli_si128(v12, 8).m128i_u64[0];
  v6 = (__int16 *)v5;
  if ( v3 )
  {
    v7 = v5;
    while ( 1 )
    {
      v8 = *v6;
      v6 = (__int16 *)(v7 + 2);
      if ( v8 == 58 && *v6 == 92 )
        break;
      v7 += 2LL;
      v4 -= 2;
      if ( !v4 )
        goto LABEL_8;
    }
    LOWORD(v6) = v7 + 4;
  }
LABEL_8:
  ObjectAttributes.RootDirectory = 0LL;
  v12.m128i_i16[0] = (_WORD)v6 - v12.m128i_i16[4];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( result >= 0 )
  {
    v10 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    NtClose(FileHandle);
    if ( v10 >= 0 )
    {
      result = 0;
      *a2 = v16 * v17 * (unsigned __int64)v18;
    }
    else
    {
      return v10;
    }
  }
  return result;
}
