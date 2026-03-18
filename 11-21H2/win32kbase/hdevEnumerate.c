/*
 * XREFs of hdevEnumerate @ 0x1C006FCD0
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006A3FC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C006F400 (DxgkEngFindViewDesktopPosition.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0074EDC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0078988 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0079000 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0079180 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     DxgkEngAssertGdiOutput @ 0x1C00C0BD0 (DxgkEngAssertGdiOutput.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

struct PDEV *__fastcall hdevEnumerate(struct PDEV **a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct PDEV **v4; // rdi
  struct PDEV *v5; // rbx
  struct PDEV *v6; // rsi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // rdx
  struct PDEV *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 13, (__int64)L"ghsemDriverMgmt");
  if ( v4 )
  {
    v5 = *v4;
    v6 = (struct PDEV *)v4;
    v11 = (struct PDEV *)v4;
  }
  else
  {
    v5 = gppdevList;
    v11 = gppdevList;
    v6 = gppdevList;
  }
  while ( v5 )
  {
    if ( (*((_DWORD *)v5 + 10) & 1) != 0 )
    {
      ++*((_DWORD *)v5 + 2);
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v5 + 440);
      LODWORD(a1) = (_DWORD)qword_1C028F9C8;
      if ( v7 && qword_1C028F9C8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C028F9C8, v7, 1);
      break;
    }
    v5 = *(struct PDEV **)v5;
  }
  if ( !v4 )
    goto LABEL_14;
  v8 = *((_DWORD *)v6 + 2);
  if ( v8 > 1 )
  {
    v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v6 + 440);
    LODWORD(a1) = (_DWORD)qword_1C028F9C8;
    if ( v9 && qword_1C028F9C8 )
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C028F9C8, v9, 0);
      v8 = *((_DWORD *)v6 + 2);
    }
    *((_DWORD *)v6 + 2) = v8 - 1;
LABEL_14:
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&LockRelease,
        a3,
        (_DWORD)ghsemDriverMgmt,
        (__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return v5;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev(&v11, 0LL);
  return v5;
}
