/*
 * XREFs of ReleaseCacheDC @ 0x1C002A470
 * Callers:
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     _ReleaseDC @ 0x1C0071B20 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x1C00AC8F0 (UserReleaseDC.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00A9050 (IsDeleteHrgnClipSupported.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C01680A8 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C023E228 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  char *v8; // r14
  char *v9; // rbx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  HDC v19; // rcx
  int v20; // ecx
  int v21; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29[9]; // [rsp+40h] [rbp-48h] BYREF
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (_DWORD)v5,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5, a2, a3);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5, a2, a3);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (char *)gpDispInfo + 24;
  v9 = (char *)*((_QWORD *)gpDispInfo + 3);
  if ( !v9 )
  {
LABEL_52:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    UserSetLastError(1425LL, v23, v24);
    return 2LL;
  }
  while ( *((_QWORD *)v9 + 1) != a1 )
  {
    v8 = v9;
    v9 = *(char **)v9;
    if ( !v9 )
      goto LABEL_52;
  }
  v10 = *((_DWORD *)v9 + 16);
  if ( v10 < 0 )
  {
    v25 = DestroyCacheDC(v8);
    v26 = *((_QWORD *)gpDispInfo + 5);
    if ( v25 )
    {
      GreUnlockVisRgn(v26);
      return 1LL;
    }
    goto LABEL_74;
  }
  if ( (v10 & 0x401800) != 0x1000 )
  {
    v26 = *((_QWORD *)gpDispInfo + 5);
LABEL_74:
    GreUnlockVisRgn(v26);
    return 2LL;
  }
  if ( (v10 & 0x4000) != 0 )
  {
    v5 = *(PERESOURCE *)(*((_QWORD *)v9 + 4) + 40LL);
    if ( (v5->WaiterPriority & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 && qword_1C029C410 )
      qword_1C029C410(v9);
  }
  v11 = *((_DWORD *)v9 + 16);
  if ( (v11 & 2) != 0 )
  {
    if ( qword_1C029B820 && (int)qword_1C029B820() >= 0 && qword_1C029B828 )
      qword_1C029B828(a1, 0LL, 0LL, 0LL, 0);
    if ( !(unsigned int)GreCleanDCAndSetOwnerEx(*((HDC *)v9 + 1)) )
    {
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      return 2LL;
    }
    v12 = *((_QWORD *)v9 + 9);
    if ( v12 )
      v13 = *(_DWORD **)(v12 + 424);
    else
      v13 = (_DWORD *)*((_QWORD *)v9 + 10);
    if ( !bDCEInUseTelemetryDisabled )
    {
      if ( (dword_1C0296CB0 & 1) == 0 )
      {
        dword_1C0296CB0 |= 1u;
        qword_1C0296CB8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
      }
      --v13[274];
      --gnInUseDCECount;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter;
      v16 = v13[275];
      if ( ulProcessThresholdDCEInUse == 100 )
        v17 = v16 % 0x64;
      else
        v17 = v16 % ulProcessThresholdDCEInUse;
      if ( !v17 && PerformanceCounter.QuadPart - qword_1C0296600 >= qword_1C0296CB8 )
      {
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v30 = v13[14];
          v31 = v27;
          v29[0] = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C028D610,
            (unsigned int)&unk_1C025BAA8,
            v27,
            v28,
            (__int64)v29,
            (__int64)&v31,
            (__int64)&v30);
        }
        qword_1C0296600 = v15.QuadPart;
      }
      if ( ulGlobalThresholdDCEInUse == 1000 )
        v18 = dword_1C0296608 % 0x3E8u;
      else
        v18 = dword_1C0296608 % ulGlobalThresholdDCEInUse;
      if ( !v18 && v15.QuadPart - qword_1C02965F8 >= qword_1C0296CB8 )
      {
        TraceLoggingGlobalDCsInUse(0);
        qword_1C02965F8 = v15.QuadPart;
      }
    }
    v19 = (HDC)*((_QWORD *)v9 + 1);
    *((_DWORD *)v9 + 16) &= ~0x1000u;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    GreValidateVisrgn(v19);
    if ( (*((_DWORD *)v9 + 16) & 0x4000) != 0 && qword_1C029B800 && (int)qword_1C029B800() >= 0 && qword_1C029B808 )
      qword_1C029B808(*((_QWORD *)v9 + 1), 0LL);
    if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v8) )
    {
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      return 1LL;
    }
    v11 = *((_DWORD *)v9 + 16);
  }
  if ( (v11 & 0xC0) != 0 && ((v11 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C029C400 )
    qword_1C029C400(v9);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (_DWORD)v5,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemDCVisRgn,
      (__int64)L"ghsemDCVisRgn");
  v20 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v20,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemGreLock,
      (__int64)L"ghsemGreLock");
  v21 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v21,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return 0LL;
}
