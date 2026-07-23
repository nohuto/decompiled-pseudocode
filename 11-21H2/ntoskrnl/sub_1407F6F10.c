/*
 * XREFs of sub_1407F6F10 @ 0x1407F6F10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140375248 @ 0x140375248 (sub_140375248.c)
 */

LONG_PTR __fastcall sub_1407F6F10(_QWORD *Object)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = Object[187];
  if ( v1 )
  {
    sub_140375248(Object[187], 0x20u);
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      sub_140375248(v3, 0x100u);
  }
  return ObfDereferenceObject(Object);
}
