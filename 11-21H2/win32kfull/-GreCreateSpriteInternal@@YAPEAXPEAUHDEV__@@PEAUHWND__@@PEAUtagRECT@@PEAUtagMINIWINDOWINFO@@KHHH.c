/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498
 * Callers:
 *     GreCreateSprite @ 0x1C00833D0 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0153D4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     DwmAsyncZorderSprite @ 0x1C0020B80 (DwmAsyncZorderSprite.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00826BC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00838C0 (DwmAsyncCreateSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C0083A1C (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00B53EC (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0103498 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0154F24 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int16 *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned __int16 *v11; // r14
  PVOID CurrentIrp; // rdx
  HSPRITE DwmSpriteObj; // rbx
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  HSPRITE NeighborSprite; // r13
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  void *v27; // rax
  unsigned __int16 *v28; // rbx
  __int64 v29; // rcx
  void *v30; // rax
  struct DWMSPRITE *v31; // r8
  int v33; // [rsp+20h] [rbp-E0h]
  _BYTE v34[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct PDEVOBJ *v35; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v36; // [rsp+50h] [rbp-B0h]
  HDEV v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _BYTE v40[32]; // [rsp+70h] [rbp-90h] BYREF
  DWMSPRITE *v41; // [rsp+90h] [rbp-70h]
  _BYTE v42[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  _BYTE v44[144]; // [rsp+C0h] [rbp-40h] BYREF

  v11 = 0LL;
  v35 = a2;
  v37 = a1;
  v36 = a11;
  if ( !a6 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v34, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v44, 0, 0x88uLL);
  if ( a4 )
    CurrentIrp = (PVOID)*((_QWORD *)a4 + 6);
  else
    CurrentIrp = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, (unsigned __int64)CurrentIrp, a1, a8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
  v41 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v40, DwmSpriteObj);
  v18 = v41;
  if ( v41 )
  {
    *((_DWORD *)v41 + 29) = 0;
    v19 = (__int64 *)*((_QWORD *)v18 + 18);
    if ( a3 )
      *(struct tagRECT *)((char *)v18 + 56) = *a3;
    v20 = v36;
    *((_DWORD *)v18 + 35) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 35) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v19 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 35) ^= (*((_DWORD *)v18 + 35) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v36 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v36, 0, 1);
    if ( !v35 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v44, (char *)v18 + 56, v21, v22);
      a4 = (struct tagMINIWINDOWINFO *)v44;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      v24 = *v19;
      v19[10] = v38;
      EtwTraceLifetimeAccum(v24, 1LL);
      if ( v39 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
    }
    v25 = *((_DWORD *)v18 + 35) & 1;
    v26 = v25 | *((_DWORD *)v19 + 63) & 0xC | (2
                                             * (*((_DWORD *)v19 + 63) & 1 | *((_DWORD *)v18 + 35) & 0x40 | (4 * (*((_DWORD *)v18 + 35) & 0xE))));
    v27 = (void *)UserReferenceDwmApiPort(v25);
    v33 = v26;
    v28 = v36;
    if ( (int)DwmAsyncCreateSprite(v27, v33, (__int64)a4, a5) < 0 )
    {
      v31 = v41;
      if ( v41 )
        _InterlockedDecrement((volatile signed __int32 *)v41 + 3);
      v41 = 0LL;
      vspDestroyDwmSpriteObjInternal(v37, 0LL, v31);
    }
    else
    {
      if ( NeighborSprite && *((_QWORD *)g_pDwmState + 18) )
      {
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
        v43 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v42, NeighborSprite);
        v30 = (void *)UserReferenceDwmApiPort(v29);
        DwmAsyncZorderSprite(v30, (__int64)v28, (__int64)NeighborSprite);
        if ( v43 )
          _InterlockedDecrement((volatile signed __int32 *)(v43 + 12));
        v43 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
      }
      v11 = v28;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v41 )
      _InterlockedDecrement((volatile signed __int32 *)v41 + 3);
  }
  v41 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v40);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v34);
  return v11;
}
