/*
 * XREFs of ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x1805538A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x180036DD0 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::MoveForegroundForPendingHostDismiss(CMultitaskingViewManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ForegroundStaging::SetActive((CMultitaskingViewManager *)((char *)this + 304));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
