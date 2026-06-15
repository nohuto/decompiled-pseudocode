/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CAXXZ @ 0x180151BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x180151CE0 (--_ENUIAudioTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      NUIAudioTracing::`vector deleting destructor'((NUIAudioTracing *)Context, 0);
  }
}
