/*
 * XREFs of ?CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18076C250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlSnapAssistViewHost::CurrentVirtualDesktopChanged(
        XamlSnapAssistViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // esi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 136) & -(__int64)(this != (XamlSnapAssistViewHost *)168));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView((char *)this - 160);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C7,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
