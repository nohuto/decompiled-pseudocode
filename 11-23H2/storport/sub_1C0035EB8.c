/*
 * XREFs of sub_1C0035EB8 @ 0x1C0035EB8
 * Callers:
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 *     sub_1C00A69E4 @ 0x1C00A69E4 (sub_1C00A69E4.c)
 *     sub_1C00AAE60 @ 0x1C00AAE60 (sub_1C00AAE60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0035EB8(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[6];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
