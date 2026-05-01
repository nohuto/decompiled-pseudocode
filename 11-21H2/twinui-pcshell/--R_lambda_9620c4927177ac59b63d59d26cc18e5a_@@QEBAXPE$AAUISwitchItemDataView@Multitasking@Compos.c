/*
 * XREFs of ??R_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Z @ 0x18042FBA4
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@XPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@3456@@Details@Platform@@UEAAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@5678@@Z @ 0x180435840 (-Invoke@-$__abi_FunctorCapture@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@XPE$AAUISwitchItemDat.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180420E04 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?get@EvaluationState@IEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemInclusion@3456@XZ @ 0x18043F670 (-get@EvaluationState@IEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AA.c)
 *     ?get@Item@IEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18043F6F8 (-get@Item@IEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwi.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall _lambda_9620c4927177ac59b63d59d26cc18e5a_::operator()(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL);
  if ( v6 < 0 )
  {
    __abi_WinRTraiseException(v6);
    __debugbreak();
  }
  if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs::EvaluationState::get(a3) != 1 )
  {
    try
    {
      v7 = Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs::Item::get(a3);
      v17 = v7;
      v8 = __abi_winrt_ptr_ctor(v7);
      v15[1] = v8;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      AppViewDataSourceHelpers::TryGetApplicationViewForItem(v15, v8);
      v9 = v15[0];
      if ( !v15[0] )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF8,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
          (const char *)0x8000FFFFLL,
          0);
      v18 = 0LL;
      v10 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15[0] + 80LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v18);
      if ( v10(v9, AddressOf) >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v18, &v17);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x100,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
            (const char *)(unsigned int)v12,
            v15[0]);
        if ( !(_DWORD)v17 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
          if ( v13 < 0 )
            __abi_WinRTraiseException(v13);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v15);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x107,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
        v14);
    }
  }
}
