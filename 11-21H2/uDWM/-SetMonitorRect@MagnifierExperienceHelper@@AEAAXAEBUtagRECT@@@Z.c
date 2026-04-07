/*
 * XREFs of ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800C8384
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800C7C80 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800C7E10 (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 * Callees:
 *     ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800C854C (-UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ.c)
 */

void __fastcall MagnifierExperienceHelper::SetMonitorRect(RECT *this, RECT *lprcSrc)
{
  struct tagRECT *v2; // rdi
  int v5; // eax

  v2 = this + 3;
  if ( !EqualRect(this + 3, lprcSrc) )
  {
    CopyRect(v2, lprcSrc);
    v5 = this[3].bottom - this[3].top;
    *(double *)&this[4].left = (double)(this[3].right - v2->left);
    *(double *)&this[4].right = (double)v5;
    MagnifierExperienceHelper::UpdateMagnifiedWindowParameters((MagnifierExperienceHelper *)this);
  }
}
