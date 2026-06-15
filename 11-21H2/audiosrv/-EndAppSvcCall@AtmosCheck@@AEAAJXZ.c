/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180153CC8
 * Callers:
 *     wil::details::lambda_call__lambda_91fe6da58ef6dd6eb3bf31e4bb749095___::_lambda_call__lambda_91fe6da58ef6dd6eb3bf31e4bb749095___ @ 0x180152AC4 (wil--details--lambda_call__lambda_91fe6da58ef6dd6eb3bf31e4bb749095___--_lambda_call__lambda_91fe.c)
 *     wil::details::lambda_call__lambda_ef110c6dc01370a9a6f9649378566aab___::_lambda_call__lambda_ef110c6dc01370a9a6f9649378566aab___ @ 0x180152B04 (wil--details--lambda_call__lambda_ef110c6dc01370a9a6f9649378566aab___--_lambda_call__lambda_ef11.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015563C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180155800 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // ebx
  _DWORD *v3; // rdi
  _DWORD *v4; // rdx
  _DWORD *i; // rax
  _DWORD *v6; // rdx

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
  v6 = (_DWORD *)*((_QWORD *)this + 85);
  if ( v3 != v6 )
  {
    memmove_0(v3, v6, 0LL);
    *((_QWORD *)this + 85) = v3;
  }
  return 0LL;
}
