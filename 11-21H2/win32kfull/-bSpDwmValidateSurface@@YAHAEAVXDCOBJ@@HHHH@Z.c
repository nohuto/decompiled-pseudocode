/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     NtGdiGetPixel @ 0x1C008A200 (NtGdiGetPixel.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013202C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C008E110 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C00FC5FC (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, int a5)
{
  unsigned int v5; // edi
  struct XDCOBJ *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  REGION *v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct REGION *v13; // rax
  __int64 v14; // rax
  LONG x; // r13d
  __int64 v16; // r13
  __int64 v17; // rax
  LONG v18; // ecx
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // r14
  __int64 v22; // r8
  int v23; // r13d
  int v24; // r12d
  __int64 v25; // rax
  LONG v26; // ecx
  LONG v27; // edx
  __int64 v29; // rsi
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // ecx
  int v33; // ebx
  int v34; // r12d
  __int64 v35; // rax
  int v37; // [rsp+50h] [rbp-B0h]
  struct _POINTL v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39[4]; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  HSURF v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  REGION *v46; // [rsp+A8h] [rbp-58h] BYREF
  int v47; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v49[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v50[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-10h]
  _BYTE v52[32]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v53[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v54[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v55[32]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v56[2]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v57[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v58; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v59; // [rsp+1F0h] [rbp+F0h] BYREF
  int v60; // [rsp+1F8h] [rbp+F8h]
  int v61; // [rsp+1FCh] [rbp+FCh]
  _DWORD v62[4]; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v63; // [rsp+210h] [rbp+110h] BYREF

  v5 = 0;
  v41 = (HSURF)a1;
  v6 = a1;
  v7 = a4;
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  v39[0] = a4;
  v38.x = a3;
  v59 = 0LL;
  v48 = 0LL;
  if ( !v8
    || (*(_DWORD *)(v8 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v8 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v8 + 472)
    || !*(_QWORD *)(v8 + 496)
    || !*(_DWORD *)(v8 + 488) && !*(_DWORD *)(v8 + 492)
    || KeAreApcsDisabled() )
  {
    return v5;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v53);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v52, v6, 0);
  v10 = 1;
  if ( (v52[24] & 1) == 0 )
    goto LABEL_60;
  v11 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 504LL) )
  {
LABEL_61:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v52);
    if ( v53[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v53);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v54);
    return v10;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 24LL);
  if ( !*(_DWORD *)(v11 + 492) )
  {
    v13 = DC::prgnVisSnap((DC *)v11);
    if ( !v13 )
      goto LABEL_60;
    v62[0] = *((_DWORD *)v13 + 24);
    v62[1] = *((_DWORD *)v13 + 25);
    v62[2] = *((_DWORD *)v13 + 26);
    v62[3] = *((_DWORD *)v13 + 27);
    if ( (unsigned int)ERECTL::bWrapped((ERECTL *)v62) )
      goto LABEL_60;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_60;
  if ( !a5 )
    goto LABEL_60;
  v14 = v7 + a2;
  x = v38.x;
  if ( (unsigned __int64)(v14 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_60;
  if ( (unsigned __int64)(a5 + (__int64)v38.x + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_60;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v49, v6, 0x204u);
  if ( (*(_DWORD *)(v49[0] + 32LL) & 2) == 0 )
    goto LABEL_60;
  v38.x = a2;
  v38.y = x;
  EXFORMOBJ::bXform((EXFORMOBJ *)v49, &v38, 1uLL);
  v16 = *(_QWORD *)v6;
  v17 = *(_DWORD *)(*(_QWORD *)v6 + 40LL) & 1LL;
  v18 = *(_DWORD *)(*(_QWORD *)v6 + 8 * v17 + 1020) + v38.y;
  LODWORD(v40) = *(_DWORD *)(*(_QWORD *)v6 + 8 * v17 + 1016) + v38.x;
  DWORD2(v40) = v40 + v39[0];
  HIDWORD(v40) = v18 + a5;
  DWORD1(v40) = v18;
  v38.y = v18;
  v58 = (struct _RECTL)v40;
  v38.x = v40;
  ERECTL::vOrder((ERECTL *)&v58);
  v19 = *(_QWORD *)(v16 + 496);
  v42 = 0LL;
  v43 = *(_DWORD *)(v19 + 56);
  v44 = *(_DWORD *)(v19 + 60);
  ERECTL::operator*=(&v58.left, (int *)&v42);
  if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v58) )
    goto LABEL_60;
  if ( *(_DWORD *)(v16 + 492) )
  {
    v24 = HIDWORD(v59);
    v23 = v59;
    goto LABEL_66;
  }
  if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v16 + 496), 0LL, (struct DC *)v16);
  v20 = 0;
  v37 = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !g_pDwmState )
  {
    v24 = HIDWORD(v59);
    v23 = v59;
    goto LABEL_56;
  }
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v50, *(HWND *)(*(_QWORD *)v6 + 472LL));
  v21 = v51;
  if ( v51 )
  {
    v22 = *(_QWORD *)(v51 + 144);
    *(_QWORD *)v39 = v22;
    if ( (*(_DWORD *)(v22 + 252) & 0x80u) != 0
      || *(_QWORD *)(v22 + 184) != ((*(_QWORD *)(*(_QWORD *)v41 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)v41 + 496LL) != 0LL)) )
    {
      goto LABEL_41;
    }
    if ( *(_QWORD *)(v22 + 80) )
    {
      v45 = *(_QWORD *)(v22 + 80);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
      if ( v45 && (_QWORD)v40 && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v45, &v58) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v46);
        if ( v46 )
        {
          v63.right = *(_DWORD *)(v21 + 64) - *(_DWORD *)(v21 + 56);
          v63.bottom = *(_DWORD *)(v21 + 68) - *(_DWORD *)(v21 + 60);
          *(_QWORD *)&v63.left = 0LL;
          RGNOBJ::vSet((RGNOBJ *)&v40, &v63);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v46, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v45, 4) )
          {
            v9 = v46;
            v20 = 1;
          }
          else if ( v46 )
          {
            REGION::vDeleteREGION(v46);
          }
        }
        if ( v47 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
      }
      v37 = v20;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
      if ( !v20 )
      {
        v21 = v51;
LABEL_41:
        v23 = v59;
        v24 = HIDWORD(v59);
LABEL_42:
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
        goto LABEL_54;
      }
      v22 = *(_QWORD *)v39;
    }
    else
    {
      v37 = 1;
    }
    v25 = *(_QWORD *)(v22 + 184);
    v59 = 0LL;
    if ( v25 )
    {
      v26 = *(_DWORD *)(v25 + 32);
      v27 = *(_DWORD *)(v25 + 36);
    }
    else
    {
      v27 = HIDWORD(v59);
      v26 = v59;
    }
    v23 = *(_DWORD *)(v21 + 56);
    v24 = *(_DWORD *)(v21 + 60);
    *(_QWORD *)&v58.left = 0LL;
    v58.right = v26;
    v58.bottom = v27;
    *(_DWORD *)(v22 + 252) |= 0x80u;
    if ( v9 )
    {
      v59 = *((_QWORD *)v9 + 12);
      v60 = *((_DWORD *)v9 + 26);
      v61 = *((_DWORD *)v9 + 27);
      ERECTL::operator*=(&v58.left, (int *)&v59);
      if ( ERECTL::bEmpty((ERECTL *)&v58) )
      {
        REGION::vDeleteREGION(v9);
        v37 = 0;
        *(_DWORD *)(*(_QWORD *)v39 + 252LL) |= 0x80u;
      }
    }
    v21 = v51;
    goto LABEL_42;
  }
  v24 = HIDWORD(v59);
  v23 = v59;
LABEL_54:
  v51 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
  v6 = (struct XDCOBJ *)v41;
LABEL_56:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)v6 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)v6 + 496LL), 0LL, *(_QWORD *)v6) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v6 + 44LL) |= 1u;
    goto LABEL_70;
  }
  if ( !v37 )
  {
LABEL_60:
    v10 = 0;
    goto LABEL_61;
  }
LABEL_66:
  v29 = *(_QWORD *)v6;
  if ( *(_DWORD *)(*(_QWORD *)v6 + 492LL) )
  {
    v58.left += *(_DWORD *)(v12 + 2560);
    v58.right += *(_DWORD *)(v12 + 2560);
    v58.top += *(_DWORD *)(v12 + 2564);
    v58.bottom += *(_DWORD *)(v12 + 2564);
  }
  else
  {
    v58.left += v23;
    v58.right += v23;
    v58.top += v24;
    v58.bottom += v24;
  }
  v30 = *(_QWORD *)(v12 + 2528);
  v31 = *(_DWORD *)(v12 + 2564);
  LODWORD(v42) = *(_DWORD *)(v12 + 2560);
  v43 = *(_DWORD *)(v30 + 56) + v42;
  v32 = *(_DWORD *)(v30 + 60);
  HIDWORD(v42) = v31;
  v44 = v31 + v32;
  ERECTL::operator*=(&v58.left, (int *)&v42);
  if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v58) )
  {
LABEL_70:
    if ( v9 )
      REGION::vDeleteREGION(v9);
    goto LABEL_60;
  }
  v38.x = v58.left;
  v39[0] = v58.top;
  if ( *(_DWORD *)(v29 + 492) )
  {
    v58.left -= *(_DWORD *)(v12 + 2560);
    v58.right -= *(_DWORD *)(v12 + 2560);
    v58.top -= *(_DWORD *)(v12 + 2564);
    v58.bottom -= *(_DWORD *)(v12 + 2564);
  }
  else
  {
    v58.right -= v23;
    v58.left -= v23;
    v58.bottom -= v24;
    v58.top -= v24;
  }
  v41 = *(HSURF *)(*(_QWORD *)(v29 + 496) + 32LL);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v52);
  if ( v53[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v53);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v54);
  v33 = 0;
  v34 = 8;
  do
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v56);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, v6, 0);
    v35 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
    if ( v35 )
    {
      if ( *(_QWORD *)(v35 + 3440) )
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v35 + 3440))(*(_QWORD *)(v35 + 1768), &v48);
        if ( v33 == 258 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          --v34;
        }
      }
    }
    else
    {
      v33 = -1073741823;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55);
    if ( v56[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v56);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v57);
  }
  while ( v33 == 258 && v34 );
  if ( v33 < 0 || v33 == 258 && !v34 )
  {
    if ( v9 )
      REGION::vDeleteREGION(v9);
  }
  else
  {
    return (unsigned int)bSpDwmUpdateSurface(0LL, v48, v6, v41, 1.0, v38.x, v39[0], (struct ERECTL *)&v58, v9);
  }
  return v5;
}
