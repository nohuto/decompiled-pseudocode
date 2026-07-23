/*
 * XREFs of sub_140938040 @ 0x140938040
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140938040(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _MDL *v4; // rcx
  ULONG_PTR v5; // rcx
  void *v6; // rcx

  v2 = (void *)a1[23];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42527249u);
  v3 = (void *)a1[25];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x46527249u);
  v4 = (struct _MDL *)a1[9];
  if ( v4 )
    sub_1405570D0(v4);
  v5 = a1[8];
  if ( v5 )
    sub_14026D048(v5, 1);
  v6 = (void *)a1[7];
  if ( v6 )
    ObfDereferenceObject(v6);
}
