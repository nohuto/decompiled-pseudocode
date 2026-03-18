/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0103ED0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C01026A0 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001C2F4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  DC *v17; // rbx
  __int64 v18; // rbx
  Gre::Base *v19; // rcx
  __int64 v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rbx
  __int64 v22; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  SURFACE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rsi
  SURFACE *v29; // rax
  __int64 v30; // rdx
  SURFACE *v31; // rcx
  _BYTE v32[32]; // [rsp+30h] [rbp-50h] BYREF
  struct SURFACE *v33; // [rsp+50h] [rbp-30h]
  _BYTE v34[32]; // [rsp+58h] [rbp-28h] BYREF
  SURFACE *v35; // [rsp+78h] [rbp-8h]
  char v36; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer(a1) )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 4) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
  v13 = *((_QWORD *)*a1 + 62);
  if ( !v13
    || *(_QWORD *)(v13 + 640) == PsGetCurrentProcess(v11, v10, v12) && *(int *)(v13 + 112) >= 0
    || (v17 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v17 + 122)
    && !*((_DWORD *)v17 + 123)
    && (v18 = *((_QWORD *)v17 + 60), PsGetCurrentProcess(v15, v14, v16) == v18) )
  {
LABEL_35:
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
    return 1;
  }
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v34);
  v35 = 0LL;
  SURFREF::SURFREF((SURFREF *)v32);
  v21 = Gre::Base::Globals(v19);
  if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
  {
    if ( !(unsigned int)GreGetLockCount(v20)
      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v21 + 15)) )
    {
      GreAcquireSemaphore(*((_QWORD *)v21 + 15));
      v4 = 1;
    }
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v36);
    DC::vSetRendering(*a1);
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                 *(_QWORD *)*a1,
                                 *(_DWORD *)(v13 + 56),
                                 *(_DWORD *)(v13 + 60),
                                 0,
                                 0LL,
                                 0LL);
    if ( !CompatibleBitmapInternal )
    {
      DC::vClearRendering(*a1);
      if ( v4 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v21 + 15));
      }
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v36);
      goto LABEL_19;
    }
    LOBYTE(v22) = 5;
    v25 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v22);
    LOBYTE(v26) = 5;
    v35 = v25;
    v33 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v26);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v36);
    if ( v4 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v21 + 15));
    }
    goto LABEL_25;
  }
  v28 = GreCreateCompatibleBitmapInternal(*(_QWORD *)*a1, *(_DWORD *)(v13 + 56), *(_DWORD *)(v13 + 60), 0, 0LL, 0LL);
  if ( v28 )
  {
    LOBYTE(v27) = 5;
    v29 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v27);
    LOBYTE(v30) = 5;
    v35 = v29;
    v33 = (struct SURFACE *)HmgShareLock(v28, v30);
LABEL_25:
    v31 = v35;
    *a2 = *(HSURF *)v35;
    *a3 = *(HSURF *)v33;
    INC_SHARE_REF_CNT(v31);
    if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v35) )
      ++*((_DWORD *)v33 + 81);
    *((_QWORD *)*a1 + 63) = *a2;
    DC::pSurface(*a1, v33);
    INC_SHARE_REF_CNT(v33);
    if ( a4 )
    {
      *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
      *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
    }
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v21 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v21 + 10));
    if ( v33 )
      DEC_SHARE_REF_CNT(v33);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
    if ( v35 )
      DEC_SHARE_REF_CNT(v35);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
    goto LABEL_35;
  }
LABEL_19:
  SURFREF::~SURFREF((SURFREF *)v32);
  SURFREF::~SURFREF((SURFREF *)v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
  return 0;
}
