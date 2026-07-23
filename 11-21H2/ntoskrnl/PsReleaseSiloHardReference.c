/*
 * XREFs of PsReleaseSiloHardReference @ 0x14020B0E0
 * Callers:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     sub_14020B0A0 @ 0x14020B0A0 (sub_14020B0A0.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_14020B10C @ 0x14020B10C (sub_14020B10C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    sub_14020B10C();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
