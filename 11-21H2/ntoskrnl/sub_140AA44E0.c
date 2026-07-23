/*
 * XREFs of sub_140AA44E0 @ 0x140AA44E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8142C @ 0x140A8142C (sub_140A8142C.c)
 *     sub_140A81CBC @ 0x140A81CBC (sub_140A81CBC.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140AA44E0(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u
    && !dword_140C1AA80
    && !(unsigned int)sub_140A8142C(*(_DWORD **)(a1 + 8))
    && sub_140A81CBC(*(_QWORD *)a1) )
  {
    sub_140A8C924(0xC4u, 0x140uLL, CurrentIrql, *(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
  }
}
