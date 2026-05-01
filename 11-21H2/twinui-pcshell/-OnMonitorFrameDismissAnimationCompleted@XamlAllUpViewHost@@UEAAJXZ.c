/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ @ 0x1804371B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18000F170 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::OnMonitorFrameDismissAnimationCompleted(XamlAllUpViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (XamlAllUpViewHost *)120));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  if ( ++*((_QWORD *)this + 30) == (__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3 )
  {
    v4 = CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)this - 120);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
