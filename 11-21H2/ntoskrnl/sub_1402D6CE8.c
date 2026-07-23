/*
 * XREFs of sub_1402D6CE8 @ 0x1402D6CE8
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     sub_1402D6DC0 @ 0x1402D6DC0 (sub_1402D6DC0.c)
 *     sub_1402D6E58 @ 0x1402D6E58 (sub_1402D6E58.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall sub_1402D6CE8(unsigned __int64 BaseOfImage, char a2, unsigned __int16 a3, int a4, _QWORD *a5)
{
  __int64 v5; // rsi
  char v8; // di
  PVOID v9; // rbx
  NTSTATUS result; // eax
  WORD Magic; // ax
  int v12; // edx
  int v13; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  OutHeaders = 0LL;
  v8 = a2;
  v9 = (PVOID)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v8 = 0;
    v9 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (BaseOfImage & 1) == 0 )
      v8 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v9, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    v12 = 267;
    if ( Magic == 267 )
    {
      LOBYTE(v12) = v8;
      return sub_1402D6E58((_DWORD)v9, v12, a3, a4, (__int64)OutHeaders, v5);
    }
    else
    {
      v13 = 523;
      if ( Magic == 523 )
      {
        LOBYTE(v13) = v8;
        return sub_1402D6DC0((_DWORD)v9, v13, a3, a4, (__int64)OutHeaders, v5);
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
