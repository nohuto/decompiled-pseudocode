/*
 * XREFs of sub_18002E4B0 @ 0x18002E4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_18002E4B0(__int64 a1, int a2, _QWORD *a3, double *a4)
{
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 424);
  v5 = 0;
  if ( *(_QWORD *)(a1 + 416) != v4 )
  {
    v6 = *(_QWORD *)(a1 + 424);
    if ( !a2 )
    {
      v5 = 1;
      *a3 = *(_QWORD *)(v4 - 24);
      *a4 = *(double *)(v6 - 136) - *(double *)(v6 - 144);
    }
  }
  return v5;
}
