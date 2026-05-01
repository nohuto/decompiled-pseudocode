/*
 * XREFs of ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180433370
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x18042CE2C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18042CE2C.c)
 *     ??1?$ScopeExitFn@V_lambda_8f7c4272537cd39965ba6040b29ee2e3_@@@details@wil@@QEAA@XZ @ 0x18042E9DC (--1-$ScopeExitFn@V_lambda_8f7c4272537cd39965ba6040b29ee2e3_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180428250 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ??$?0V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A108 (--$-0V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 *     ??0_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEAA@AEBV0@@Z @ 0x18042CFE0 (--0_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEAA@AEBV0@@Z.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18043F5F0 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall MonitorFrame::DestroyInternal(MonitorFrame *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  const struct _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  MonitorFrame *v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h]
  _QWORD *v13; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h]

  v11 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v9[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v9[1] = (__int64)this;
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v3 = Windows::UI::Xaml::IWindow::Dispatcher::get(v2);
    v12 = v3;
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v13 = v4;
    v5 = _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_(
           (_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *)v10,
           (const struct _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *)v9);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler(v4, v5);
    v13 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(v3, 0LL, (__int64)v6);
    v8 = v7;
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 16LL))(v6, v8);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v8);
  }
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
}
