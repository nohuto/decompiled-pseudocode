/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x14071EE7C
 * Callers:
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14065D320 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14065DC44 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1407C0C50 (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
