/*
 * XREFs of ??0?$__abi_FunctorCapture@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@X$$V@Details@Platform@@QEAA@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@Z @ 0x18042D9D8
 * Callers:
 *     ??$?0V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_44f2a899e44ce20919ad94180e8373fc_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A008 (--$-0V_lambda_44f2a899e44ce20919ad94180e8373fc_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_44f2a899e44ce20919ad94180e8373fc_,void,>::__abi_FunctorCapture<_lambda_44f2a899e44ce20919ad94180e8373fc_,void,>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rcx

  *a1 = &Platform::Details::__abi_FunctorCapture<_lambda_44f2a899e44ce20919ad94180e8373fc_,void,>::`vftable';
  v4 = a1 + 1;
  *v4 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
