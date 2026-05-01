/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ @ 0x180498810
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x180261520 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
             1u,
             &fPending,
             &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)TouchGestureLogging::`scalar deleting destructor'((TouchGestureLogging *)Context, 0);
  }
  return result;
}
