/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02661A8
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C02701F0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0078024 (DwmAsyncDirtySprite.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00BE0AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00D92B0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  Gre::Base *v6; // rcx
  BOOL v7; // eax
  struct DWMSPRITE *v8; // rbx
  __int64 v9; // rdi
  char ShouldUseSfmTokenArray; // al
  __int64 v11; // rcx
  UINT_PTR v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // r8
  unsigned int v18; // edi
  _BYTE v19[32]; // [rsp+30h] [rbp-19h] BYREF
  struct DWMSPRITE *v20; // [rsp+50h] [rbp+7h]
  _QWORD v21[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v22[56]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( !v21[0] )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return 3221225485LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
  v5 = Gre::Base::Globals(v4);
  v24 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v24);
  GreAcquireSemaphore(*((_QWORD *)v5 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, 0LL, a2);
  v7 = IsDwmActive(v6);
  v8 = v20;
  if ( v7 && v20 )
  {
    v9 = *((_QWORD *)v20 + 18);
    vSpDwmUpdateSpriteVisibility(v20, 1u);
    v23 = 0;
    vSpUpdateDirtyRgn(v8, (struct SFMLOGICALSURFACE *)v9, 0LL, (const struct _RECTL *)((char *)v8 + 56), &v23, 0);
    if ( v23 )
    {
      ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(_DWORD *)(v9 + 252));
      v11 = *(_QWORD *)(v9 + 184);
      if ( ShouldUseSfmTokenArray )
      {
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 8);
        else
          v12 = 0LL;
        v13 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v9, v23, v12);
      }
      else
      {
        if ( v11 )
          v14 = *(_QWORD *)(v11 + 8);
        else
          v14 = 0LL;
        v15 = *(_QWORD *)v8;
        v16 = (void *)UserReferenceDwmApiPort(v11);
        v13 = DwmAsyncDirtySprite(v16, v15, v17, v23, v14);
      }
      v18 = v13;
    }
    else
    {
      v18 = 0;
    }
    if ( !v20 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v18 = -1073741816;
  if ( v20 )
LABEL_20:
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
LABEL_21:
  v20 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
  if ( v21[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v21);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
  return v18;
}
