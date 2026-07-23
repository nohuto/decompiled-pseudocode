/*
 * XREFs of StringCbLengthW @ 0x1402F5438
 * Callers:
 *     sub_1406F24D0 @ 0x1406F24D0 (sub_1406F24D0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140748B0C (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140749280 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x14074A210 (PfVerifyScenarioBuffer.c)
 *     sub_140A4BED0 @ 0x140A4BED0 (sub_140A4BED0.c)
 *     sub_140A4C284 @ 0x140A4C284 (sub_140A4C284.c)
 *     sub_140A4CC14 @ 0x140A4CC14 (sub_140A4CC14.c)
 *     sub_140A4D1AC @ 0x140A4D1AC (sub_140A4D1AC.c)
 *     sub_140A4D5C8 @ 0x140A4D5C8 (sub_140A4D5C8.c)
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
