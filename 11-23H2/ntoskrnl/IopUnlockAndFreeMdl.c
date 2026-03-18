/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14028CF2C
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14028F1B0 (IopFreeCopyObjectsFromIrp.c)
 *     IopMcTryUnlockMdl @ 0x14055F40C (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x14094405C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x1409491B0 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x140951640 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
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
