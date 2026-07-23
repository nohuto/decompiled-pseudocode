/*
 * XREFs of sub_140847624 @ 0x140847624
 * Callers:
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 * Callees:
 *     sub_140847B58 @ 0x140847B58 (sub_140847B58.c)
 */

__int64 __fastcall sub_140847624(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int16 v6; // ax

  if ( (a2 & 0xF000000) != 0x2000000 )
    return 3221225485LL;
  v3 = sub_140847B58(a1, a2, a3, a3);
  if ( !v3 )
    return 3221226021LL;
  *(_QWORD *)(v4 + 8) = v3 + *(unsigned int *)(v3 + 4);
  v6 = *(_WORD *)(v3 + 8);
  *(_WORD *)v4 = v6;
  *(_WORD *)(v4 + 2) = v6;
  return 0LL;
}
