/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ @ 0x1804579E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18019D710 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'((ViewManagerInteropTraceLogging *)Context, 0);
  }
}
