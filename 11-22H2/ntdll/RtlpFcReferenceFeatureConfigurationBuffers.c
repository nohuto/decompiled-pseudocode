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

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  RtlpFcBufferManagerReferenceBuffers(&unk_180182DE8, v11, &v12);
  v7 = MEMORY[0x7FFE0720];
  v8 = v11[0];
  if ( v11[0] >= MEMORY[0x7FFE0720] )
    goto LABEL_2;
  RtlpFcBufferManagerDereferenceBuffers(&unk_180182DE8, v12);
  v12 = 0LL;
  LOBYTE(v10) = a2;
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager, v7, v10);
  if ( (int)result >= 0 )
  {
    RtlpFcBufferManagerReferenceBuffers(&unk_180182DE8, v11, &v12);
    v8 = v11[0];
LABEL_2:
    *a3 = v8;
    *a4 = v12;
    return 0LL;
  }
  return result;
}
