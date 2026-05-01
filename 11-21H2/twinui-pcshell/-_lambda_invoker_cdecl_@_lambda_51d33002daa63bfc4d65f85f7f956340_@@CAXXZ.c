/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ @ 0x1804FF190
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18019D710 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'((ViewManagerInteropTraceLogging *)Context, 0);
  }
}
