/*
 * XREFs of sub_180095910 @ 0x180095910
 * Callers:
 *     sub_1800953A0 @ 0x1800953A0 (sub_1800953A0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800954DC @ 0x1800954DC (sub_1800954DC.c)
 */

__int64 __fastcall sub_180095910(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  sub_1800954DC(a1, a2);
  v6 = a3[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a3[1];
  }
  v8[0] = a1[2 * v3 + 48];
  a1[2 * v3 + 48] = *a3;
  v8[1] = a1[2 * v3 + 49];
  a1[2 * v3 + 49] = v6;
  sub_180010910((__int64)v8);
  return sub_180010910((__int64)a3);
}
