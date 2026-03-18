/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1F894
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28168 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCommitDiscardReplacePost @ 0x140A1F900 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FABC (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        int a3)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter4,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a3,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter4);
}
