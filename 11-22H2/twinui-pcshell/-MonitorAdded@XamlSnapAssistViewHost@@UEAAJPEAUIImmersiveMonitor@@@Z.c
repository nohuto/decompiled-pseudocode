/*
 * XREFs of ?MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18076CEF0
 * Callers:
 *     ?MonitorAdded@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@@Z @ 0x1802AE620 (-MonitorAdded@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::MonitorAdded(XamlSnapAssistViewHost *this, struct IImmersiveMonitor *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (XamlSnapAssistViewHost *)16));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView((__int64)this - 8);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v5);
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return v6;
}
