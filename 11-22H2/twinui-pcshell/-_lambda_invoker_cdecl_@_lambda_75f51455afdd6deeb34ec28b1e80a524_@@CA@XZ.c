/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CA@XZ @ 0x1803BD5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x180261520 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = __std_init_once_begin_initialize(
             &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
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
