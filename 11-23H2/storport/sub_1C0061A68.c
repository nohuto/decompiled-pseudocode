/*
 * XREFs of sub_1C0061A68 @ 0x1C0061A68
 * Callers:
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 *     sub_1C00AAE60 @ 0x1C00AAE60 (sub_1C00AAE60.c)
 *     sub_1C00ABB58 @ 0x1C00ABB58 (sub_1C00ABB58.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0061A68(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
