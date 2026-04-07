/*
 * XREFs of ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800E9BFC
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AFDEC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B0034 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x1800E9CBC (-UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ.c)
 */

void __fastcall CTrackingTooltip::Update(CTrackingTooltip *this, const struct tagPOINT *a2, unsigned __int16 *a3)
{
  HWND *v3; // rsi
  struct tagRECT *v5; // rdi

  v3 = (HWND *)((char *)this + 8);
  v5 = (struct tagRECT *)((char *)this + 16);
  if ( a3 )
  {
    *((_QWORD *)this + 11) = a3;
    SendMessageW(*v3, 0x439u, 0LL, (LPARAM)this + 40);
    GetWindowRect(*v3, v5);
  }
  if ( a2 )
  {
    if ( !v5->left && !*((_DWORD *)this + 6) )
      GetWindowRect(*v3, v5);
    *((struct tagPOINT *)this + 4) = *a2;
  }
  if ( a3 || a2 )
    CTrackingTooltip::UpdateTooltipLocation(this);
}
