/*
 * XREFs of sub_1405570D0 @ 0x1405570D0
 * Callers:
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_1404182AC @ 0x1404182AC (sub_1404182AC.c)
 *     sub_140933A9C @ 0x140933A9C (sub_140933A9C.c)
 *     sub_140938040 @ 0x140938040 (sub_140938040.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

void __fastcall sub_1405570D0(PMDL Mdl)
{
  CSHORT MdlFlags; // cx
  struct _MDL *Next; // rbx

  do
  {
    MdlFlags = Mdl->MdlFlags;
    if ( (MdlFlags & 5) == 1 )
    {
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
      MdlFlags = Mdl->MdlFlags;
    }
    if ( (MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
