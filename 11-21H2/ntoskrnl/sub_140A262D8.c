/*
 * XREFs of sub_140A262D8 @ 0x140A262D8
 * Callers:
 *     sub_14076D2BC @ 0x14076D2BC (sub_14076D2BC.c)
 * Callees:
 *     sub_140A25F18 @ 0x140A25F18 (sub_140A25F18.c)
 */

__int64 __fastcall sub_140A262D8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  *a8 = 1;
  *a5 = 17;
  if ( !a7 )
    return 3221225507LL;
  *(_QWORD *)&v9 = a4;
  BYTE8(v9) = 0;
  result = sub_140A25F18(a1, a2, a3, (__int64)sub_140A26350, (__int64)&v9);
  *a6 = BYTE8(v9);
  return result;
}
