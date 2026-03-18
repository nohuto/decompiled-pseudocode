/*
 * XREFs of DrvBuildDevmodeList @ 0x1C0079EE0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0069090 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C007A810 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C007A970 (DrvGetDisplayDriverNames.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BB16C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  void *v6; // rdx
  void *v7; // rdx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // esi
  unsigned int DriverModes; // eax
  void *v12; // r15
  size_t v13; // r14
  unsigned int v14; // eax
  char *v15; // rbp
  unsigned int v16; // edx
  unsigned int v17; // esi
  unsigned int i; // r8d
  PVOID v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 Pool2; // rdi
  unsigned int v22; // r8d
  unsigned int v23; // edi
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r11
  int v29; // ebp
  unsigned int v30; // eax
  __int64 v31; // r8
  void *v32; // rdx
  __int64 v33; // rax
  char v34; // r14
  void *v35; // rdx
  unsigned int v36; // r10d
  __int64 v37; // r9
  PVOID BackTrace[27]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+120h] [rbp+8h] BYREF
  void *Src; // [rsp+138h] [rbp+20h] BYREF

  Src = 0LL;
  v4 = *((_DWORD *)a1 + 40);
  if ( (v4 & 0x4000000) == 0 || gRemoteSessionUseWddm )
  {
    if ( (v4 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
    {
      if ( a3 && !a2 )
        goto LABEL_14;
      v5 = *((unsigned int *)a1 + 64);
      v39 = 0LL;
      if ( (int)((__int64 (__fastcall *)(char *, __int64, __int64 *))qword_1C02967B8)((char *)a1 + 248, v5, &v39) >= 0 )
      {
        if ( *((_QWORD *)a1 + 21) == v39 )
          goto LABEL_14;
        *((_QWORD *)a1 + 21) = v39;
      }
    }
    else if ( !a2 )
    {
      goto LABEL_14;
    }
  }
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_15;
  v6 = (void *)*((_QWORD *)a1 + 22);
  if ( v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
    v7 = (void *)*((_QWORD *)a1 + 24);
    *((_QWORD *)a1 + 22) = 0LL;
    *((_DWORD *)a1 + 46) = 0;
    if ( v7 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v7);
      *((_QWORD *)a1 + 24) = 0LL;
    }
  }
LABEL_14:
  if ( *((_DWORD *)a1 + 46) )
    return;
LABEL_15:
  if ( *((_QWORD *)a1 + 22) )
    return;
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v9 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v10 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v9[4 * v10 + 4],
                        *(void **)&v9[4 * v10 + 2],
                        (struct _devicemodeW **)&Src);
        v12 = Src;
        v13 = DriverModes;
        if ( DriverModes )
        {
          v14 = DriverModes + *((_DWORD *)a1 + 46);
          if ( v14 )
          {
            v15 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                            260LL,
                            v14,
                            1936876615);
            if ( v15 )
            {
              if ( *((_DWORD *)a1 + 46) )
              {
                memmove(v15, *((const void **)a1 + 22), *((unsigned int *)a1 + 46));
                v32 = (void *)*((_QWORD *)a1 + 22);
                if ( v32 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    v32);
              }
              memmove(&v15[*((unsigned int *)a1 + 46)], v12, v13);
              *((_DWORD *)a1 + 46) += v13;
              *((_QWORD *)a1 + 22) = v15;
            }
          }
        }
        if ( v12 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v12);
        ++v10;
      }
      while ( v10 < *v9 );
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v9);
  }
  v16 = *((_DWORD *)a1 + 46);
  if ( !v16 && !*((_QWORD *)a1 + 22) )
  {
LABEL_59:
    DrvLogDisplayDriverEvent(2LL);
    return;
  }
  v17 = 0;
  for ( i = 0;
        i < v16;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v17;
  }
  if ( !(16 * v17) )
    goto LABEL_74;
  v19 = gpLeakTrackingAllocator;
  v20 = 16 * v17;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) == 0x73726447 )
  {
    v33 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v33) != 1936876615 )
      {
        if ( ++v33 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_32;
      }
      v34 = 0;
      if ( v20 < 0x1000 || ((16 * (_WORD)v17) & 0xFFF) != 0 )
      {
        v34 = 1;
        v20 += 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v20);
      if ( Pool2 )
      {
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v34 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v19,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_33;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v19,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_33;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
LABEL_74:
      Pool2 = 0LL;
      goto LABEL_33;
    }
  }
LABEL_32:
  Pool2 = ExAllocatePool2(260LL, v20);
LABEL_33:
  *((_QWORD *)a1 + 24) = Pool2;
  if ( !Pool2 )
  {
    v35 = (void *)*((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    if ( v35 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v35);
    *((_QWORD *)a1 + 22) = 0LL;
    goto LABEL_59;
  }
  v22 = 0;
  *((_DWORD *)a1 + 47) = v17;
  v23 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_41;
  do
  {
    v24 = *((_QWORD *)a1 + 22) + v23;
    v25 = *(_DWORD *)(v24 + 72);
    if ( (v25 & 0x80u) == 0 )
    {
      v25 |= 0x80u;
      *(_DWORD *)(v24 + 72) = v25;
    }
    else if ( *(_DWORD *)(v24 + 84) <= 3u )
    {
      goto LABEL_37;
    }
    *(_DWORD *)(v24 + 84) = 0;
LABEL_37:
    if ( (v25 & 0x20000000) == 0 )
      goto LABEL_38;
    if ( (unsigned int)(*(_DWORD *)(v24 + 88) - 1) > 1 )
    {
      *(_DWORD *)(v24 + 72) = v25 & 0xDFFFFFFF;
LABEL_38:
      *(_DWORD *)(v24 + 88) = 0;
    }
    v26 = v22++;
    v26 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v26) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v26 + 8) = v24;
    v23 += *(unsigned __int16 *)(v24 + 70) + *(unsigned __int16 *)(v24 + 68);
  }
  while ( v23 < *((_DWORD *)a1 + 46) );
  v17 = *((_DWORD *)a1 + 47);
LABEL_41:
  v27 = 1LL;
  if ( v17 )
  {
    do
    {
      v28 = *((_QWORD *)a1 + 24);
      v29 = v27 - 1;
      v30 = v17;
      v31 = *(_QWORD *)(v28 + 16LL * (unsigned int)(v27 - 1) + 8);
      if ( *(_DWORD *)(v31 + 184) == 1 )
      {
        v36 = 1;
        if ( v17 )
        {
          while ( 1 )
          {
            if ( v36 != (_DWORD)v27 )
            {
              v37 = *(_QWORD *)(v28 + 16LL * (v36 - 1) + 8);
              if ( *(_DWORD *)(v31 + 168) == *(_DWORD *)(v37 + 168)
                && *(_DWORD *)(v31 + 172) == *(_DWORD *)(v37 + 172)
                && *(_DWORD *)(v31 + 176) == *(_DWORD *)(v37 + 176)
                && ((*(_BYTE *)(v31 + 180) ^ *(_BYTE *)(v37 + 180)) & 4) == 0
                && *(_DWORD *)(v31 + 84) == *(_DWORD *)(v37 + 84)
                && *(_DWORD *)(v31 + 88) == *(_DWORD *)(v37 + 88) )
              {
                break;
              }
            }
            v30 = *((_DWORD *)a1 + 47);
            ++v36;
            v17 = v30;
            if ( v36 > v30 )
              goto LABEL_43;
          }
          if ( v17 > (unsigned int)v27 )
          {
            memmove(
              (void *)(v28 + 16LL * (unsigned int)(v27 - 1)),
              (const void *)(v28 + 16 * v27),
              16LL * (v17 - (unsigned int)v27));
            v17 = *((_DWORD *)a1 + 47);
          }
          v30 = v17 - 1;
          LODWORD(v27) = v29;
          *((_DWORD *)a1 + 47) = v17 - 1;
        }
      }
LABEL_43:
      v27 = (unsigned int)(v27 + 1);
      v17 = v30;
    }
    while ( (unsigned int)v27 <= v30 );
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RemoveGdiModePruning__private_reporting,
    17015447LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v23 = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 47), *((struct tagDEVMODEMARK **)a1 + 24));
  if ( !v23 )
    goto LABEL_59;
}
