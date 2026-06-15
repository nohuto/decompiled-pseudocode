/*
 * XREFs of wil::details::lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___::_lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___ @ 0x180159E78
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C5EC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$0 @ 0x18015C7A3 (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015AE40 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___::_lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = AtmosCheck::EndAppSvcCall(*(AtmosCheck **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E0,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}
