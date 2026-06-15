/*
 * XREFs of wil::details::lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___::_lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___ @ 0x1800EEDC8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594F8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     _CAudioSrv::VAD_AudiosrvServiceStart_::_1_::dtor$4 @ 0x18007CFAB (_CAudioSrv--VAD_AudiosrvServiceStart_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___::_lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___(
        __int64 a1)
{
  HLOCAL result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return LocalFree(**(HLOCAL **)a1);
  }
  return result;
}
