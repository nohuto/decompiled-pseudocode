/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C00787AC (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00C2744 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00617A0 (bDynamicProcessAllDriverRealizations.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C006A688 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0074C78 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvDestroyMDEV @ 0x1C00755E0 (DrvDestroyMDEV.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00756BC (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0075E60 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0076CBC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076D18 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076E30 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0077110 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0077B28 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0077C34 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0078130 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 *     IsGreHideSpritesSupported @ 0x1C007871C (IsGreHideSpritesSupported.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0078DE0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0078FC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C01716DC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0171760 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0171840 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017193C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C01747B0 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C023DA44 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        WCHAR *a1,
        struct _ERESOURCE *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        struct _ERESOURCE *a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        void **a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v13; // r12d
  int v14; // r15d
  struct _devicemodeW *Src; // r14
  WCHAR *v16; // rbx
  int v17; // esi
  struct _MDEV *MDEV; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  struct _MDEV *v22; // rax
  unsigned int v23; // r11d
  unsigned int v24; // r9d
  char *v25; // rcx
  signed __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rdx
  HDEV v29; // rbx
  MULTIDEVLOCKOBJ *v30; // rax
  MULTIDEVLOCKOBJ *v31; // r15
  NSInstrumentation::CLeakTrackingAllocator *v32; // rcx
  MULTIDEVLOCKOBJ *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  unsigned int v36; // r15d
  struct _UNICODE_STRING *v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // r15d
  HDEV v47; // rcx
  int v48; // eax
  HDEV v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct _MDEV *v55; // rcx
  struct _ERESOURCE *v56; // rbx
  HDEV v57; // rbx
  struct _ERESOURCE *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  void *v63; // rbx
  unsigned int j; // edx
  __int64 v65; // rax
  __int64 v66; // rcx
  wchar_t *k; // rax
  unsigned int m; // r9d
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // ecx
  int v73; // r10d
  unsigned int i; // ebx
  unsigned int v75; // r9d
  unsigned int v76; // r8d
  HDEV v77; // rcx
  void **v78; // rbx
  __int64 v79; // rcx
  bool v81; // cc
  int PruneFlag; // edi
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // ebx
  __int64 v86; // r8
  __int64 v87; // r9
  DWORD dmFields; // r15d
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rdi
  DWORD dmPelsHeight; // esi
  DWORD dmPelsWidth; // r14d
  __int64 CurrentProcess; // rax
  int v94; // eax
  int updated; // eax
  __int64 v96; // rcx
  __int64 v97; // rcx
  unsigned int v98; // ecx
  __int64 v99; // r15
  HDEV CloneHDEV; // rax
  __int64 v101; // rdx
  unsigned int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // r15
  HDEV v105; // rax
  __int64 v106; // rcx
  int v107; // r9d
  unsigned int v108; // r11d
  bool v109; // zf
  __int64 v110; // rcx
  unsigned int v111; // esi
  unsigned int v112; // eax
  __int64 v113; // r9
  void *v114; // r9
  HDEV v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  HDEV v119; // rdx
  __int64 v120; // rdx
  int v121; // r8d
  HDEV v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rax
  signed __int32 v131; // ett
  signed __int32 v132; // ett
  __int64 v133; // rcx
  HDEV v134; // rax
  HDEV v135; // r14
  unsigned int v136; // edx
  HDEV v137; // rdx
  __int64 v138; // rcx
  unsigned int v139; // [rsp+50h] [rbp-B0h]
  unsigned int v140; // [rsp+50h] [rbp-B0h]
  int v141; // [rsp+54h] [rbp-ACh]
  int v142; // [rsp+54h] [rbp-ACh]
  int v143; // [rsp+58h] [rbp-A8h]
  int v144; // [rsp+5Ch] [rbp-A4h]
  struct _ERESOURCE *Resourcea; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+68h] [rbp-98h]
  int v148; // [rsp+68h] [rbp-98h]
  HDEV v149; // [rsp+70h] [rbp-90h]
  PERESOURCE v150; // [rsp+78h] [rbp-88h] BYREF
  __int64 v151; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE v152; // [rsp+88h] [rbp-78h]
  HSEMAPHORE hsem; // [rsp+90h] [rbp-70h]
  MULTIDEVLOCKOBJ *v154; // [rsp+98h] [rbp-68h]
  void **v155; // [rsp+A0h] [rbp-60h]
  MULTIDEVLOCKOBJ *v156; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-50h]
  int v158; // [rsp+B8h] [rbp-48h]
  struct _devicemodeW *v159; // [rsp+C0h] [rbp-40h] BYREF
  int v160; // [rsp+C8h] [rbp-38h] BYREF
  HDEV v161; // [rsp+D0h] [rbp-30h] BYREF
  void *v162; // [rsp+D8h] [rbp-28h]
  HDEV v163; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v165[3]; // [rsp+F8h] [rbp-8h] BYREF
  HDEV v166[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v167; // [rsp+120h] [rbp+20h]
  __int128 v168; // [rsp+130h] [rbp+30h]
  __int64 v169; // [rsp+140h] [rbp+40h]

  v13 = 0;
  v14 = a10;
  Src = (struct _devicemodeW *)a2;
  v155 = a8;
  v16 = a1;
  v17 = 0;
  v150 = a4;
  v152 = a2;
  v162 = a1;
  v141 = a10;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  v159 = 0LL;
  v160 = 0;
  v156 = 0LL;
  v154 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &DrvChangeDisplaySettingsStart, 0LL);
  WdLogSingleEntry5(4LL, v16, a6, a5, a9, a10);
  if ( Src )
  {
    if ( !v16 )
      WdLogSingleEntry0(1LL);
    if ( a3 )
      WdLogSingleEntry0(1LL);
  }
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *v155 = 0LL;
  if ( v16 )
  {
    if ( a9 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v16);
    else
      PruneFlag = a9 != 0;
    RtlInitUnicodeString(&DestinationString, v16 + 32);
    p_DestinationString = &DestinationString;
    if ( Src )
    {
      v85 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)v16,
              &v159,
              &v160,
              0LL,
              Src,
              0,
              PruneFlag,
              a10,
              a12,
              0LL);
      if ( v85 < 0 )
      {
        if ( v159 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v159);
        WdLogSingleEntry0(5LL);
        v17 = -2;
        goto LABEL_170;
      }
      dmFields = Src->dmFields;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = Src->dmPelsHeight;
      dmPelsWidth = Src->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v84, v83, v86, v87);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v16 = (WCHAR *)v162;
      Src = (struct _devicemodeW *)v152;
      v94 = 1;
      if ( dmFields )
        v94 = a10;
      v17 = 0;
      v14 = v94;
    }
    else
    {
      v14 = 1;
    }
    v141 = v14;
  }
  if ( a5 && v16 && Src && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v16, v159, v160, 1);
    if ( updated < 0 )
    {
      v17 = -2;
      if ( updated == -1073741582 )
        v17 = -5;
    }
    DrvLogDrvChangeDisplaySettingsFailures(1LL, (unsigned int)updated);
  }
  if ( !a6 || v17 )
    goto LABEL_121;
  DrvAcquireChangeDisplaySettingLocks();
  v17 = -1;
  MDEV = 0LL;
  v144 = -1;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(p_DestinationString, v159, v150, a11 != 0 ? 4 : 0, 0LL, a9, v14, a12, a3);
    if ( MDEV )
      goto LABEL_140;
    v96 = 3LL;
LABEL_176:
    DrvLogDrvChangeDisplaySettingsFailures(v96, 3221225473LL);
    goto LABEL_28;
  }
  v19 = CheckAndNotifyDualView(p_DestinationString, (__int64)a7);
  if ( !v19 )
  {
    v21 = v141;
    goto LABEL_14;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      gbDeferredInvalidateDualView = 1;
      gbDeferredOrgMdev = a7;
      goto LABEL_13;
    }
    DrvReleaseChangeDisplaySettingLocks();
    if ( v159 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v159);
    WdLogSingleEntry0(5LL);
    v17 = -6;
    v85 = -1073741823;
    v13 = 2;
LABEL_170:
    DrvLogDrvChangeDisplaySettingsFailures(v13, (unsigned int)v85);
    goto LABEL_129;
  }
LABEL_13:
  v21 = 1;
LABEL_14:
  if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, a3) )
  {
    v78 = v155;
    *v155 = a7;
    DrvReleaseChangeDisplaySettingLocks();
    v17 = 3;
    WdLogSingleEntry0(4LL);
    goto LABEL_122;
  }
  if ( !(unsigned int)DrvDisableMDEV(a7) )
  {
    v96 = 4LL;
    goto LABEL_176;
  }
  v147 = gdmLogPixels;
  v22 = DrvCreateMDEV(p_DestinationString, v159, v150, a11 != 0 ? 4 : 0, a7, a9, v21, a12, a3);
  MDEV = v22;
  if ( !v22 )
  {
    DrvLogDrvChangeDisplaySettingsFailures(3LL, 3221225473LL);
    DrvEnableMDEV(a7, 0LL, 0LL);
    goto LABEL_28;
  }
  v23 = *((_DWORD *)v22 + 5);
  v17 = 2;
  v144 = 2;
  if ( v23 != *((_DWORD *)a7 + 5) || v147 != gdmLogPixels )
  {
LABEL_140:
    v17 = 0;
    v144 = 0;
    goto LABEL_28;
  }
  v24 = 0;
  if ( v23 )
  {
    v25 = (char *)v22 + 40;
    v26 = a7 - v22;
    do
    {
      if ( *(_QWORD *)v25 != *(_QWORD *)&v25[v26] || *((_DWORD *)v25 + 8) != *(_DWORD *)&v25[v26 + 32] )
        goto LABEL_132;
      v27 = 56LL * v24;
      v28 = *(_QWORD *)((char *)v22 + v27 + 56) - *(_QWORD *)((char *)a7 + v27 + 56);
      if ( !v28 )
        v28 = *(_QWORD *)((char *)v22 + v27 + 64) - *(_QWORD *)((char *)a7 + v27 + 64);
      if ( v28 )
LABEL_132:
        v17 = 0;
      ++v24;
      v25 += 56;
    }
    while ( v24 < v23 );
    v144 = v17;
  }
LABEL_28:
  v29 = 0LL;
  v139 = 0;
  v149 = 0LL;
  v143 = 0;
  *v155 = MDEV;
  v142 = 0;
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      v81 = *((_DWORD *)MDEV + 5) <= 1u;
      *(_QWORD *)MDEV = *(_QWORD *)a7;
      *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
      if ( !v81 )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v137 = *(HDEV *)MDEV;
        ++*((_DWORD *)v137 + 3);
        ++*((_DWORD *)v137 + 2);
        TrackObjectReferenceIncrement(
          1u,
          *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v137 + 440));
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v138);
        }
      }
    }
LABEL_106:
    if ( a7 && (v17 & 0xFFFFFFFD) == 0 )
    {
      DrvEnableMDEV(MDEV, 0LL, 0LL);
      if ( !v17 )
      {
        for ( i = 0; i < *((_DWORD *)a7 + 5); ++i )
        {
          v75 = *((_DWORD *)MDEV + 5);
          v76 = 0;
          v77 = (HDEV)*((_QWORD *)a7 + 7 * i + 5);
          if ( v75 )
          {
            while ( *((_QWORD *)v77 + 319) != *(_QWORD *)(*((_QWORD *)MDEV + 7 * v76 + 5) + 2552LL) )
            {
              if ( ++v76 >= v75 )
                goto LABEL_113;
            }
          }
          else
          {
LABEL_113:
            if ( v76 == v75 )
              DrvDisableDisplay(v77, 1);
          }
        }
      }
      DrvDestroyMDEV((__int64)a7);
    }
    DrvReleaseChangeDisplaySettingLocks();
    if ( v154 )
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v154, v34);
    v31 = v156;
    if ( !v156 )
      goto LABEL_121;
    goto LABEL_120;
  }
  v162 = 0LL;
  v152 = 0LL;
  v169 = 0LL;
  hsem = 0LL;
  *(_OWORD *)v166 = 0LL;
  Resourcea = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v30 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                             (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                             260LL,
                             0x68uLL,
                             1819109447);
  v156 = v30;
  v31 = v30;
  if ( v30 )
  {
    v32 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *(_QWORD *)v30 = 1LL;
    *((_QWORD *)v30 + 1) = 0LL;
    *((_QWORD *)v30 + 2) = 0LL;
    v33 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v32, 260LL, 0x68uLL, 1819109447);
    v154 = v33;
    if ( !v33 )
    {
LABEL_120:
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v31, v34);
      goto LABEL_121;
    }
    *(_QWORD *)v33 = 1LL;
    v36 = 0;
    *((_QWORD *)v33 + 1) = 0LL;
    *((_QWORD *)v33 + 2) = 0LL;
    if ( *((_DWORD *)MDEV + 5) )
    {
      v154 = v33;
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v36++ + 5));
      while ( v36 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
      v46 = 0;
      goto LABEL_63;
    }
    v162 = DrvDisableDirectDrawForModeChange(a7, MDEV, v166);
    if ( v162 )
    {
      MULTIDEVLOCKOBJ::vInit(v154, a7);
      MULTIDEVLOCKOBJ::vInit(v156, MDEV);
      if ( (*(_DWORD *)v156 & 1) != 0 && (*(_DWORD *)v154 & 1) != 0 )
      {
        v37 = *(struct _UNICODE_STRING **)(*(_QWORD *)a7 + 56LL);
        hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
        v150 = (PERESOURCE)hsem;
        Resourcea = (struct _ERESOURCE *)v37;
        p_DestinationString = v37;
        EngAcquireSemaphore((HSEMAPHORE)v37);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", Resourcea, 4LL);
        EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        EngAcquireSemaphore(ghsemHT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
        EngAcquireSemaphore(hsem);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
        MULTIDEVLOCKOBJ::vLock(v154);
        MULTIDEVLOCKOBJ::vLock(v156);
        if ( (int)IsGreHideSpritesSupported() >= 0 && qword_1C029B188 )
          qword_1C029B188(*(_QWORD *)a7, 1LL);
        v38 = *((_DWORD *)MDEV + 5);
        v39 = *((_DWORD *)a7 + 5);
        if ( v38 == 1 )
        {
          if ( v39 == 1 )
            goto LABEL_43;
          v98 = 0;
          if ( !v39 )
            goto LABEL_43;
          while ( 1 )
          {
            v99 = v98;
            if ( *((_QWORD *)a7 + 7 * v98 + 5) == *((_QWORD *)MDEV + 5) )
              break;
            if ( ++v98 >= v39 )
              goto LABEL_43;
          }
          CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v39);
          v29 = CloneHDEV;
          if ( CloneHDEV )
          {
            v101 = 56 * v99;
            *(_QWORD *)((char *)a7 + v101 + 40) = CloneHDEV;
            *(_QWORD *)((char *)a7 + v101 + 48) = *((_QWORD *)MDEV + 5);
            v149 = (HDEV)*((_QWORD *)MDEV + 5);
LABEL_192:
            v152 = (PERESOURCE)*((_QWORD *)v29 + 6);
            EngAcquireSemaphore((HSEMAPHORE)v152);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v152, 11LL);
LABEL_193:
            v43 = v139;
            if ( v139 )
            {
LABEL_44:
              v44 = (__int64)v152;
              LODWORD(v45) = v142;
              v140 = v43;
              hsem = (HSEMAPHORE)v150;
              v161 = (HDEV)v152;
              v158 = v142;
              v148 = v143;
              Resourcea = (struct _ERESOURCE *)p_DestinationString;
              if ( v149 )
              {
                Resourcea = (struct _ERESOURCE *)p_DestinationString;
                v163 = v149;
                v140 = v43;
                hsem = (HSEMAPHORE)v150;
                if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v163) )
                {
                  v109 = ((_DWORD)v149[524] & 0x10000) == 0;
                  hsem = (HSEMAPHORE)v150;
                  Resourcea = (struct _ERESOURCE *)p_DestinationString;
                  v140 = v108;
                  v143 = v107;
                  v142 = v45;
                  v152 = (PERESOURCE)v44;
                  if ( v109 )
                  {
                    v152 = (PERESOURCE)v44;
                    v142 = v45;
                    hsem = (HSEMAPHORE)v150;
                    v140 = v108;
                    v143 = v107;
                    Resourcea = (struct _ERESOURCE *)p_DestinationString;
                    if ( !(unsigned int)bDynamicProcessAllDriverRealizations((__int64)v149, 0LL, 1) )
                    {
                      v143 = v148;
                      v142 = v158;
                      v152 = (PERESOURCE)v161;
                      v46 = 0;
                      Resourcea = (struct _ERESOURCE *)p_DestinationString;
                      hsem = (HSEMAPHORE)v150;
LABEL_46:
                      LODWORD(v47) = *((_DWORD *)MDEV + 5);
                      v48 = *((_DWORD *)a7 + 5);
                      if ( (_DWORD)v47 != 1 )
                      {
                        if ( v48 != 1 && (_DWORD)v47 )
                        {
                          v111 = 0;
                          do
                          {
                            LODWORD(v45) = *((_DWORD *)a7 + 5);
                            v151 = 56LL * v111;
                            v44 = *(_QWORD *)((char *)MDEV + v151 + 40);
                            v112 = 0;
                            if ( (_DWORD)v45 )
                            {
                              v113 = *(_QWORD *)(v44 + 2552);
                              while ( 1 )
                              {
                                v161 = (HDEV)v112;
                                v47 = (HDEV)*((_QWORD *)a7 + 7 * v112 + 5);
                                if ( v113 == *((_QWORD *)v47 + 319) )
                                  break;
                                if ( ++v112 >= (unsigned int)v45 )
                                  goto LABEL_224;
                              }
                              LODWORD(v45) = 1;
                              if ( _bittest((const signed __int32 *)(v44 + 2096), 0x10u) )
                                LODWORD(v45) = !_bittest((const signed __int32 *)v47 + 524, 0x10u);
                              if ( (HDEV)v44 != v47 )
                              {
                                if ( (unsigned int)bDynamicModeChange(v47, (HDEV)v44) == 1 )
                                {
                                  v44 = 56LL * (_QWORD)v161;
                                  v45 = v151;
                                  v47 = (HDEV)*((_QWORD *)a7 + 7 * (_QWORD)v161 + 5);
                                  *((_QWORD *)a7 + 7 * (_QWORD)v161 + 5) = *(_QWORD *)((char *)MDEV + v151 + 40);
                                  *(_QWORD *)((char *)MDEV + v45 + 40) = v47;
                                }
                                else
                                {
                                  DrvLogDrvChangeDisplaySettingsFailures(11LL, 3221225473LL);
                                  v46 = 1;
                                }
                              }
                            }
LABEL_224:
                            ++v111;
                          }
                          while ( v111 < *((_DWORD *)MDEV + 5) );
                          v17 = v144;
                        }
                        goto LABEL_50;
                      }
                      v49 = (HDEV)*((_QWORD *)MDEV + 5);
                      if ( v48 == 1 )
                      {
                        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v49) == 1 )
                        {
                          v47 = (HDEV)*((_QWORD *)a7 + 5);
                          *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
                          *((_QWORD *)MDEV + 5) = v47;
LABEL_50:
                          GreReleaseHmgrSemaphore((int)v47, v44, v45);
                          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
                          if ( ghsemRFONTList )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
                            PsLeavePriorityRegion(v50);
                          }
                          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
                          if ( ghsemPublicPFT )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
                            PsLeavePriorityRegion(v51);
                          }
                          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
                          if ( ghsemPalette )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
                            PsLeavePriorityRegion(v52);
                          }
                          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
                          if ( ghsemDriverMgmt )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
                            PsLeavePriorityRegion(v53);
                          }
                          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
                          if ( ghsemDwmState )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
                            PsLeavePriorityRegion(v54);
                          }
                          if ( v46 )
                            goto LABEL_68;
                          if ( *((_DWORD *)a7 + 5) == 1 )
                          {
                            *(_QWORD *)a7 = *((_QWORD *)a7 + 5);
                            *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 6);
                          }
LABEL_63:
                          if ( *((_DWORD *)MDEV + 5) == 1 )
                          {
                            *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
                            *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
                            goto LABEL_65;
                          }
                          v114 = (void *)*((_QWORD *)MDEV + 3);
                          v165[2] = MulEnableDriver;
                          v165[0] = 1LL;
                          v161 = 0LL;
                          v165[1] = 0LL;
                          v115 = hCreateHDEV(
                                   (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                                   (struct _DRV_NAMES *)v165,
                                   (struct _devicemodeW *)MDEV,
                                   v114,
                                   0,
                                   0,
                                   1,
                                   0,
                                   2u,
                                   &v161);
                          *(_QWORD *)MDEV = v115;
                          if ( !v115 )
                          {
                            DrvLogDrvChangeDisplaySettingsFailures(7LL, 3221225473LL);
                            v46 = 1;
LABEL_65:
                            if ( !a7 )
                              goto LABEL_78;
                            goto LABEL_66;
                          }
                          if ( !a7 )
                            goto LABEL_79;
                          v150 = (PERESOURCE)*((_QWORD *)v115 + 6);
                          EngAcquireSemaphore((HSEMAPHORE)v150);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v150, 11LL);
                          EngAcquireSemaphore(ghsemDwmState);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
                          EngAcquireSemaphore(ghsemDriverMgmt);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
                          EngAcquireSemaphore(ghsemPalette);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 14LL);
                          EngAcquireSemaphore(ghsemPublicPFT);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
                          EngAcquireSemaphore(ghsemRFONTList);
                          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
                          GreAcquireHmgrSemaphore(v117, v116, v118);
                          v119 = *(HDEV *)MDEV;
                          if ( v143 )
                          {
                            if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v119) == 1 )
                            {
                              v122 = *(HDEV *)MDEV;
                              *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
                              *(_QWORD *)a7 = v122;
                              *((_QWORD *)a7 + 5) = v122;
                              if ( v29 )
                                v149 = v122;
                              goto LABEL_238;
                            }
                            v123 = 12LL;
                          }
                          else
                          {
                            if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v119) == 1 )
                            {
                              v122 = *(HDEV *)a7;
                              *(_QWORD *)a7 = *(_QWORD *)MDEV;
                              *(_QWORD *)MDEV = v122;
LABEL_238:
                              GreReleaseHmgrSemaphore((int)v122, v120, v121);
                              EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
                              if ( ghsemRFONTList )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
                                PsLeavePriorityRegion(v124);
                              }
                              EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
                              if ( ghsemPublicPFT )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
                                PsLeavePriorityRegion(v125);
                              }
                              EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
                              if ( ghsemPalette )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
                                PsLeavePriorityRegion(v126);
                              }
                              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
                              if ( ghsemDriverMgmt )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
                                PsLeavePriorityRegion(v127);
                              }
                              EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
                              if ( ghsemDwmState )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
                                PsLeavePriorityRegion(v128);
                              }
                              EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v150);
                              if ( v150 )
                              {
                                ExReleaseResourceAndLeaveCriticalRegion(v150);
                                PsLeavePriorityRegion(v129);
                              }
LABEL_66:
                              if ( !v46 && v29 && v149 )
                              {
                                v150 = (PERESOURCE)v29;
                                v151 = (__int64)v149;
                                if ( v142 )
                                {
                                  v130 = *((_QWORD *)v149 + 316);
                                  *((_QWORD *)v29 + 316) = v130;
                                  if ( v130 )
                                    *(_QWORD *)(v130 + 48) = v29;
                                  *((_QWORD *)v29 + 221) = *((_QWORD *)v149 + 221);
                                  DrvTransferGdiObjects(v29, v149, v35);
                                  *((_QWORD *)v149 + 316) = 0LL;
                                  *((_QWORD *)v149 + 221) = 0LL;
                                  _m_prefetchw(v149 + 10);
                                  do
                                    v131 = *((_DWORD *)v149 + 10);
                                  while ( v131 != _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)v149 + 10,
                                                    v131 | 0x80000,
                                                    v131) );
                                  _m_prefetchw(v29 + 10);
                                  do
                                    v132 = *((_DWORD *)v29 + 10);
                                  while ( v132 != _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)v29 + 10,
                                                    v132 & 0xFFF7FFFF,
                                                    v132) );
                                  PDEVOBJ::bDisabled((PDEVOBJ *)&v151, 1);
                                  (*((void (__fastcall **)(_QWORD, HDEV))v29 + 334))(*((_QWORD *)v29 + 221), v29);
                                }
                                else
                                {
                                  *((_QWORD *)v29 + 316) = 0LL;
                                  PDEVOBJ::bDisabled((PDEVOBJ *)&v150, 1);
                                }
                              }
                              goto LABEL_68;
                            }
                            v123 = 13LL;
                          }
                          DrvLogDrvChangeDisplaySettingsFailures(v123, 3221225473LL);
                          v46 = 1;
                          goto LABEL_238;
                        }
                        v110 = 9LL;
                      }
                      else
                      {
                        if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v49) == 1 )
                        {
                          v47 = *(HDEV *)a7;
                          *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
                          *((_QWORD *)MDEV + 5) = v47;
                          if ( v29 )
                            v149 = v47;
                          goto LABEL_50;
                        }
                        v110 = 10LL;
                      }
                      DrvLogDrvChangeDisplaySettingsFailures(v110, 3221225473LL);
                      v46 = 1;
                      goto LABEL_50;
                    }
                  }
                }
              }
              v46 = v140;
              if ( !v140 )
                goto LABEL_46;
LABEL_68:
              v151 = *(_QWORD *)a7;
              if ( (*(_DWORD *)(v151 + 40) & 0x20000) != 0 )
                PDEVOBJ::bDisabled((PDEVOBJ *)&v151, 1);
              if ( (int)IsGreHideSpritesSupported() >= 0 )
              {
                v55 = a7;
                if ( !v46 )
                  v55 = MDEV;
                if ( qword_1C029B188 )
                  qword_1C029B188(*(_QWORD *)v55, 0LL);
              }
              v56 = v152;
              if ( v152 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v152);
                ExReleaseResourceAndLeaveCriticalRegion(v56);
                PsLeavePriorityRegion(v133);
              }
              MULTIDEVLOCKOBJ::vUnlock(v156);
              MULTIDEVLOCKOBJ::vUnlock(v154);
LABEL_78:
              if ( v46 )
              {
LABEL_83:
                v58 = (struct _ERESOURCE *)hsem;
                if ( hsem )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
                  ExReleaseResourceAndLeaveCriticalRegion(v58);
                  PsLeavePriorityRegion(v59);
                  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
                  if ( ghsemHT )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
                    PsLeavePriorityRegion(v60);
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
                  if ( ghsemSprite )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
                    PsLeavePriorityRegion(v61);
                  }
                  EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", Resourcea);
                  if ( Resourcea )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion(Resourcea);
                    PsLeavePriorityRegion(v62);
                  }
                }
                v63 = v162;
                if ( v162 )
                {
                  if ( v162 == v166 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                  }
                  else
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      v63);
                  }
                }
                if ( v46 )
                {
                  WdLogSingleEntry0(2LL);
                  DrvBackoutMDEV(MDEV, v136);
                  NSInstrumentation::CLeakTrackingAllocator::Free(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    MDEV);
                  *v155 = 0LL;
                  if ( a7 )
                    DrvEnableMDEV(a7, 0LL, 0LL);
                  ++gcFailedModeChanges;
                  v17 = -1;
                }
                else
                {
                  if ( a7 )
                  {
                    for ( j = 0; j < *((_DWORD *)a7 + 5); *(_DWORD *)(v66 + 160) &= ~1u )
                    {
                      v65 = j++;
                      v66 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v65 + 5) + 2552LL);
                    }
                  }
                  for ( k = gpGraphicsDeviceList; k; k = (wchar_t *)*((_QWORD *)k + 16) )
                    *((_DWORD *)k + 40) &= ~4u;
                  for ( m = 0; m < *((_DWORD *)MDEV + 5); ++m )
                  {
                    v69 = 56LL * m;
                    v70 = *(_QWORD *)((char *)MDEV + v69 + 40);
                    v71 = *(_QWORD *)(v70 + 2568);
                    *(_DWORD *)(*(_QWORD *)(v70 + 2552) + 160LL) |= 1u;
                    v72 = *(_DWORD *)((char *)MDEV + v69 + 56);
                    *(_DWORD *)(v71 + 76) = v72;
                    v73 = *(_DWORD *)((char *)MDEV + v69 + 60);
                    *(_DWORD *)(v71 + 80) = v73;
                    if ( !v72 && !v73 )
                      *(_DWORD *)(*(_QWORD *)(v70 + 2552) + 160LL) |= 4u;
                  }
                  v151 = *(_QWORD *)MDEV;
                  vGetDeviceCaps((struct PDEVOBJ *)&v151, gpGdiDevCaps);
                }
                goto LABEL_106;
              }
LABEL_79:
              v57 = *(HDEV *)MDEV;
              if ( *((_DWORD *)MDEV + 5) == 1 )
              {
                v151 = *((_QWORD *)v57 + 222);
                if ( *((HDEV *)v57 + 3) != v57 )
                  *((_QWORD *)v57 + 3) = v57;
                *((_QWORD *)v57 + 217) = *((_QWORD *)v57 + 355);
                XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v151);
              }
              else
              {
                DrvSetSharedDevLock(MDEV);
                v134 = DrvSetSharedPalette(MDEV);
                v135 = v134;
                if ( ((_DWORD)v57[535] & 0x100) == 0
                  && v134
                  && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
                  && qword_1C029B108 )
                {
                  qword_1C029B108(v135, 1LL);
                }
              }
              goto LABEL_83;
            }
LABEL_43:
            EngAcquireSemaphore(ghsemDwmState);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
            EngAcquireSemaphore(ghsemPalette);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
            EngAcquireSemaphore(ghsemPublicPFT);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
            EngAcquireSemaphore(ghsemRFONTList);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
            GreAcquireHmgrSemaphore(v41, v40, v42);
            v43 = 0;
            goto LABEL_44;
          }
          DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
          v139 = 1;
LABEL_191:
          if ( !v29 )
            goto LABEL_193;
          goto LABEL_192;
        }
        if ( v39 != 1 )
          goto LABEL_43;
        v102 = 0;
        if ( !v38 )
        {
LABEL_190:
          v143 = 1;
          goto LABEL_191;
        }
        v103 = *((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v104 = v102;
          if ( *((_QWORD *)MDEV + 7 * v102 + 5) == v103 )
            break;
          if ( ++v102 >= v38 )
            goto LABEL_190;
        }
        v105 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v103);
        v29 = v105;
        if ( v105 )
        {
          v106 = 56 * v104;
          v142 = 1;
          *(_QWORD *)((char *)MDEV + v106 + 40) = v105;
          *(_QWORD *)((char *)MDEV + v106 + 48) = *((_QWORD *)a7 + 5);
          v149 = (HDEV)*((_QWORD *)a7 + 5);
          goto LABEL_190;
        }
        v97 = 6LL;
      }
      else
      {
        v97 = 8LL;
      }
    }
    else
    {
      v97 = 5LL;
    }
    DrvLogDrvChangeDisplaySettingsFailures(v97, 3221225473LL);
    v46 = 1;
    goto LABEL_68;
  }
LABEL_121:
  v78 = v155;
LABEL_122:
  if ( v159 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v159);
  if ( !a6 || v17 )
  {
    if ( v17 == 2 && *v78 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v78);
      *v78 = 0LL;
    }
  }
  else if ( a7 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a7);
  }
  WdLogSingleEntry1(5LL, v17);
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_129:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v79, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v17;
}
