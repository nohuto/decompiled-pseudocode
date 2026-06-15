/*
 * XREFs of wil::details::lambda_call__lambda_a38155374950cc703618dff16e7da6d8___::_lambda_call__lambda_a38155374950cc703618dff16e7da6d8___ @ 0x1800CE470
 * Callers:
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180059990 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_a38155374950cc703618dff16e7da6d8___::_lambda_call__lambda_a38155374950cc703618dff16e7da6d8___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return RpcStringFreeW(*(RPC_WSTR **)a1);
  }
  return result;
}
