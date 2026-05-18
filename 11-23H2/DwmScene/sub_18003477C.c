/*
 * XREFs of sub_18003477C @ 0x18003477C
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_1800339DC @ 0x1800339DC (sub_1800339DC.c)
 * Callees:
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 */

_QWORD *__fastcall sub_18003477C(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // r8

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 888) + 16 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 && sub_180011A3C(v5) )
  {
    *v3 = *v6;
    v3[1] = v6[1];
  }
  return v3;
}
