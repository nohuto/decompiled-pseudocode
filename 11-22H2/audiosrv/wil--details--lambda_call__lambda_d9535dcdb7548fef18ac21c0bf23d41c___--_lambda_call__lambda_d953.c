/*
 * XREFs of wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___ @ 0x1800E77A4
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052430 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800E7C60 (_lambda_d9535dcdb7548fef18ac21c0bf23d41c_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()();
  }
  return result;
}
