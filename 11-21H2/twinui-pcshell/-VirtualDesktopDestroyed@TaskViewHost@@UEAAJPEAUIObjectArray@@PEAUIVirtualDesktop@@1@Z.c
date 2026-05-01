/*
 * XREFs of ?VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1805FEF30
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ReevaluateAll@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x1805FB344 (-ReevaluateAll@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::VirtualDesktopDestroyed(
        TaskViewHost *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (TaskViewHost *)136));
  try
  {
    v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
    *((_BYTE *)this + 580) = 0;
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateAll((_QWORD *)this + 4);
    if ( v8 >= 0 )
      LeaveCriticalSection(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AE,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v6);
  }
  return result;
}
