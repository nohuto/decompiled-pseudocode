/*
 * XREFs of ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x18049AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1800294D0 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::MoveForegroundForPendingHostDismiss(CMultitaskingViewManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ForegroundStaging::SetActive((CMultitaskingViewManager *)((char *)this + 296));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
