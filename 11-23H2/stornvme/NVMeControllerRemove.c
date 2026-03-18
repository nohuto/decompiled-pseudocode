/*
 * XREFs of NVMeControllerRemove @ 0x1C000E2F4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C00044B0 (NVMeControllerDeleteLocalCommandPool.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000955C (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0009AB8 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C0009B2C (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C0009B78 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C000AF04 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000EE44 (NVMeDisableThrottling.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000F020 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000FDC4 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // kr00_4
  unsigned int v3; // esi
  unsigned int v5; // r15d
  int v6; // ebx
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned int v11; // r10d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned int i; // r14d
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // eax
  unsigned int j; // r14d
  int v22; // eax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = *(_DWORD *)(a1 + 212);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  v3 = 0;
  v5 = v2 / 0xA;
  LOBYTE(v6) = 0;
  NVMePowerCleanUp();
  if ( *(_QWORD *)(a1 + 4000) )
    NVMeFreeHostMemoryBuffer(a1);
  v7 = *(_DWORD *)(v1 + 88);
  if ( v7 )
  {
    v8 = 10000 * (v7 / 0x2710uLL);
    v9 = v8 + 10000;
    if ( v7 == v8 )
      v9 = v7;
    v10 = v9 / 0x2710;
  }
  else
  {
    LODWORD(v10) = 500;
  }
  v11 = *(unsigned __int8 *)(a1 + 55);
  if ( (_BYTE)v11 )
  {
    v12 = 100 * ((unsigned int)v10 / 0x64uLL);
    v13 = v12 + 100;
    if ( (unsigned int)v10 == v12 )
      v13 = (unsigned int)v10;
    v14 = *(unsigned __int8 *)(a1 + 55);
    v15 = v13 / 0x64;
    if ( (unsigned int)v15 > v11 )
      v14 = v15;
    LODWORD(v10) = 100 * v14;
  }
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  NVMeFreeDmaBuffer(a1, 4096LL, a1 + 3992, *(_QWORD *)(a1 + 4224));
  NVMeFreeDmaBuffer(a1, 512LL, a1 + 4216, *(_QWORD *)(a1 + 4232));
  v16 = *(_QWORD *)(a1 + 4272);
  if ( v16 )
    StorPortExtendedFunction(1LL, a1, v16);
  FreeProcessorInfo(a1);
  FreeProcessorGroupInfo(a1);
  FreeMsiInfo(a1);
  NVMeDisableThrottling(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 232); ++i )
    {
      v18 = *(_QWORD *)(a1 + 8LL * i + 1952);
      if ( v18 )
        StorPortExtendedFunction(1LL, a1, v18);
    }
  }
  memset((void *)(a1 + 1952), 0, 0x7F8uLL);
  v19 = *(_QWORD *)(a1 + 4096);
  *(_DWORD *)(a1 + 220) = 0;
  if ( v19 )
  {
    StorPortExtendedFunction(1LL, a1, v19);
    *(_QWORD *)(a1 + 4096) = 0LL;
  }
  NVMeControllerDeleteLocalCommandPool(a1);
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
  {
    v20 = *(unsigned __int8 *)(a1 + 150);
    if ( !(_BYTE)v20 )
      return 1;
    if ( (unsigned int)v10 <= 100 * v20 )
      LODWORD(v10) = 100 * v20;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v24, 0);
  for ( j = 0; j < (unsigned int)v10; ++j )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( (v6 & 0xC) == 8 )
      break;
    StorPortExtendedFunction(81LL, a1, 10000LL);
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 && (*(_BYTE *)(a1 + 12) & 2) != 0 && (v6 & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) &= ~1u;
    _InterlockedOr(v24, 0);
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( !v5 )
      v5 = 3000;
    do
    {
      if ( (v22 & 1) == 0 )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) == -1LL )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v3;
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    }
    while ( v3 < v5 );
  }
  return 1;
}
