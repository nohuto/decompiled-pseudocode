/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1406D0F00
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmpMarkKeyUnbacked @ 0x1407107FC (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076A8BC (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2839C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A28890 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1406D86A0 (CmpDelayDerefKeyControlBlock.c)
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
