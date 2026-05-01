/*
 * XREFs of ??0_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEAA@AEBV0@@Z @ 0x18042CFE0
 * Callers:
 *     ??$?0V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@W4CallbackContext@Platform@@_N@Z @ 0x18042A108 (--$-0V_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180433370 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *__fastcall _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_(
        _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *this,
        const struct _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_ *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  return this;
}
