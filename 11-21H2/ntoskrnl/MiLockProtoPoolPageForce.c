/*
 * XREFs of MiLockProtoPoolPageForce @ 0x140273AAC
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x140243208 (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1402450AC (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14059E3E8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14059E660 (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14059E7F0 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeProtoPfn @ 0x1405C4A48 (MiInitializeProtoPfn.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiLockProtoPoolPage(BugCheckParameter1, a2);
    if ( result )
      break;
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  return result;
}
