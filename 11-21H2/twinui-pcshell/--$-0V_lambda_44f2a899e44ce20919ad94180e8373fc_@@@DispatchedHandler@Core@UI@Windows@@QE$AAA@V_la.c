/*
 * XREFs of ??$?0V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A008
 * Callers:
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x180431854 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$__abi_FunctorCapture@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@X$$V@Details@Platform@@QEAA@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@Z @ 0x18042D9D8 (--0-$__abi_FunctorCapture@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@X$$V@Details@Platform@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v4 = 0LL;
  }
  else
  {
    v7 = (_QWORD *)*a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    v4 = Platform::Details::__abi_FunctorCapture<_lambda_44f2a899e44ce20919ad94180e8373fc_,void,>::__abi_FunctorCapture<_lambda_44f2a899e44ce20919ad94180e8373fc_,void,>(
           a1 + 5,
           &v7);
  }
  a1[37] = v4;
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
