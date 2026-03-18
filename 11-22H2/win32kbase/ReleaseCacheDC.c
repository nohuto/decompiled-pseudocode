/*
 * XREFs of ReleaseCacheDC @ 0x1C004C160
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     _ReleaseDC @ 0x1C005BF10 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x1C00AAFB0 (UserReleaseDC.c)
 * Callees:
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C000F504 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00AAA2C (IsDeleteHrgnClipSupported.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00D32B0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C015015C (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1C01501CC (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  struct _ERESOURCE *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  struct _ERESOURCE *v15; // rdi
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  char *v20; // r14
  char *v21; // rbx
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rax
  unsigned int *v25; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  void *QuadPart; // rsi
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  HDC v31; // rcx
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // r8d
  struct _ERESOURCE *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rcx
  int v41; // r8d
  struct _ERESOURCE *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // r8d
  struct _ERESOURCE *v46; // rcx
  int v48; // eax
  __int64 v49; // rcx

  v4 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v5 = v4[10];
  if ( v5 )
    ExEnterPriorityRegionAndAcquireResourceShared(v5);
  v6 = v4[10];
  v8 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v8,
      (unsigned int)&LockAcquireShared,
      v9,
      v6,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v10 = (struct _ERESOURCE *)v4[15];
  if ( v10 )
  {
    PsEnterPriorityRegion(v8, v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  v11 = v4[15];
  v13 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  if ( *(_DWORD *)(v13 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v13, v12, v14, v11, 2, (__int64)L"GreBaseGlobals.hsemGreLock");
  v15 = (struct _ERESOURCE *)v4[11];
  if ( v15 )
  {
    PsEnterPriorityRegion(v13, v12);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v15);
  }
  v16 = v4[11];
  v18 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
  if ( *(_DWORD *)(v18 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v18, v17, v19, v16, 3, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v20 = (char *)gpDispInfo + 24;
  v21 = (char *)*((_QWORD *)gpDispInfo + 3);
  if ( !v21 )
  {
LABEL_86:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)v21 + 1);
    if ( v22 == a1 )
      break;
    v20 = v21;
    v21 = *(char **)v21;
    if ( !v21 )
      goto LABEL_86;
  }
  v23 = *((_DWORD *)v21 + 16);
  if ( v23 < 0 )
  {
    v48 = DestroyCacheDC(v20, v22);
    v49 = *((_QWORD *)gpDispInfo + 5);
    if ( v48 )
    {
      GreUnlockVisRgn(v49);
      return 1LL;
    }
    goto LABEL_74;
  }
  if ( (v23 & 0x401800) != 0x1000 )
  {
LABEL_73:
    v49 = *((_QWORD *)gpDispInfo + 5);
LABEL_74:
    GreUnlockVisRgn(v49);
    return 2LL;
  }
  if ( (v23 & 0x4000) != 0 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)v21 + 4) + 40LL);
    if ( (*(_BYTE *)(v18 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 && qword_1C0295AE0 )
      qword_1C0295AE0(v21);
  }
  if ( (*((_DWORD *)v21 + 16) & 2) != 0 )
  {
    if ( qword_1C0294EB8 && (int)qword_1C0294EB8() >= 0 && qword_1C0294EC0 )
      qword_1C0294EC0(a1, 0LL, 0LL, 0LL, 0);
    if ( (unsigned int)GreCleanDCAndSetOwnerEx(*((HDC *)v21 + 1)) )
    {
      v24 = *((_QWORD *)v21 + 9);
      if ( v24 )
        v25 = *(unsigned int **)(v24 + 424);
      else
        v25 = (unsigned int *)*((_QWORD *)v21 + 10);
      if ( !bDCEInUseTelemetryDisabled )
      {
        if ( (dword_1C0290950 & 1) == 0 )
        {
          dword_1C0290950 |= 1u;
          qword_1C0290958 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
        }
        --v25[276];
        --gnInUseDCECount;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        QuadPart = (void *)PerformanceCounter.QuadPart;
        v28 = v25[277];
        if ( ulProcessThresholdDCEInUse == 100 )
          v29 = v28 % 0x64;
        else
          v29 = v28 % ulProcessThresholdDCEInUse;
        if ( !v29
          && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C0290958 )
        {
          TraceLoggingProcessDCsInUse(v28, v25[14]);
          WPP_MAIN_CB.SecurityDescriptor = QuadPart;
        }
        if ( ulGlobalThresholdDCEInUse == 1000 )
          v30 = WPP_MAIN_CB.DeviceLock.Header.LockNV % 0x3E8u;
        else
          v30 = WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse;
        if ( !v30 && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C0290958 )
        {
          TraceLoggingGlobalDCsInUse(0);
          *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
        }
      }
      v31 = (HDC)*((_QWORD *)v21 + 1);
      *((_DWORD *)v21 + 16) &= ~0x1000u;
      *((_QWORD *)v21 + 9) = 0LL;
      *((_QWORD *)v21 + 10) = 0LL;
      GreValidateVisrgn(v31, 0);
      if ( (*((_DWORD *)v21 + 16) & 0x4000) != 0 && qword_1C0294E98 && (int)qword_1C0294E98() >= 0 && qword_1C0294EA0 )
        qword_1C0294EA0(*((_QWORD *)v21 + 1), 0LL);
      if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v20, *((_QWORD *)v21 + 1)) )
      {
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
        return 1LL;
      }
      goto LABEL_39;
    }
    goto LABEL_73;
  }
LABEL_39:
  v32 = *((_DWORD *)v21 + 16);
  if ( (v32 & 0xC0) != 0 && ((v32 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C0295AD0 )
    qword_1C0295AD0(v21);
  v33 = *(_QWORD **)(SGDGetSessionState(v18) + 24);
  v34 = v33[11];
  v36 = *(_QWORD *)(SGDGetSessionState(v35) + 24);
  if ( *(_DWORD *)(v36 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v36, (unsigned int)&LockRelease, v37, v34, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v38 = (struct _ERESOURCE *)v33[11];
  if ( v38 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v38);
    PsLeavePriorityRegion();
  }
  v39 = v33[15];
  v40 = *(_QWORD *)(SGDGetSessionState(v38) + 24);
  if ( *(_DWORD *)(v40 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v40, (unsigned int)&LockRelease, v41, v39, (__int64)L"GreBaseGlobals.hsemGreLock");
  v42 = (struct _ERESOURCE *)v33[15];
  if ( v42 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v42);
    PsLeavePriorityRegion();
  }
  v43 = v33[10];
  v44 = *(_QWORD *)(SGDGetSessionState(v42) + 24);
  if ( *(_DWORD *)(v44 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v44,
      (unsigned int)&LockRelease,
      v45,
      v43,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v46 = (struct _ERESOURCE *)v33[10];
  if ( v46 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v46);
    PsLeavePriorityRegion();
  }
  return 0LL;
}
