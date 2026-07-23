/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180070FC0 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180071040 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1800A0330 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A03F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x1800B0D90 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1800712F4 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  RtlpFcBufferManagerReferenceBuffers(&unk_180185E28, v8, &v9);
  v6 = v8[0];
  if ( v8[0] >= MEMORY[0x7FFE0720] )
    goto LABEL_2;
  RtlpFcBufferManagerDereferenceBuffers(&unk_180185E28, v9);
  v9 = 0LL;
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager);
  if ( (int)result >= 0 )
  {
    RtlpFcBufferManagerReferenceBuffers(&unk_180185E28, v8, &v9);
    v6 = v8[0];
LABEL_2:
    *a3 = v6;
    *a4 = v9;
    return 0LL;
  }
  return result;
}
