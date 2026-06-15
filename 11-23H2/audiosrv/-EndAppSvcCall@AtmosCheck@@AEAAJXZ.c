/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18015AE40
 * Callers:
 *     wil::details::lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___::_lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___ @ 0x180159E38 (wil--details--lambda_call__lambda_b3fa5fa199a4b5a7777ced0e1a22eb81___--_lambda_call__lambda_b3fa.c)
 *     wil::details::lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___::_lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___ @ 0x180159E78 (wil--details--lambda_call__lambda_bc1469c24c1a89e0685d15f2f8a7e676___--_lambda_call__lambda_bc14.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C5EC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C7C4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // edi
  _DWORD *v3; // rdx
  _DWORD *v4; // r8
  _DWORD *i; // rax

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v3 = (_DWORD *)*((_QWORD *)this + 84);
  v4 = (_DWORD *)*((_QWORD *)this + 85);
  while ( v3 != v4 && CurrentThreadId != *v3 )
    ++v3;
  if ( v3 != v4 )
  {
    for ( i = v3 + 1; i != v4; ++i )
    {
      if ( CurrentThreadId != *i )
        *v3++ = *i;
    }
  }
  if ( v3 != *((_DWORD **)this + 85) )
    *((_QWORD *)this + 85) = v3;
  return 0LL;
}
