/*
 * XREFs of _lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_ @ 0x14006F510
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context)
{
  __int64 v2; // rsi
  int v4; // eax
  std::_Ref_count_base *v5; // rcx

  v2 = *Context;
  v4 = _Mtx_lock((_Mtx_t)(*Context + 88LL));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  *(_BYTE *)(v2 + 80) = 1;
  _Mtx_unlock((_Mtx_t)(v2 + 88));
  v5 = (std::_Ref_count_base *)Context[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  operator delete(Context);
}
