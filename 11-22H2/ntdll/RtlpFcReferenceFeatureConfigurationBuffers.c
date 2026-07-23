/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x180070F10
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180070D20 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180070DA0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureConfiguration @ 0x180070E50 (RtlQueryFeatureConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x1800AECC0 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x180070FD0 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800710A4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  RtlpFcBufferManagerReferenceBuffers(&unk_180182DE8, v8, &v9);
  v6 = v8[0];
  if ( v8[0] >= MEMORY[0x7FFE0720] )
    goto LABEL_2;
  RtlpFcBufferManagerDereferenceBuffers(&unk_180182DE8, v9);
  v9 = 0LL;
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager);
  if ( (int)result >= 0 )
  {
    RtlpFcBufferManagerReferenceBuffers(&unk_180182DE8, v8, &v9);
    v6 = v8[0];
LABEL_2:
    *a3 = v6;
    *a4 = v9;
    return 0LL;
  }
  return result;
}
