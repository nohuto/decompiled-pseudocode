/*
 * XREFs of _lambda_52ac8a1d7cd5e113393ebfb57ce15774_::_lambda_invoker_cdecl_ @ 0x1801A6C20
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18003ACEC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_52ac8a1d7cd5e113393ebfb57ce15774_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  if ( Context[2]
    && *((_BYTE *)Context + 96)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*Context + 48LL))(Context) )
  {
    std::_Func_class<void,>::operator()((__int64)(Context + 3));
  }
}
