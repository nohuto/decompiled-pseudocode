/*
 * XREFs of sub_1C00668A4 @ 0x1C00668A4
 * Callers:
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00668A4(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 896);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 908) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 896) = 0LL;
  }
}
