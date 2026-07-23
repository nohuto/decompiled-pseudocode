/*
 * XREFs of IopDeleteIoRing @ 0x1409493B0
 * Callers:
 *     <none>
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopUnlockAndFreeMdl @ 0x14028D1BC (IopUnlockAndFreeMdl.c)
 *     IopIoRingCleanupRegBufferArray @ 0x140949424 (IopIoRingCleanupRegBufferArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteIoRing(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)(a1 + 184) )
    IopIoRingCleanupRegBufferArray(*(unsigned int *)(a1 + 176));
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x46527249u);
  v3 = *(struct _MDL **)(a1 + 72);
  if ( v3 )
    IopUnlockAndFreeMdl(v3);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    MiRemoveFromSystemSpace(v4, 1);
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    ObfDereferenceObject(v5);
}
