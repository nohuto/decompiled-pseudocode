/*
 * XREFs of ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C012C810
 * Callers:
 *     <none>
 * Callees:
 *     ndisNdkPcwAddCounter @ 0x1C0098060 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00981E0 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwCollectData @ 0x1C012C8E8 (ndisNdkPcwCollectData.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C012CAC0 (ndisNdkPcwRemoveCounter.c)
 */

__int64 __fastcall ndisNdkPcwProviderCallback(
        enum _PCW_CALLBACK_TYPE a1,
        union _PCW_CALLBACK_INFORMATION *a2,
        void *a3)
{
  int v3; // ecx
  int v4; // ecx

  if ( a1 == PcwCallbackAddCounter )
    return ndisNdkPcwAddCounter((__int64)a2);
  v3 = a1 - 1;
  if ( !v3 )
    return ndisNdkPcwRemoveCounter(a2);
  v4 = v3 - 1;
  if ( !v4 )
    return ndisNdkPcwEnumerateInstances(a2->EnumerateInstances.Buffer);
  if ( v4 == 1 )
    return ndisNdkPcwCollectData(a2);
  return 0LL;
}
