/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ @ 0x180301540
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D6E20 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 */

void _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(
         &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      TouchGestureLogging::`scalar deleting destructor'((TouchGestureLogging *)Context, 0);
  }
}
