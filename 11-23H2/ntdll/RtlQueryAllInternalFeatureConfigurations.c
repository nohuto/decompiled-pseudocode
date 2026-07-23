/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x1800A0330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers @ 0x1800A065C (RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers.c)
 *     RtlpFcConfigurationTypeToBufferType @ 0x180130454 (RtlpFcConfigurationTypeToBufferType.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // rdi
  int AllInternalFeatureConfigurationsFromBuffers; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF

  v13 = 0LL;
  v6 = (_QWORD *)a2;
  LOBYTE(a2) = 1;
  v7 = a1;
  v8 = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, v14, &v13);
  v9 = v13;
  AllInternalFeatureConfigurationsFromBuffers = v8;
  if ( v8 >= 0 )
  {
    if ( v7 < 2 )
    {
      v11 = RtlpFcConfigurationTypeToBufferType(v7);
      AllInternalFeatureConfigurationsFromBuffers = RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers(
                                                      v9 + 24LL * v11,
                                                      a3,
                                                      a4);
      if ( AllInternalFeatureConfigurationsFromBuffers >= 0 )
      {
        if ( v6 )
          *v6 = v14[0];
        AllInternalFeatureConfigurationsFromBuffers = 0;
      }
    }
    else
    {
      AllInternalFeatureConfigurationsFromBuffers = -1073741811;
    }
  }
  if ( v9 )
    RtlpFcBufferManagerDereferenceBuffers(qword_180185E28, v9);
  return (unsigned int)AllInternalFeatureConfigurationsFromBuffers;
}
