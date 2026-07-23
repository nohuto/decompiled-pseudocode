/*
 * XREFs of sub_140AA41F0 @ 0x140AA41F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA55E8 @ 0x140AA55E8 (sub_140AA55E8.c)
 */

__int64 __fastcall sub_140AA41F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    sub_140A8C924(0xC4u, 0x32uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  LOBYTE(a1) = CurrentIrql;
  LOBYTE(a2) = *(_BYTE *)(*(_QWORD *)(v2 + 8) + 16LL);
  return sub_140AA55E8(a1, a2);
}
