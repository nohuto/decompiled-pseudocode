/*
 * XREFs of StringCbLengthW @ 0x1402F51A8
 * Callers:
 *     sub_1406F24A0 @ 0x1406F24A0 (sub_1406F24A0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x14074891C (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140749090 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x14074A020 (PfVerifyScenarioBuffer.c)
 *     sub_140A4BC20 @ 0x140A4BC20 (sub_140A4BC20.c)
 *     sub_140A4BFD4 @ 0x140A4BFD4 (sub_140A4BFD4.c)
 *     sub_140A4C964 @ 0x140A4C964 (sub_140A4C964.c)
 *     sub_140A4CEFC @ 0x140A4CEFC (sub_140A4CEFC.c)
 *     sub_140A4D318 @ 0x140A4D318 (sub_140A4D318.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
