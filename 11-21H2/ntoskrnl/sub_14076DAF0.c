/*
 * XREFs of sub_14076DAF0 @ 0x14076DAF0
 * Callers:
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076D824 @ 0x14076D824 (sub_14076D824.c)
 *     sub_14076D9FC @ 0x14076D9FC (sub_14076D9FC.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_140949450 @ 0x140949450 (sub_140949450.c)
 * Callees:
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14076DAF0(wchar_t *Str2)
{
  int v1; // ebx
  int v2; // edi
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (int)Str2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    v1 = sub_14077DA5C(
           qword_140D00AC0,
           v2,
           5,
           0,
           0LL,
           (__int64)&MatchingChangeStamp,
           (__int64)&v4,
           (__int64)&v5,
           4,
           (__int64)&v6,
           0);
    if ( v1 < 0 || v5 != -1 || v4 != 7 )
    {
      v1 = sub_14077198C(qword_140D00AC0, v2, 5, 0LL, (__int64)&MatchingChangeStamp, 7, (__int64)&qword_14000E4D8, 4, 0);
      if ( v1 >= 0 )
        ZwUpdateWnfStateData(&stru_14000E4D0, 0LL, 0, 0LL, 0LL, 0, 0);
    }
  }
  return (unsigned int)v1;
}
