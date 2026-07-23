/*
 * XREFs of sub_1406B9B78 @ 0x1406B9B78
 * Callers:
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     CleanupCallback @ 0x1406B9B60 (CleanupCallback.c)
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406B9B78(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
