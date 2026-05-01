/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ @ 0x1804E2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18038D560 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(
                             (ViewManagerInteropTraceLogging *)Context,
                             0);
  }
  return result;
}
