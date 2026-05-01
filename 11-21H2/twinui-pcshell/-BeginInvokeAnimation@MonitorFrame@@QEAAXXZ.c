/*
 * XREFs of ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x180431854
 * Callers:
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1804399A0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180428250 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ??$?0V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A008 (--$-0V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18043F5F0 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall MonitorFrame::BeginInvokeAnimation(MonitorFrame *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  MonitorFrame *v7; // [rsp+50h] [rbp+8h] BYREF
  MonitorFrame *v8; // [rsp+58h] [rbp+10h] BYREF
  MonitorFrame *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  if ( *((_QWORD *)this + 16) )
  {
    v8 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v9 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v2 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 16));
    v10 = v2;
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v7 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler(v3, (__int64 *)&v7);
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(v2, 1LL, (__int64)v4);
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 16LL))(v4, v6);
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 16LL))(v2, v6);
    (*(void (__fastcall **)(MonitorFrame *, __int64))(*(_QWORD *)this + 16LL))(this, v6);
    (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  }
}
