/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0275770 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00217D8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreCreateSprite @ 0x1C00833D0 (GreCreateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00843F8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0084420 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C011778C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C0123E00 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C01547A4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C015D6CC (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r12
  void **v5; // r15
  int v6; // ebx
  HSPRITE v7; // rsi
  __int64 DisplayDC; // r14
  __int64 v10; // rdi
  HDEV HDEV; // r13
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  HSPRITE v14; // rax
  struct DWMSPRITE *v15; // r12
  struct SFMLOGICALSURFACE *v16; // r15
  struct _SURFOBJ *v17; // rdx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v19; // edi
  _BYTE v20[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v21[4]; // [rsp+84h] [rbp-1A4h] BYREF
  struct tagSIZE v22; // [rsp+88h] [rbp-1A0h] BYREF
  HDC *v23; // [rsp+90h] [rbp-198h]
  __int64 v24; // [rsp+98h] [rbp-190h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp-188h]
  void **v26; // [rsp+A8h] [rbp-180h]
  HDEV v27; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-170h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v30[2]; // [rsp+C8h] [rbp-160h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-150h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-140h]
  _BYTE v33[32]; // [rsp+F0h] [rbp-138h] BYREF
  struct DWMSPRITE *v34; // [rsp+110h] [rbp-118h]
  _QWORD v35[7]; // [rsp+118h] [rbp-110h] BYREF
  _BYTE v36[112]; // [rsp+150h] [rbp-D8h] BYREF
  struct tagRECT v37; // [rsp+1C0h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+1D0h] [rbp-58h] BYREF

  v4 = a4;
  v23 = a4;
  v5 = a3;
  v26 = a3;
  v25 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  v7 = 0LL;
  DisplayDC = 0LL;
  if ( !v35[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v35[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
  v28 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v27 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)&v27);
  if ( HDEV && !_bittest((const signed __int32 *)HDEV + 10, 0xAu) )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_26:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        DisplayDC = 0LL;
      }
      goto LABEL_30;
    }
    v24 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 40);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v24) )
        {
          v37.left = *(_DWORD *)(v10 + 2560);
          v37.top = *(_DWORD *)(v10 + 2564);
          v37.right = v37.left + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 172LL);
          v37.bottom = v37.top + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v37, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v33, 0LL, v14);
            v15 = v34;
            if ( v34 )
            {
              v29 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v34 + 18);
              v16 = v29;
              vSpDwmUpdateSpriteVisibility(v34, 0);
              v22 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2568) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v15, v16, &v22, &v29) )
              {
                v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 23);
                v30[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v30, v17);
                v38[0] = 0LL;
                v38[1] = v22;
                v24 = 0LL;
                v31 = 0LL;
                v32 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v27) )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) & 1) != 0 )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 351);
                }
                else
                {
                  v18 = EngBitBlt;
                }
                v19 = v25;
                LODWORD(v31) = v25 & 0xFFFFFF;
                LODWORD(v32) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v18)(
                  *((_QWORD *)v16 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v38,
                  &v24,
                  0LL,
                  &v31,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v19, 0LL, 0x20400001u, &v37, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v33);
              v5 = v26;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v33);
            }
            v4 = v23;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *v5 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = (HDC)DisplayDC;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v35);
  return (unsigned int)v6;
}
