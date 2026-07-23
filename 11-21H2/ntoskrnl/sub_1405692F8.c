/*
 * XREFs of sub_1405692F8 @ 0x1405692F8
 * Callers:
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405692F8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  *(_QWORD *)(a1 + 160) |= a2[25];
  qword_140D083A0[4 * *(unsigned __int16 *)(a1 + 136)] |= a2[25];
  v2 = *(_QWORD *)(a1 + 168);
  if ( (v2 & a2[4366]) == 0 )
    *(_QWORD *)(a1 + 168) = v2 | a2[25];
  *(_QWORD *)(a1 + 152) |= a2[4360];
  result = a2[25];
  if ( a2[4364] != result )
    *(_BYTE *)(a1 + 184) |= 1u;
  return result;
}
