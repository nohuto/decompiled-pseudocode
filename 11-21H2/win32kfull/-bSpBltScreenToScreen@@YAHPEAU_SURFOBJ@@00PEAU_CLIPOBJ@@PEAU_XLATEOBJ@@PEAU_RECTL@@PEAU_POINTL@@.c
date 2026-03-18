/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027E220
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0060BB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0086ADC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0086C30 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0086C90 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00FAD28 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00FAD78 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0106F1C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015667C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0157480 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _RECTL *v12; // rsi
  RECTL rclBounds; // xmm6
  int v15; // eax
  struct _SPRITESTATE *v16; // r15
  int v17; // r13d
  int v18; // r12d
  int v19; // ebx
  struct _POINTL *v21; // rdx
  struct _CLIPOBJ *v22; // r9
  struct _RECTL *v23; // r8
  struct _POINTL *v24; // r11
  struct _SURFOBJ *v25; // r13
  int v26; // r15d
  int v27; // eax
  struct SPRITE *v28; // rbx
  struct _POINTL *v29; // rax
  int hsurf; // eax
  PVOID *v31; // rbx
  int v32; // eax
  LONG v33; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v35; // r12
  XCLIPOBJ *v36; // r13
  __int64 v37; // r10
  struct REGION *v38; // rax
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v40; // eax
  struct _POINTL *v41; // rdx
  struct _CLIPOBJ *v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  struct _POINTL v44; // [rsp+88h] [rbp-80h] BYREF
  int v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+94h] [rbp-74h]
  struct _POINTL v47; // [rsp+98h] [rbp-70h]
  int v48; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  struct _SURFOBJ *v50; // [rsp+B0h] [rbp-58h]
  struct SPRITE *v51; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v52; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-38h]
  int v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+DCh] [rbp-2Ch]
  int v56; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v57; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-18h] BYREF
  struct _POINTL *v59; // [rsp+F8h] [rbp-10h]
  struct _POINTL *v60; // [rsp+100h] [rbp-8h]
  PVOID *p_pvScan0; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v62; // [rsp+110h] [rbp+8h] BYREF
  struct _SURFOBJ *v63; // [rsp+120h] [rbp+18h]
  struct _XLATEOBJ *v64; // [rsp+128h] [rbp+20h]
  struct REGION *v65; // [rsp+130h] [rbp+28h] BYREF
  struct SPRITE *v66; // [rsp+138h] [rbp+30h] BYREF
  struct _SURFOBJ *v67; // [rsp+140h] [rbp+38h]
  __int64 v68; // [rsp+148h] [rbp+40h]
  struct _POINTL *v69; // [rsp+150h] [rbp+48h]
  __int64 v70; // [rsp+158h] [rbp+50h]
  struct _SPRITESTATE *v71; // [rsp+160h] [rbp+58h]
  char v72[8]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v73; // [rsp+170h] [rbp+68h]
  _BYTE v74[80]; // [rsp+178h] [rbp+70h] BYREF
  int v75; // [rsp+1C8h] [rbp+C0h]
  _BYTE v76[96]; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _SPRITESTATE *v77[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v78; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v79; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v80; // [rsp+318h] [rbp+210h] BYREF
  RECTL v81; // [rsp+328h] [rbp+220h] BYREF
  RECTL v82; // [rsp+338h] [rbp+230h] BYREF
  struct _RECTL v83; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v84[3]; // [rsp+358h] [rbp+250h] BYREF

  v11 = 0;
  v12 = a6;
  v64 = a5;
  v69 = a8;
  v68 = (__int64)a9;
  v73 = (__int64)a10;
  v70 = (__int64)a3;
  v67 = a1;
  v42 = a4;
  v58 = 0LL;
  v51 = 0LL;
  v57 = 0LL;
  v66 = 0LL;
  v83 = 0LL;
  v78 = 0LL;
  v62 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v81 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v81) )
      return 1LL;
    v82 = rclBounds;
    ERECTL::operator*=(&v82.left, &a6->left);
    v12 = &v82;
  }
  hdev = a1->hdev;
  *(_QWORD *)&v52.right = 0LL;
  *(_QWORD *)&v52.left = 0LL;
  v53 = 0LL;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)&v52);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v72, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((__int64 **)&v52) )
    goto LABEL_94;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v77, (struct PDEVOBJ *)&hdev);
  v16 = (struct _SPRITESTATE *)(hdev + 20);
  v17 = v12->left - a7->x;
  v18 = v12->top - a7->y;
  v71 = (struct _SPRITESTATE *)(hdev + 20);
  v48 = v17;
  v54 = v18;
  if ( v17 <= 0 )
  {
    v19 = 0;
    if ( v18 > 0 )
      v19 = 2;
  }
  else
  {
    v19 = 3;
    if ( v18 <= 0 )
      v19 = 1;
  }
  v43 = v19;
  if ( v42 )
  {
    if ( v42->iDComplexity )
      v81 = v42->rclBounds;
    else
      v42 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
  if ( !*((_QWORD *)v16 + 129) )
    goto LABEL_23;
  v78.left = v12->left - v17;
  v78.right = v12->right - v17;
  v78.top = v12->top - v18;
  v78.bottom = v12->bottom - v18;
  if ( *((_QWORD *)v16 + 130) )
  {
    v22 = 0LL;
    v23 = &v78;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v78, &v83) )
  {
    v22 = v42;
    v23 = &v83;
LABEL_22:
    vSpUpdateLockedScreenAreas(v16, v21, v23, v22, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v52.left = v12->left - v17;
  v52.top = v12->top - v18;
  v52.right = v12->right - v17;
  v52.bottom = v12->bottom - v18;
  ERECTL::operator+=((unsigned int *)&v52, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v84, v16, &v52);
  if ( !v84[0] )
    goto LABEL_91;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v74, v16, v12, v19, &v52);
  if ( !v75 )
    goto LABEL_90;
  do
  {
    v56 = ENUMAREAS::bEnum((ENUMAREAS *)v74, &v51, &v62);
    v78.left = v62.left - v17;
    v78.right = v62.right - v17;
    v78.top = v62.top - v18;
    v78.bottom = v62.bottom - v18;
    do
    {
      if ( v51 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v51 + 20);
        v60 = (struct _POINTL *)((char *)v51 + 168);
      }
      else
      {
        v25 = v67;
        v60 = v24;
      }
      v63 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v76, v16, &v78, v19, 0LL);
      v26 = v48;
      do
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v76, &v57, &v80);
        v28 = v57;
        v55 = v27;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v76, &v66) )
          v28 = v66;
        v57 = v28;
        if ( v28 )
        {
          v50 = (struct _SURFOBJ *)*((_QWORD *)v28 + 20);
          v29 = (struct _POINTL *)((char *)v28 + 168);
        }
        else
        {
          v50 = v67;
          v29 = &gptlZero;
        }
        v59 = v29;
        v79.left = v26 + v80.left;
        v79.right = v26 + v80.right;
        v79.top = v18 + v80.top;
        v79.bottom = v18 + v80.bottom;
        if ( v42 && !bIntersect(&v79, &v81, &v42->rclBounds) )
          goto LABEL_83;
        p_pvScan0 = 0LL;
        if ( v25 )
        {
          hsurf = (int)v25[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v25[-1].pvScan0;
            GreLockDisplayDevice(v25->hdev);
          }
        }
        v31 = 0LL;
        if ( v50 )
        {
          v32 = (int)v50[1].hsurf;
          if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
          {
            v31 = &v50[-1].pvScan0;
            GreLockDisplayDevice(v50->hdev);
          }
        }
        v45 = 0;
        v46 = 0;
        v33 = *((_DWORD *)hdev + 640);
        v47.y = (int)hdev[641];
        v44 = 0LL;
        v47.x = v33;
        if ( !v42 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 1) != 0 )
            {
              v35 = *(DC ***)(ThreadWin32Thread + 312);
              v36 = (DC *)((char *)*v35 + 1768);
              v65 = XDCOBJ::prgnEffRao(v35);
              if ( (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
              {
                v44.x = -v47.x;
                v44.y = -v47.y;
                RGNOBJ::bOffset((RGNOBJ *)&v65, &v44);
                v46 = 1;
              }
              v38 = XDCOBJ::prgnEffRao(v35);
              XCLIPOBJ::vSetup(v36, v38, (struct ERECTL *)&v79, 1);
              v18 = v54;
              v42 = (struct _CLIPOBJ *)v36;
              v25 = v63;
              v45 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&p_pvScan0, &v42) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v60, v25, v59, v50, v42, v64, &v79, (struct _POINTL *)&v80);
            goto LABEL_75;
          }
          if ( v69 )
          {
            LODWORD(v58) = v79.left + v69->x - v12->left;
            HIDWORD(v58) = v79.top + v69->y - v12->top;
          }
          *(_QWORD *)&v52.left = v42;
          if ( v25->iType != 1 )
            goto LABEL_71;
          if ( bAllowShareAccess(v25)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_74:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v39,
              (LONG *)v60,
              (__int64)v25,
              v59,
              (__int64)v50,
              v70,
              *(struct _CLIPOBJ **)&v52.left,
              (__int64)v64,
              &v79.left,
              (__int64 *)&v80.left,
              (__int64)&v58,
              v68,
              (__int64 *)v73,
              a11);
            goto LABEL_75;
          }
          if ( v25->iType != 1
            || !bAllowShareAccess(v25)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_71:
            if ( ((__int64)v25[1].hsurf & 1) != 0 )
            {
              v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v25->hdev + 163);
              goto LABEL_74;
            }
          }
          v39 = EngBitBlt;
          goto LABEL_74;
        }
LABEL_75:
        if ( v45 == 1 )
        {
          if ( v46 == 1 )
          {
            v44 = v47;
            RGNOBJ::bOffset((RGNOBJ *)&v65, &v44);
          }
          v42 = 0LL;
        }
        if ( v31 )
          GreUnlockDisplayDevice(v31[6]);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_83:
        if ( v42 )
          v42->rclBounds = v81;
      }
      while ( v55 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v76);
      v40 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v74, &v51);
      v16 = v71;
      v24 = &gptlZero;
      v19 = v43;
    }
    while ( v40 );
    if ( v51 )
      vSpRedrawArea(v71, &v62, 0);
    v17 = v48;
  }
  while ( v56 );
LABEL_90:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v74);
LABEL_91:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v84);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v16 + 120));
  if ( *((_QWORD *)v16 + 129) )
    vSpUpdateLockedScreenAreas(v16, v41, v12, v42, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v84);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v77);
LABEL_94:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v72);
  return v11;
}
