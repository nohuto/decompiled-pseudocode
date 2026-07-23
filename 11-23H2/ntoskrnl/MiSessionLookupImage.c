/*
 * XREFs of MiSessionLookupImage @ 0x14020AB68
 * Callers:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x14020A978 (MiSessionReferenceImage.c)
 *     MiSessionUpdateImageCharges @ 0x14020AAD4 (MiSessionUpdateImageCharges.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiSessionUnloadAllImages @ 0x140681CD8 (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140695E68 (MmIsDriverLoadedCurrentSession.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140696FEC (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiResolveImageReferences @ 0x1406AE074 (MiResolveImageReferences.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiUnloadApproved @ 0x1407E99AC (MiUnloadApproved.c)
 *     MmEnumerateSystemImages @ 0x140820ED0 (MmEnumerateSystemImages.c)
 *     MiActOnPatchInAllSessions @ 0x140A348C0 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 64);
  while ( result )
  {
    if ( a1 > result[6] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a1 >= (result[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return result;
}
