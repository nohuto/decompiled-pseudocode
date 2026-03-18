/*
 * XREFs of GreGetSpriteAttributes @ 0x1C00C8640
 * Callers:
 *     _GetLayeredWindowAttributes @ 0x1C0010328 (_GetLayeredWindowAttributes.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C001C654 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        Gre::Base *a1,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  int v11; // r12d
  struct Gre::Base::SESSION_GLOBALS *v12; // rdi
  void *v13; // r8
  struct PDEVOBJ *v14; // rdx
  __int64 v15; // rdx
  _BYTE v17[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]

  v7 = 0;
  v11 = 1;
  v12 = Gre::Base::Globals(a1);
  if ( !a7 || !(unsigned int)IsDwmActive() )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v13, a4, a5, a6);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a7, v14, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v12 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v12 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    v11 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v17, a2, 0LL);
    v15 = v18;
    if ( v18 )
    {
      v7 = 1;
      *a4 = *(_DWORD *)(v18 + 80);
      *a5 = *(struct _BLENDFUNCTION *)(v15 + 76);
      *a6 = *(_DWORD *)(v15 + 72);
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
    }
    v18 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v12 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a7);
  if ( v11 )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v13, a4, a5, a6);
  return v7;
}
