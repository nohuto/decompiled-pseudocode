/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C011C768
 * Callers:
 *     UntrapAppContainerRenderingWrap @ 0x1C011C750 (UntrapAppContainerRenderingWrap.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027785C (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, const unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rbx
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+28h] [rbp-49h]
  char v19; // [rsp+28h] [rbp-49h]
  DC *v20[2]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v21[32]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-9h] BYREF
  HSURF *v23; // [rsp+88h] [rbp+17h]
  _BYTE v24[32]; // [rsp+90h] [rbp+1Fh] BYREF
  struct SURFACE *v25; // [rsp+B0h] [rbp+3Fh]
  char v26; // [rsp+E0h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v20, *a1);
    SURFREF::SURFREF((SURFREF *)v22);
    SURFREF::SURFREF((SURFREF *)v24);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = (__int64)*a2;
    LOBYTE(v11) = 5;
    v23 = (HSURF *)v9;
    v25 = (struct SURFACE *)HmgShareLock(v10, v11);
    v12 = *v23;
    DC::pSurface(v20[0], v25);
    DEC_SHARE_REF_CNT(v23);
    v23 = 0LL;
    DEC_SHARE_REF_CNT(v25);
    v25 = 0LL;
    GreDereferenceObject(v12, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v13 = v20[0];
      *((_DWORD *)v20[0] + 9) |= *a4;
    }
    v14 = Gre::Base::Globals(v13);
    if ( (*((_DWORD *)v20[0] + 9) & 0x200) != 0 )
    {
      v15 = 0;
      if ( !(unsigned int)GreGetLockCount(v20[0])
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v14 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v14 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v14 + 15));
        v15 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v26);
      v18 = 5;
      v16 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v18);
      if ( v16 )
        SURFACE::bDeleteSurface(v16, 0LL, 1LL);
      *((_QWORD *)v20[0] + 63) = 0LL;
      DC::vClearRendering(v20[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v26);
      if ( v15 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v14 + 15));
      }
    }
    else
    {
      v19 = 5;
      v17 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v19);
      if ( v17 )
        SURFACE::bDeleteSurface(v17, 0LL, 1LL);
      *((_QWORD *)v20[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v14 + 10));
    if ( v25 )
      DEC_SHARE_REF_CNT(v25);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
    if ( v23 )
      DEC_SHARE_REF_CNT(v23);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
    if ( v20[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
  }
}
