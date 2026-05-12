/*
 * XREFs of sub_1C0014870 @ 0x1C0014870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C00148CC @ 0x1C00148CC (sub_1C00148CC.c)
 */

__int64 __fastcall sub_1C0014870(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rdx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1C0008570(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  return sub_1C00148CC(a3 + 40, v4 + 4, *(unsigned __int8 *)(v4 + 3));
}
