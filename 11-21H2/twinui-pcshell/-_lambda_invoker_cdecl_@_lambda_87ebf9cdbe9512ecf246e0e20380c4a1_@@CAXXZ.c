/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ @ 0x1803BEA00
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D6E20 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(
         &`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      TouchGestureLogging::`scalar deleting destructor'((TouchGestureLogging *)Context, 0);
  }
}
