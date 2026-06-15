/*
 * XREFs of wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___ @ 0x1800E7774
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052440 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800E7C84 (_lambda_e7a2b3fb80c66b26b9fa382759a6ec05_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()();
  }
  return result;
}
