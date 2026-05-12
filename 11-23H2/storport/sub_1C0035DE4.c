/*
 * XREFs of sub_1C0035DE4 @ 0x1C0035DE4
 * Callers:
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 *     sub_1C00A6778 @ 0x1C00A6778 (sub_1C00A6778.c)
 *     sub_1C00A69E4 @ 0x1C00A69E4 (sub_1C00A69E4.c)
 *     sub_1C00AAE60 @ 0x1C00AAE60 (sub_1C00AAE60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0035DE4(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  v3 = (void *)*((_QWORD *)*a1 + 5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x44436152u);
  v4 = (void *)*((_QWORD *)*a1 + 6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  v5 = (void *)*((_QWORD *)*a1 + 7);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  v6 = (void *)*((_QWORD *)*a1 + 9);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  v7 = (void *)*((_QWORD *)*a1 + 17);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(*a1, 0x44436152u);
}
