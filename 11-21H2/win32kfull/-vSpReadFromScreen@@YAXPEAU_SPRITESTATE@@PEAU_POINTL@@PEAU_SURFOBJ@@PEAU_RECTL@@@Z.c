/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155820
 * Callers:
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0155234 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155668 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0282B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01564F0 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015660C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     OffCopyBits @ 0x1C01568A8 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027DD30 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rax
  struct REGION *v10; // r14
  int v11; // ecx
  char *p_pvScan0; // rsi
  int hsurf; // eax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdi
  HSURF v18; // rdx
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  HDEV hdev; // rax
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-98h]
  int v23[2]; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  int v25[2]; // [rsp+80h] [rbp-80h]
  _BYTE v26[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h]
  _BYTE v28[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[52]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+40h]
  int v35; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v24 = (__int64)a4;
  *(_QWORD *)v25 = a2;
  v31 = 0LL;
  v32 = 0;
  v33 = 1;
  v34 = 0LL;
  v30 = 0LL;
  v35 = 0;
  v22 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v28, v8, v4, (struct ERECTL *)a4, 0);
    v4 = 0LL;
    if ( ERECTL::bEmpty((ERECTL *)v29) )
      goto LABEL_66;
    v22 = (struct _CLIPOBJ *)v28;
  }
  v9 = *((_QWORD *)a1 + 4);
  v10 = v4;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 88);
    if ( (v11 & 0x80004000) != 0 && (v11 & 0x200) == 0 )
    {
      v10 = (struct REGION *)(v9 - 24);
      GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
    }
  }
  p_pvScan0 = (char *)v4;
  if ( a3 )
  {
    hsurf = (int)a3[1].hsurf;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = (char *)&a3[-1].pvScan0;
      GreLockDisplayDevice(a3->hdev);
    }
  }
  v14 = *((_QWORD *)a1 + 4);
  v15 = (__int64)v4;
  v21 = (__int64)v4;
  *(_QWORD *)v23 = &gptlZero;
  if ( ((v14 - 24) & -(__int64)(v14 != 0)) == 0 )
    goto LABEL_62;
  if ( (*(_DWORD *)(((v14 - 24) & -(__int64)(v14 != 0)) + 0x70) & 0x80000) == 0 )
  {
LABEL_26:
    if ( ((__int64)a3[1].hsurf & 0x400) == 0 && *(struct REGION **)(v14 + 24) != v4 )
    {
      if ( *(_WORD *)(v14 + 76) != 1 )
      {
LABEL_41:
        if ( (*(_DWORD *)(v14 + 88) & 0x400) != 0 )
        {
          hdev = *(HDEV *)(v14 + 24);
LABEL_59:
          v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 164);
          goto LABEL_61;
        }
        goto LABEL_60;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)v14)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || *(struct REGION **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) == v4
        || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104) == (_DWORD)v4
        && *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) == (_DWORD)v4
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( *(_WORD *)(v14 + 76) == 1
          && bAllowShareAccess((struct _SURFOBJ *)v14)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(struct REGION **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) != v4
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104) != (_DWORD)v4
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) != (_DWORD)v4) )
        {
          goto LABEL_60;
        }
        goto LABEL_41;
      }
LABEL_50:
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_61:
      OffCopyBits((int)v19, v25[0], (int)a3, v23[0], v14, v22, v15, v24, v24);
      goto LABEL_62;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(struct REGION **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) != v4
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104) != (_DWORD)v4
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) != (_DWORD)v4)
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_50;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(struct REGION **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) != v4
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104) != (_DWORD)v4
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) != (_DWORD)v4) )
      {
        goto LABEL_60;
      }
    }
    if ( ((__int64)a3[1].hsurf & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_59;
    }
LABEL_60:
    v19 = EngCopyBits;
    goto LABEL_61;
  }
  v16 = *(_QWORD *)(((v14 - 24) & -(__int64)(v14 != 0)) + 0x30);
  v17 = *(_QWORD *)(v16 + 24);
  if ( v16 == v17 )
  {
    v4 = 0LL;
    goto LABEL_26;
  }
  v18 = *(HSURF *)(((v14 - 24) & -(__int64)(v14 != 0)) + 0x90);
  *(_QWORD *)v23 = v16 + 2560;
  SURFREF::SURFREF((SURFREF *)v26, v18);
  if ( v27 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v21,
                         0LL,
                         0,
                         *(_QWORD *)(v17 + 1776),
                         *(_QWORD *)(v16 + 1776),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v15 = v21;
      v14 = v27 + 24;
      if ( !v27 )
        v14 = 0LL;
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2816);
      if ( v27 )
        DEC_SHARE_REF_CNT(v27);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
      goto LABEL_61;
    }
    if ( v27 )
      DEC_SHARE_REF_CNT(v27);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
LABEL_62:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(*((_QWORD *)p_pvScan0 + 6));
  if ( v10 )
    GreUnlockDisplayDevice(*((_QWORD *)v10 + 6));
LABEL_66:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v28);
}
