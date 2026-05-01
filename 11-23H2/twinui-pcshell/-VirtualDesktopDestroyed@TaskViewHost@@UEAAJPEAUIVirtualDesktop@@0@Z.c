/*
 * XREFs of ?VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180768940
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ReevaluateAll@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802EC9BE (-ReevaluateAll@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::VirtualDesktopDestroyed(
        TaskViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (TaskViewHost *)136));
  try
  {
    v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    *((_BYTE *)this + 596) = 0;
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateAll((_QWORD *)this + 4);
    if ( v7 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20E,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v5);
  }
  return result;
}
