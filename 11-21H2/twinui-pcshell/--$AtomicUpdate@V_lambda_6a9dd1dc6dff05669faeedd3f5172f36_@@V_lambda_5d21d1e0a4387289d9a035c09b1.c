/*
 * XREFs of ??$AtomicUpdate@V_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@V_lambda_5d21d1e0a4387289d9a035c09b198600_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@AEBV_lambda_5d21d1e0a4387289d9a035c09b198600_@@@Z @ 0x180455970
 * Callers:
 *     ??R_lambda_a6988e4df8e85096e45cabd6772edee5_@@QEBAJXZ @ 0x1804562D8 (--R_lambda_a6988e4df8e85096e45cabd6772edee5_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284 (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6a9dd1dc6dff05669faeedd3f5172f36_,_lambda_5d21d1e0a4387289d9a035c09b198600_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = _lambda_60cffcfe8b0715df3af987611c13edce_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
