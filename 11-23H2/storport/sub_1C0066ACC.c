/*
 * XREFs of sub_1C0066ACC @ 0x1C0066ACC
 * Callers:
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0066ACC(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 6024);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 6024) = 0LL;
  }
}
