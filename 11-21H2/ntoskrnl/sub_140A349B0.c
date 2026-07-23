/*
 * XREFs of sub_140A349B0 @ 0x140A349B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 */

void __fastcall sub_140A349B0(__int64 a1)
{
  volatile signed __int64 *v2; // rcx

  ObMakeTemporaryObject(*(PVOID *)a1);
  ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7254624Fu);
  v2 = *(volatile signed __int64 **)(a1 + 8);
  if ( v2 )
    sub_14069C9C0(v2, 1u);
}
