/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C8FF0
 * Callers:
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0135018 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001C2F4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C001C570 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C007B648 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C00C88F8 (DwmAsyncDestroySprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  int v6; // esi
  HWND v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  struct PDEVOBJ *v11; // rdx
  __int64 v12; // rcx
  struct DWMSPRITE *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  void *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebp
  __int64 v20; // rax
  struct DWMSPRITE *v21; // r8
  _BYTE v23[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-60h] BYREF
  struct DWMSPRITE *v25; // [rsp+48h] [rbp-40h]

  v4 = 1;
  v6 = 1;
  v8 = a2;
  v10 = Gre::Base::Globals(a1);
  if ( !a4 || !(unsigned int)IsDwmActive() )
    return (unsigned int)GdiDeleteSprite(a1, v8, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v23, v11, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v10 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v24, v8, a3);
    v13 = v25;
    if ( v25 )
    {
      v14 = *((_QWORD *)v25 + 18);
      v15 = *(_QWORD *)v25;
      v16 = (void *)UserReferenceDwmApiPort(v12);
      v17 = DwmAsyncDestroySprite(v16, v15);
      v18 = *(_QWORD *)(v14 + 184);
      v19 = v17;
      if ( !v18 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 24)) )
        goto LABEL_11;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 248));
      if ( *(_DWORD *)(v18 + 300) && (*(_DWORD *)(v18 + 92) & 2) == 0 )
      {
        *((_DWORD *)v13 + 35) |= 0x10u;
        vspRemoveStateReferencesForSprite(v13);
        *(_QWORD *)(v18 + 480) = 0LL;
        *(_QWORD *)(v18 + 472) = a1;
        v20 = *(_QWORD *)v13;
        *(_DWORD *)(v18 + 92) |= 2u;
        *(_DWORD *)(v18 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v18 + 488) = v20;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 248));
      if ( v4 )
      {
LABEL_11:
        *((_DWORD *)v13 + 16) = *((_DWORD *)v13 + 14);
        *((_DWORD *)v13 + 17) = *((_DWORD *)v13 + 15);
        v21 = v25;
        if ( v25 )
          _InterlockedDecrement((volatile signed __int32 *)v25 + 3);
        v25 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v21);
      }
      v13 = v25;
      v8 = a2;
    }
    else
    {
      v19 = -2143354870;
    }
    if ( v13 )
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
    v25 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
    v6 = 0;
  }
  else
  {
    v19 = -1071775733;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v23);
  if ( v6 )
    return (unsigned int)GdiDeleteSprite(a1, v8, a3);
  return v19;
}
