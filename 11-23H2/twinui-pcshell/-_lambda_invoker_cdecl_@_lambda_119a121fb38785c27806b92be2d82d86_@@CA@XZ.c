/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ @ 0x180393160
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x18038D560 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( __std_init_once_begin_initialize(&`IamTraceLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'((ViewManagerInteropTraceLogging *)Context, 0);
  }
}
