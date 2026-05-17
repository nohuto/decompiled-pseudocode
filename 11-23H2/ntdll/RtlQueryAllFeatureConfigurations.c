/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x180071040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180071234 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180071630 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x180130058 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllFeatureConfigurations(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  unsigned int v7; // r15d
  int AllFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0LL;
  v6 = a2;
  LOBYTE(a2) = 1;
  v7 = a1;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, &v11, &v10);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(v10, v7, a3, a4);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( v6 )
        *v6 = v11;
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers(&unk_180185E28, v10);
  return (unsigned int)AllFeatureConfigurationsFromBufferSet;
}
