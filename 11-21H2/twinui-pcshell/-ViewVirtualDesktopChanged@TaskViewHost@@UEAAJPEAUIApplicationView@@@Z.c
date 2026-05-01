/*
 * XREFs of ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1805FEC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805FE2D0 (--$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::ViewVirtualDesktopChanged(TaskViewHost *this, struct IApplicationView *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  int v6; // r14d
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 result; // rax
  _QWORD *v12; // r8
  signed int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v15)(_QWORD, void *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (TaskViewHost *)136));
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    if ( !*((_BYTE *)this + 580) )
    {
      v15 = 0LL;
      v7 = (__int64 *)*((_QWORD *)this + 15);
      v8 = *v7;
      v15 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, GUID *, __int64 (__fastcall ****)(_QWORD, void *, _QWORD *)))(v8 + 32))(
             v7,
             a2,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v15);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18C,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
          (const char *)(unsigned int)v9);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v15);
        if ( v6 >= 0 )
          LeaveCriticalSection(v4);
        return v10;
      }
      v12 = wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v16, v15);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4), *v12);
      if ( v13 < 0 )
        winrt::throw_hresult(v13);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v15);
    }
    if ( v6 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x191,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v5);
  }
  return result;
}
