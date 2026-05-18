/*
 * XREFs of sub_18002C260 @ 0x18002C260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_18002C260(__int64 a1, int a2, _QWORD *a3, double *a4)
{
  __int64 v4; // rax
  char v5; // r10

  v4 = *(_QWORD *)(a1 + 424);
  v5 = 0;
  if ( *(_QWORD *)(a1 + 416) != v4 && !a2 )
  {
    v5 = 1;
    *a3 = *(_QWORD *)(v4 - 24);
    *a4 = *(double *)(v4 - 136) - *(double *)(v4 - 144);
  }
  return v5;
}
