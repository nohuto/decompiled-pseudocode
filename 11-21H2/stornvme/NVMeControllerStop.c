/*
 * XREFs of NVMeControllerStop @ 0x1C00195A8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     FreeMsiInfo @ 0x1C000642C (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C00078F8 (FreeProcessorInfo.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0017C84 (AdminQueuesFreeResources.c)
 *     IoQueuesDeletion @ 0x1C0017F20 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C00181C4 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C001967C (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C00196F4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C0019BC8 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 i; // rdi
  __int64 v20; // r8

  v5 = IoQueuesDeletion(a1, a2, a3, a4);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3800) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1, v6, v7, v8);
  AdminQueuesFreeResources(a1, v9, v10, v11);
  FreeProcessorInfo(a1, v12, v13, v14);
  FreeMsiInfo(a1, v15, v16, v17);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v20 = *(_QWORD *)(a1 + 8 * i + 1752);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20, v18);
    }
  }
  memset((void *)(a1 + 1752), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  NVMeDisableThrottling(a1);
  return v5;
}
