/*
 * XREFs of CmpVolumeContextCleanup @ 0x140862E54
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x140688C2C (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701E18 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextCreate @ 0x14084EC68 (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  struct _FILE_OBJECT **v1; // rbx
  LONG_PTR result; // rax

  v1 = (struct _FILE_OBJECT **)(a1 + 48);
  if ( *(_BYTE *)(a1 + 64) )
    result = PiPagePathSetState(*v1, 0);
  if ( *v1 )
    return ObfDereferenceObject(*v1);
  return result;
}
