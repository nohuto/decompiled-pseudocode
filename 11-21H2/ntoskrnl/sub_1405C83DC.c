/*
 * XREFs of sub_1405C83DC @ 0x1405C83DC
 * Callers:
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C83DC(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 result; // rax

  for ( LODWORD(v2) = *(_DWORD *)(a1 + 4);
        (unsigned int)v2 > a2;
        *(_DWORD *)(448LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v2) + qword_140D068A8 + 416) = 0 )
  {
    v2 = (unsigned int)(v2 - 1);
    result = qword_140D068A8;
  }
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
