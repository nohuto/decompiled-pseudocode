/*
 * XREFs of BgkResumeFinished @ 0x140A998A8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 * Callees:
 *     BgkpUnlockBgfxCodeSection @ 0x140AEF590 (BgkpUnlockBgfxCodeSection.c)
 *     BgFreeContext @ 0x140AF1238 (BgFreeContext.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140D183D0 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140D183D0 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140D17EF8 = 0;
  return result;
}
