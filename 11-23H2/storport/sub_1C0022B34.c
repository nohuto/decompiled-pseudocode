/*
 * XREFs of sub_1C0022B34 @ 0x1C0022B34
 * Callers:
 *     sub_1C0022AA4 @ 0x1C0022AA4 (sub_1C0022AA4.c)
 *     sub_1C00ABDB0 @ 0x1C00ABDB0 (sub_1C00ABDB0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0022B34(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_BYTE *)(a1 + 451) &= ~0x10u;
  v2 = *(void **)(a1 + 2304);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 2304) = 0LL;
  }
  v3 = *(void **)(a1 + 2328);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 2328) = 0LL;
  }
}
