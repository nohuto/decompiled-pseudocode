/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14028D1BC
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14028F440 (IopFreeCopyObjectsFromIrp.c)
 *     IopMcTryUnlockMdl @ 0x14055FACC (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14094425C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x1409493B0 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x140951840 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  struct _MDL *Next; // rbx

  do
  {
    if ( (Mdl->MdlFlags & 5) == 1 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( (Mdl->MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
