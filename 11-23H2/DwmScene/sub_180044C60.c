/*
 * XREFs of sub_180044C60 @ 0x180044C60
 * Callers:
 *     sub_180044E24 @ 0x180044E24 (sub_180044E24.c)
 * Callees:
 *     sub_180017994 @ 0x180017994 (sub_180017994.c)
 *     sub_180044D98 @ 0x180044D98 (sub_180044D98.c)
 *     sub_180044DB0 @ 0x180044DB0 (sub_180044DB0.c)
 *     sub_1800471D8 @ 0x1800471D8 (sub_1800471D8.c)
 */

__int64 __fastcall sub_180044C60(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  sub_1800471D8(a1, 1LL);
  v5 = *a1;
  if ( (unsigned __int8)sub_180044DB0(a3) )
  {
    sub_180044D98(v5, 1LL);
    v6 = 4LL;
  }
  else
  {
    *(_DWORD *)v5 = *a3;
    v6 = v5;
    v5 = 4LL;
  }
  v8 = 0LL;
  a1[1] = v5 + v6;
  return sub_180017994(&v8);
}
