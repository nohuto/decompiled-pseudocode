/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180070FC0 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180071040 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1800A0370 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800A0430 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x1800B0D90 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1800712F4 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  RtlpFcBufferManagerReferenceBuffers(&unk_180185E28, v11, &v12);
  v7 = MEMORY[0x7FFE0720];
  v8 = v11[0];
  if ( v11[0] >= MEMORY[0x7FFE0720] )
    goto LABEL_2;
  RtlpFcBufferManagerDereferenceBuffers(&unk_180185E28, v12);
  v12 = 0LL;
  LOBYTE(v10) = a2;
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager, v7, v10);
  if ( (int)result >= 0 )
  {
    RtlpFcBufferManagerReferenceBuffers(&unk_180185E28, v11, &v12);
    v8 = v11[0];
LABEL_2:
    *a3 = v8;
    *a4 = v12;
    return 0LL;
  }
  return result;
}
