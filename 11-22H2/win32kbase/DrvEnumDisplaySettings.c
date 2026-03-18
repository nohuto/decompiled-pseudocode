/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0033CC0
 * Callers:
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C005C7A8 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C01404B0 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0013E38 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00169E4 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00188E0 (DrvGetDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00226A0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     PALLOCMEM @ 0x1C004F000 (PALLOCMEM.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     DrvGetDeviceFromName @ 0x1C005B090 (DrvGetDeviceFromName.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00D2B2C (Feature_Vail__private_ReportDeviceUsage.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C01614AC (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 DrvEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, unsigned int a3, struct _devicemodeW *a4, ...)
{
  unsigned int v5; // r12d
  __int64 DeviceFromName; // rsi
  int PreferredMode; // r14d
  NSInstrumentation::CLeakTrackingAllocator *v11; // r14
  int v12; // eax
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r10
  int DevModeForLddmPath; // eax
  unsigned __int16 v17; // ax
  WCHAR *v18; // r15
  __int64 v19; // rax
  PDEV *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  __int64 v25; // rcx
  char v26; // cl
  __int64 v27; // rcx
  __int64 *i; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  struct _devicemodeW *v31; // rax
  struct _devicemodeW *v32; // rbx
  _DWORD *v33; // r8
  __int64 v34; // r13
  unsigned int v35; // r10d
  unsigned int v36; // r9d
  int v37; // r11d
  int v38; // ecx
  __int64 v39; // rdx
  unsigned __int16 v40; // ax
  unsigned int v41; // ebx
  size_t v42; // r14
  void *v43; // rcx
  void *v44; // rcx
  WORD dmDriverExtra; // [rsp+30h] [rbp-138h]
  unsigned int dmDisplayOrientation; // [rsp+38h] [rbp-130h] BYREF
  int v47; // [rsp+40h] [rbp-128h]
  _BYTE v48[4]; // [rsp+44h] [rbp-124h] BYREF
  PCUNICODE_STRING String1; // [rsp+48h] [rbp-120h] BYREF
  __int64 v50; // [rsp+50h] [rbp-118h]
  __int64 v51; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-108h] BYREF
  _DWORD *v53; // [rsp+68h] [rbp-100h]
  __int64 v54; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v55; // [rsp+78h] [rbp-F0h]
  WORD *p_dmDriverExtra; // [rsp+80h] [rbp-E8h]
  _QWORD v57[2]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+180h] [rbp+18h] BYREF
  struct _devicemodeW *v60; // [rsp+188h] [rbp+20h]
  __int64 v61; // [rsp+190h] [rbp+28h] BYREF
  va_list va; // [rsp+190h] [rbp+28h]
  va_list va1; // [rsp+198h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v61 = va_arg(va1, _QWORD);
  v60 = a4;
  v59 = a3;
  v5 = a3;
  v47 = -1073741585;
  DeviceFromName = 0LL;
  v50 = 0LL;
  v55 = a3;
  WdLogSingleEntry4(4LL, a1, a2, a3, (unsigned int)v61);
  if ( ((unsigned __int8)a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  p_dmDriverExtra = &a4->dmDriverExtra;
  dmDriverExtra = a4->dmDriverExtra;
  ProbeForWrite(a4, dmDriverExtra + 220LL, 2u);
  if ( a4->dmSize != 220 )
  {
    WdLogSingleEntry0(5LL);
    return 3221225507LL;
  }
  if ( a1 )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
      v50 = DeviceFromName;
    }
    if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
    {
      DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
      v50 = DeviceFromName;
    }
    if ( String1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)String1);
  }
  else if ( a2 )
  {
    DeviceFromName = *(_QWORD *)(a2 + 2552);
    v50 = DeviceFromName;
  }
  if ( !DeviceFromName )
  {
    PreferredMode = v47;
    goto LABEL_119;
  }
  if ( v5 != -3 )
  {
    if ( v5 == -2 )
    {
      dmDisplayOrientation = 1986356295;
      v51 = 260LL;
      v11 = gpLeakTrackingAllocator;
      v54 = 65755LL;
      v12 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, 65755LL, 1986356295LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
        goto LABEL_35;
      }
      if ( v12 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u) )
        {
          v14 = (_QWORD *)ExAllocatePool2(v51 & 0xFFFFFFFFFFFFFFFDuLL, 65771LL, dmDisplayOrientation);
          Pool2 = (__int64)v14;
          if ( !v14
            || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
                *v14 = 1986356295LL,
                Pool2 = (__int64)(v14 + 2),
                v14 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v11 + 1),
              (const void *)0x76656447);
          }
          goto LABEL_35;
        }
      }
      else if ( v12 == 2 )
      {
        v52 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, &v52) )
        {
          v57[0] = &v51;
          v57[1] = &dmDisplayOrientation;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    v11,
                    v57,
                    &v54);
          goto LABEL_35;
        }
        Pool2 = ExAllocatePool2(v15, 65771LL, 1986356295LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v11,
                                    Pool2,
                                    v52,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_35:
              String1 = (PCUNICODE_STRING)Pool2;
              if ( Pool2 )
              {
                if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
                {
                  DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                         0xFFFFFFFE,
                                         (struct _devicemodeW *)Pool2,
                                         0LL);
                }
                else
                {
                  *(_DWORD *)(Pool2 + 68) = -8739;
                  DevModeForLddmPath = DrvGetDisplayDriverParameters(
                                         DeviceFromName,
                                         (struct _devicemodeW *)Pool2,
                                         0,
                                         0LL);
                }
                PreferredMode = DevModeForLddmPath;
                if ( DevModeForLddmPath >= 0 )
                {
                  v17 = *(_WORD *)(Pool2 + 70);
                  if ( dmDriverExtra < v17 )
                    v17 = dmDriverExtra;
                  dmDriverExtra = v17;
                  memmove(&a4[1], (const void *)(Pool2 + 220), v17);
                  *(_OWORD *)a4->dmDeviceName = *(_OWORD *)Pool2;
                  *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(Pool2 + 16);
                  *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(Pool2 + 32);
                  *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(Pool2 + 48);
                  *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(Pool2 + 64);
                  *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(Pool2 + 80);
                  *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(Pool2 + 96);
                  v18 = &a4->dmFormName[13];
                  *((_OWORD *)v18 - 1) = *(_OWORD *)(Pool2 + 112);
                  *(_OWORD *)v18 = *(_OWORD *)(Pool2 + 128);
                  *((_OWORD *)v18 + 1) = *(_OWORD *)(Pool2 + 144);
                  *((_OWORD *)v18 + 2) = *(_OWORD *)(Pool2 + 160);
                  *((_OWORD *)v18 + 3) = *(_OWORD *)(Pool2 + 176);
                  *((_OWORD *)v18 + 4) = *(_OWORD *)(Pool2 + 192);
                  *((_QWORD *)v18 + 10) = *(_QWORD *)(Pool2 + 208);
                  *((_DWORD *)v18 + 22) = *(_DWORD *)(Pool2 + 216);
                }
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
              }
              else
              {
                PreferredMode = -1073741801;
              }
              goto LABEL_119;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v11,
                                       Pool2,
                                       v52,
                                       BackTrace) )
          {
            goto LABEL_35;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
      goto LABEL_35;
    }
    if ( v5 == -1 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v48);
      v19 = hdevEnumerate<1>(0LL);
      PreferredMode = v47;
      while ( 1 )
      {
        v51 = v19;
        v20 = (PDEV *)v19;
        if ( !v19 )
          break;
        v21 = *(_QWORD *)(v19 + 2552);
        if ( v21 == DeviceFromName && *(_DWORD *)(v19 + 12) )
        {
          LOBYTE(v61) = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v19 + 2568) + 184LL) == 1 && (*(_DWORD *)(v21 + 160) & 0x800000) != 0 )
          {
            v22 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)DeviceFromName, 0xFFFFFFFF, 0LL, (bool *)va);
            if ( v22 < 0 )
              WdLogSingleEntry1(5LL, v22);
          }
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
          {
            Feature_Vail__private_ReportDeviceUsage();
            LOBYTE(v61) = 1;
          }
          v23 = *((_QWORD *)v20 + 321);
          v24 = *(_WORD *)(v23 + 70);
          if ( dmDriverExtra < v24 )
            v24 = dmDriverExtra;
          dmDriverExtra = v24;
          memmove(&a4[1], (const void *)(v23 + 220), v24);
          v25 = *((_QWORD *)v20 + 321);
          *(_OWORD *)a4->dmDeviceName = *(_OWORD *)v25;
          *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(v25 + 48);
          *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(v25 + 64);
          *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v25 + 80);
          *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(v25 + 96);
          *(_OWORD *)&a4->dmFormName[5] = *(_OWORD *)(v25 + 112);
          v25 += 128LL;
          *(_OWORD *)&a4->dmFormName[13] = *(_OWORD *)v25;
          *(_OWORD *)&a4->dmFormName[21] = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&a4->dmFormName[29] = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&a4->dmPelsHeight = *(_OWORD *)(v25 + 48);
          *(_OWORD *)&a4->dmICMIntent = *(_OWORD *)(v25 + 64);
          *(_QWORD *)&a4->dmReserved2 = *(_QWORD *)(v25 + 80);
          a4->dmPanningHeight = *(_DWORD *)(v25 + 88);
          if ( (_BYTE)v61 )
            a4->dmDisplayFrequency = 64;
          a4->dmFields &= 0xF9FFFFFF;
          PreferredMode = 0;
          v47 = 0;
        }
        v19 = hdevEnumerate<1>(v20);
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v48);
      goto LABEL_119;
    }
    if ( !IS_USERCRIT_OWNED_EXCLUSIVE() )
      WdLogSingleEntry0(1LL);
    DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName, v5 == 0, 1);
    dmDisplayOrientation = 0;
    v26 = v61;
    LODWORD(String1) = v61 & 4;
    if ( (v61 & 4) == 0 )
    {
      if ( gProtocolType )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v59);
        for ( i = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(v27) + 24) + 6080LL); i; i = (__int64 *)*i )
        {
          if ( i[319] == DeviceFromName && *((_DWORD *)i + 3) )
          {
            v29 = i[321];
            if ( (*(_DWORD *)(v29 + 72) & 0x80u) != 0 )
            {
              v30 = *(_DWORD *)(v29 + 84);
              goto LABEL_78;
            }
            break;
          }
        }
        v30 = dmDisplayOrientation;
LABEL_78:
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v59);
        v26 = v61;
        goto LABEL_86;
      }
      v31 = (struct _devicemodeW *)PALLOCMEM(65755LL, 1986356295LL);
      v32 = v31;
      if ( v31 )
      {
        memset(v31, 0, sizeof(struct _devicemodeW));
        v32->dmSize = -8739;
        if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v32, 0, 0LL) >= 0 && (v32->dmFields & 0x80u) != 0 )
          dmDisplayOrientation = v32->dmDisplayOrientation;
        Win32FreePool(v32);
      }
      v26 = v61;
      v5 = v59;
    }
    v30 = dmDisplayOrientation;
LABEL_86:
    v33 = (_DWORD *)(DeviceFromName + 184);
    v53 = (_DWORD *)(DeviceFromName + 184);
    if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
    {
      v34 = 0LL;
      PreferredMode = -1073741584;
      v47 = -1073741584;
      v35 = *(_DWORD *)(DeviceFromName + 188);
      if ( v5 < v35 )
      {
        if ( (v26 & 6) == 6 )
        {
          _mm_lfence();
          v34 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v55 + 8);
          PreferredMode = v47;
        }
        else
        {
          v36 = 0;
          v37 = 0;
          if ( v35 )
          {
            v38 = v26 & 2;
            LODWORD(v61) = v38;
            do
            {
              if ( v38 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v36) )
              {
                v39 = 16LL * v36;
                if ( (_DWORD)String1
                  || *(_DWORD *)(*(_QWORD *)(v39 + *(_QWORD *)(DeviceFromName + 192) + 8) + 84LL) == v30 )
                {
                  if ( v37 == v5 )
                  {
                    v34 = *(_QWORD *)(v39 + *(_QWORD *)(DeviceFromName + 192) + 8);
                    break;
                  }
                  ++v37;
                }
              }
              ++v36;
              v38 = v61;
            }
            while ( v36 < v35 );
          }
        }
      }
      if ( v34 )
      {
        v40 = *(_WORD *)(v34 + 70);
        if ( dmDriverExtra < v40 )
          v40 = dmDriverExtra;
        v41 = v40;
        dmDriverExtra = v40;
        v42 = 220LL;
        memset(a4, 0, sizeof(struct _devicemodeW));
        memmove(&a4[1], (const void *)(v34 + *(unsigned __int16 *)(v34 + 68)), v41);
        if ( *(_WORD *)(v34 + 68) <= 0xDCu )
          v42 = *(unsigned __int16 *)(v34 + 68);
        memmove(a4, (const void *)v34, v42);
        if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v34 + 184) == 1 )
          a4->dmDisplayFrequency = 64;
        PreferredMode = 0;
        v47 = 0;
        v33 = v53;
      }
    }
    else
    {
      WdLogSingleEntry0(5LL);
      PreferredMode = -1073741823;
      v33 = v53;
    }
    if ( PreferredMode == -1073741584 )
    {
      *v33 = 0;
      v43 = *(void **)(DeviceFromName + 176);
      if ( v43 )
      {
        Win32FreePool(v43);
        *(_QWORD *)(DeviceFromName + 176) = 0LL;
      }
      v44 = *(void **)(DeviceFromName + 192);
      if ( v44 )
      {
        Win32FreePool(v44);
        *(_QWORD *)(DeviceFromName + 192) = 0LL;
      }
      *(_DWORD *)(DeviceFromName + 188) = 0;
    }
    goto LABEL_119;
  }
  PreferredMode = DrvGetPreferredMode(a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
LABEL_119:
  if ( !PreferredMode )
    *p_dmDriverExtra = dmDriverExtra;
  WdLogSingleEntry1(5LL, PreferredMode);
  return (unsigned int)PreferredMode;
}
