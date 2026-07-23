/*
 * XREFs of MiLockProtoPoolPageForce @ 0x1402DE264
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402CDA60 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356F30 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x14035CF3C (MiMakeImageReadOnly.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14063D0D8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14063D350 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063D4E0 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeProtoPfn @ 0x14066B7C0 (MiInitializeProtoPfn.c)
 * Callees:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiLockProtoPoolPage(BugCheckParameter1, a2);
    if ( result )
      break;
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  return result;
}
