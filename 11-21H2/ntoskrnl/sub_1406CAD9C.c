/*
 * XREFs of sub_1406CAD9C @ 0x1406CAD9C
 * Callers:
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406CAD9C(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[1];
      if ( v3 )
        ObfDereferenceObject(v3);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
