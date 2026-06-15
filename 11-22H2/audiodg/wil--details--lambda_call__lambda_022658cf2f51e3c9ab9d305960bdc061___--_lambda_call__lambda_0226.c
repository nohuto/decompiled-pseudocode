/*
 * XREFs of wil::details::lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___::_lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___ @ 0x140073700
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073E30 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___::_lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CAudioPump::SignalAndWaitForThread(*(CAudioPump **)a1);
  }
}
