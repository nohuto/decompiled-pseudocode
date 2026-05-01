/*
 * XREFs of ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1804310B4
 * Callers:
 *     ??0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PE$AAUIVirtualDesktopController@3456@PE$AAUIVirtualDesktopDataSource@3456@@Z @ 0x18042DCBC (--0MonitorFrame@@QEAA@PEAUIImmersiveMonitor@@PE$AAUISwitchItemDataView@Multitasking@ComposableSh.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A348 (--$-0V_lambda_9620c4927177ac59b63d59d26cc18e5a_@@@-$TypedEventHandler@PE$AAUISwitchItemDataView@.c)
 *     ??0_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@AEBV0@@Z @ 0x18042D018 (--0_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@AEBV0@@Z.c)
 *     ??1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ @ 0x18042E738 (--1_lambda_9620c4927177ac59b63d59d26cc18e5a_@@QEAA@XZ.c)
 *     ?add@EvaluateItem@ISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@86@@Z @ 0x18043F014 (-add@EvaluateItem@ISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AVEv.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MonitorFrame::AddCallback(MonitorFrame *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  const struct _lambda_9620c4927177ac59b63d59d26cc18e5a_ *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 12);
  v3 = *((_QWORD *)this + 10);
  v8[0] = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = __abi_winrt_ptr_ctor(v3);
  v8[2] = __abi_winrt_ptr_ctor(v2);
  v4 = *((_QWORD *)this + 7);
  v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v6 = _lambda_9620c4927177ac59b63d59d26cc18e5a_::_lambda_9620c4927177ac59b63d59d26cc18e5a_(
         (_lambda_9620c4927177ac59b63d59d26cc18e5a_ *)v9,
         (const struct _lambda_9620c4927177ac59b63d59d26cc18e5a_ *)v8);
  v7 = Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
         v5,
         v6);
  *((_QWORD *)this + 13) = *(_QWORD *)Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView::EvaluateItem::add(
                                        v4,
                                        &v10,
                                        v7);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  _lambda_9620c4927177ac59b63d59d26cc18e5a_::~_lambda_9620c4927177ac59b63d59d26cc18e5a_((_lambda_9620c4927177ac59b63d59d26cc18e5a_ *)v8);
}
