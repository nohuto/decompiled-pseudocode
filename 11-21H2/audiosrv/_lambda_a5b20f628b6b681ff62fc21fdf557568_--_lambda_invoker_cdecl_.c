/*
 * XREFs of _lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_ @ 0x180103310
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

void __fastcall lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v4; // eax

  v4 = _Mtx_lock((_Mtx_t)(Context + 40));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  if ( !*((_DWORD *)Context + 8) )
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)Context + 17);
  _Mtx_unlock((_Mtx_t)(Context + 40));
}
