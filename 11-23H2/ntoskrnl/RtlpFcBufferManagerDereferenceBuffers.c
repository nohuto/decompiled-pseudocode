/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x14035D208
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035D100 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1404115C0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140411680 (RtlQueryInternalFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x14080E008 (CmFcpManagerDrainUsageNotifications.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409BD400 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A26E1C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A272F0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A27718 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x14035D244 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x1407D1090 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
