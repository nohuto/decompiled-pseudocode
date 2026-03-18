/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0013E38
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001E1C0 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00227A0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // r13
  int v4; // edi
  unsigned int v5; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v6; // rbx
  int v7; // eax
  __int64 Pool2; // rsi
  unsigned int v9; // r15d
  struct tagGRAPHICS_DEVICE *v10; // r13
  __int64 *v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int DeviceInfoInternal; // edi
  int v16; // eax
  __int64 DxgkWin32kInterface; // rax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _QWORD *v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // r11
  unsigned int v24; // [rsp+20h] [rbp-9E8h]
  unsigned int v25; // [rsp+28h] [rbp-9E0h] BYREF
  int v26; // [rsp+30h] [rbp-9D8h]
  unsigned __int64 v27[2]; // [rsp+40h] [rbp-9C8h] BYREF
  int v28; // [rsp+50h] [rbp-9B8h]
  __int64 v29; // [rsp+60h] [rbp-9A8h] BYREF
  _BYTE v30[8]; // [rsp+68h] [rbp-9A0h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-998h]
  PVOID P; // [rsp+78h] [rbp-990h]
  __int64 v33; // [rsp+80h] [rbp-988h] BYREF
  struct tagGRAPHICS_DEVICE *v34; // [rsp+88h] [rbp-980h]
  struct _devicemodeW *v35; // [rsp+90h] [rbp-978h]
  _OWORD v36[5]; // [rsp+A0h] [rbp-968h] BYREF
  PVOID BackTrace[20]; // [rsp+F0h] [rbp-918h] BYREF
  _BYTE v38[944]; // [rsp+190h] [rbp-878h] BYREF
  _OWORD v39[14]; // [rsp+540h] [rbp-4C8h] BYREF
  __int64 v40; // [rsp+620h] [rbp-3E8h] BYREF
  unsigned __int64 v41; // [rsp+628h] [rbp-3E0h]
  __int128 v42; // [rsp+630h] [rbp-3D8h]
  __int128 v43; // [rsp+640h] [rbp-3C8h]
  __m128i v44; // [rsp+650h] [rbp-3B8h]
  __int128 v45; // [rsp+660h] [rbp-3A8h]
  __int64 v46; // [rsp+9B4h] [rbp-54h]
  int v47; // [rsp+9CCh] [rbp-3Ch]

  v34 = a2;
  v3 = a1;
  v35 = a1;
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v24 = 0x7FFF;
  v26 = 0x7FFF;
  v5 = 0x7FFF;
  v25 = 1986356295;
  v29 = 260LL;
  v6 = gpLeakTrackingAllocator;
  v33 = 65755LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 65755LL, 1986356295LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
LABEL_5:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_6;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v27[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, v27) )
      {
        v27[0] = (unsigned __int64)&v29;
        v27[1] = (unsigned __int64)&v25;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v6,
                  v27,
                  &v33);
        goto LABEL_5;
      }
      Pool2 = ExAllocatePool2(v23, 65771LL, v22);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  v27[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     v27[0],
                                     BackTrace) )
        {
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_38:
    Pool2 = 0LL;
    goto LABEL_5;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u) )
    goto LABEL_38;
  v21 = (_QWORD *)ExAllocatePool2(v29 & 0xFFFFFFFFFFFFFFFDuLL, 65771LL, v25);
  Pool2 = (__int64)v21;
  if ( !v21
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v21 = 1986356295LL,
        Pool2 = (__int64)(v21 + 2),
        v21 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x76656447);
    goto LABEL_5;
  }
LABEL_6:
  v31 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v30, a2);
  v9 = 0;
  if ( !v31 )
    goto LABEL_20;
  v10 = v34;
  do
  {
    *(_OWORD *)v27 = 0LL;
    v28 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v30, v9, (struct tagVIDEO_MONITOR_DEVICE *)v27);
    if ( (v27[0] & 3) != 3 )
      goto LABEL_18;
    v47 = 0;
    memset(v38, 0, 0x3ACuLL);
    v11 = &v40;
    v12 = v38;
    v13 = 7LL;
    do
    {
      *(_OWORD *)v11 = *(_OWORD *)v12;
      *((_OWORD *)v11 + 1) = *((_OWORD *)v12 + 1);
      *((_OWORD *)v11 + 2) = *((_OWORD *)v12 + 2);
      *((_OWORD *)v11 + 3) = *((_OWORD *)v12 + 3);
      *((_OWORD *)v11 + 4) = *((_OWORD *)v12 + 4);
      *((_OWORD *)v11 + 5) = *((_OWORD *)v12 + 5);
      *((_OWORD *)v11 + 6) = *((_OWORD *)v12 + 6);
      v11 += 16;
      *((_OWORD *)v11 - 1) = *((_OWORD *)v12 + 7);
      v12 += 128;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *((_OWORD *)v11 + 1) = *((_OWORD *)v12 + 1);
    v11[4] = *((_QWORD *)v12 + 4);
    *((_DWORD *)v11 + 10) = *((_DWORD *)v12 + 10);
    v40 = 0x3ACFFFFFFF9LL;
    v14 = v27[1];
    v41 = v27[1];
    LODWORD(v42) = HIDWORD(v27[0]);
    DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v40, 0);
    memset(v39, 0, 0xD8uLL);
    *(_QWORD *)&v39[1] = *((_QWORD *)v10 + 30);
    DWORD2(v39[1]) = *((_DWORD *)v10 + 62);
    HIDWORD(v39[1]) = HIDWORD(v27[0]);
    if ( DeviceInfoInternal < 0 )
    {
      memset(v36, 0, sizeof(v36));
      v42 = v36[1];
      v43 = v36[2];
      v44 = (__m128i)v36[3];
      v45 = v36[4];
      v40 = 0x5000000003LL;
      v41 = v14;
      LODWORD(v42) = HIDWORD(v27[0]);
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)&v40, 0) < 0 )
      {
        v4 = v24;
        goto LABEL_18;
      }
      v39[2] = v43;
      v39[3] = v44;
      v39[4] = v45;
      *(_QWORD *)((char *)&v39[12] + 4) = v44.m128i_i64[0];
      *((_QWORD *)&v39[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v44, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v44, 8)));
      HIDWORD(v39[7]) = DWORD1(v42);
      v16 = DWORD2(v42);
    }
    else
    {
      *((_QWORD *)&v39[3] + 1) = v46;
      v16 = HIDWORD(v46);
      *(_QWORD *)&v39[3] = 0xFFFFFFFEFFFFFFFEuLL;
      *(_QWORD *)((char *)&v39[12] + 4) = 0xFFFFFFFEFFFFFFFEuLL;
      HIDWORD(v39[4]) = 1;
      *((_QWORD *)&v39[5] + 1) = v46;
      HIDWORD(v39[7]) = v46;
    }
    LODWORD(v39[8]) = v16;
    DWORD1(v39[13]) = 1;
    *(_QWORD *)&v39[0] = 0x700001030387LL;
    LODWORD(v39[7]) = 1;
    DWORD2(v39[6]) = 1;
    LODWORD(v39[6]) = 21;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    v4 = v24;
    if ( (*(int (__fastcall **)(_OWORD *, __int64))(DxgkWin32kInterface + 688))(v39, Pool2) >= 0 )
    {
      v18 = *(_DWORD *)(Pool2 + 184);
      if ( v18 >= v5 )
        v18 = v5;
      v5 = v18;
      if ( *(_DWORD *)(Pool2 + 172) <= v24 )
      {
        v4 = *(_DWORD *)(Pool2 + 172);
        v24 = v4;
        v26 = *(_DWORD *)(Pool2 + 176);
      }
    }
LABEL_18:
    ++v9;
  }
  while ( v9 < v31 );
  v3 = v35;
LABEL_20:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  v19 = -1073741583;
  if ( v4 != 0x7FFF )
    v19 = 0;
  v25 = v19;
  v3->dmDisplayFrequency = v5;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v26;
  v3->dmFields = 5767168;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v19;
}
