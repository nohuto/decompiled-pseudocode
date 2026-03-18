/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140848FB8
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1403A38F0 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x140848DE8 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1409E183C (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14022AAB4 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
