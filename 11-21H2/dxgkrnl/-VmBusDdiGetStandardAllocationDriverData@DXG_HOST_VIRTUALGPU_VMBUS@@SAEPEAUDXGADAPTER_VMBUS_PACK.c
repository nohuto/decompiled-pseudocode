/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036AF40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C5D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // r12d
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  UINT v18; // ecx
  int StandardAllocationDriverData; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  _BYTE v21[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h]
  char v23; // [rsp+68h] [rbp-19h]
  _BYTE v24[8]; // [rsp+70h] [rbp-11h] BYREF
  DXGPUSHLOCK *v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+80h] [rbp-1h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+88h] [rbp+7h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v25);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v26 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v5 )
      goto LABEL_3;
    if ( *(_DWORD *)(v5 + 36) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 288LL) )
    {
      WdLogSingleEntry1(3LL, 2846LL);
      goto LABEL_3;
    }
    v7 = *(_DWORD *)(v5 + 28) + 36;
    if ( *(_DWORD *)(v5 + 28) >= 0xFFFFFFDC )
      goto LABEL_3;
    v8 = v7 + *(_DWORD *)(v5 + 32);
    if ( v8 < v7 )
      goto LABEL_3;
    v9 = (int *)operator new[](v8, 0x4B677844u, 64LL, v6);
    if ( !v9 )
      goto LABEL_3;
    v10 = *((_QWORD *)a1 + 10);
    memset(&v27, 0, sizeof(v27));
    v11 = *(_QWORD *)(v10 + 16);
    v27.StandardAllocationType = *(_DWORD *)(v5 + 24);
    v27.PhysicalAdapterIndex = *(_DWORD *)(v5 + 36);
    switch ( *(_DWORD *)(v5 + 24) )
    {
      case 1:
        v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v12->Width
          || (v16 = *(_DWORD *)(v5 + 48)) == 0
          || v16 > 199
          || !*(_DWORD *)(v5 + 52)
          || !*(_DWORD *)(v5 + 56)
          || *(_DWORD *)(v5 + 60) )
        {
          WdLogSingleEntry1(3LL, 2938LL);
          goto LABEL_69;
        }
        break;
      case 2:
        v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v12->Width
          || *(_DWORD *)(v5 + 52)
          || (v15 = *(_DWORD *)(v5 + 48)) == 0
          || v15 > 199 )
        {
          WdLogSingleEntry1(3LL, 2897LL);
          goto LABEL_69;
        }
        break;
      case 3:
        v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44) || !v12->Width || *(_DWORD *)(v5 + 48) )
        {
          WdLogSingleEntry1(3LL, 2879LL);
          goto LABEL_69;
        }
        break;
      case 4:
        v12 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v5 + 40);
        if ( !*(_DWORD *)(v5 + 44)
          || !v12->Width
          || (v13 = *(_DWORD *)(v5 + 52)) == 0
          || v13 > 8
          || *(_DWORD *)(v5 + 60)
          || (v14 = *(_DWORD *)(v5 + 48)) == 0 && v13 != 7
          || v14 > 199
          || *(_DWORD *)(v5 + 56) )
        {
          WdLogSingleEntry1(3LL, 2918LL);
          goto LABEL_69;
        }
        break;
      default:
        WdLogSingleEntry1(2LL, 2949LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid standard allocation type",
          2949LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_69:
        *v9 = -1073741811;
LABEL_70:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v9, v8);
        operator delete[](v9);
        goto LABEL_4;
    }
    v27.pCreateSharedPrimarySurfaceData = v12;
    v22 = v11;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( *(_DWORD *)(v11 + 200) != 1 )
    {
      *v9 = -1073741130;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v5 + 28) || (v18 = 0, *(_DWORD *)(v5 + 32)) )
    {
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                       *(ADAPTER_RENDER **)(v11 + 2800),
                                       &v27,
                                       v17);
      *v9 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
        goto LABEL_50;
      v18 = *(_DWORD *)(v5 + 28);
      if ( v27.AllocationPrivateDriverDataSize > v18 || v27.ResourcePrivateDriverDataSize > *(_DWORD *)(v5 + 32) )
      {
        WdLogSingleEntry1(3LL, 2977LL);
        *v9 = -1073741811;
        goto LABEL_45;
      }
    }
    v27.AllocationPrivateDriverDataSize = v18;
    if ( v18 )
      v27.pAllocationPrivateDriverData = v9 + 9;
    v27.ResourcePrivateDriverDataSize = *(_DWORD *)(v5 + 32);
    if ( v27.ResourcePrivateDriverDataSize )
      v27.pResourcePrivateDriverData = (char *)v9 + v18 + 36;
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v11 + 2800),
                                     &v27,
                                     v17);
    *v9 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData >= 0 )
    {
      v9[1] = v27.AllocationPrivateDriverDataSize;
      v9[2] = v27.ResourcePrivateDriverDataSize;
      if ( v27.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
      {
        if ( v27.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
        {
          *(_OWORD *)(v9 + 3) = *(_OWORD *)v27.pCreateSharedPrimarySurfaceData;
          goto LABEL_45;
        }
        if ( v27.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
        {
          pCreateSharedPrimarySurfaceData = v27.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v9 + 3) = *(_QWORD *)v27.pCreateSharedPrimarySurfaceData;
          v9[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_45;
        }
        if ( v27.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
        {
          WdLogSingleEntry1(2LL, 3018LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid standard allocation type",
            3018LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_45;
        }
      }
      *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v9 + 3) = *v27.pCreateSharedPrimarySurfaceData;
LABEL_45:
      if ( v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      goto LABEL_70;
    }
LABEL_50:
    WdLogSingleEntry1(2LL, StandardAllocationDriverData);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DdiGetStandardAllocationDriverData failed: 0x%I64x",
      *v9,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_45;
  }
  WdLogSingleEntry1(2LL, 2840LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    2840LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v3;
}
