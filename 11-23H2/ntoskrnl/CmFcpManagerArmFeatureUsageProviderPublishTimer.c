/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x14041A080
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x14031E080 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CmFcpManagerArmFeatureUsageProviderPublishTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  _BOOL8 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1496);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (__int64)v3);
  }
  return result;
}
