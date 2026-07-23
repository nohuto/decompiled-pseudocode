/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x180071630
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180070FC0 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180071040 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1800A0330 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A03F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x1800B0D90 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 */

int __fastcall RtlpFcBufferManagerDereferenceBuffers(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r10
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  signed __int64 v7; // rax
  volatile signed __int64 v8; // rtt
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  v11 = 0;
  v4 = (unsigned int)v3 + (v3 >> 63);
  while ( 1 )
  {
    _m_prefetchw((const void *)v2);
    v5 = *v2;
    v6 = *v2 & 1;
    if ( v6 != v4 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v2;
    v7 = _InterlockedCompareExchange64(v2, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == v7 )
      return v7;
    RtlBackoff(&v11);
  }
  v7 = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v7 == 1 )
  {
    _InterlockedOr(v10, 0);
    LODWORD(v7) = RtlpWakeByAddress((unsigned __int64)(v2 + 1), 1);
  }
  return v7;
}
