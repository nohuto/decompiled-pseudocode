/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x14067E8A8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14065CFD4 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x14091CAC0 (CmpCleanupDiscardReplacePost.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1 + 2;
    if ( (_QWORD *)*v5 != v5 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v4,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 a2,
                 (__int64)a1,
                 1,
                 0);
      if ( (_QWORD *)*v5 != v5 )
        return CmpCleanupDiscardReplacePost(*a1, a2, a1);
    }
  }
  return result;
}
