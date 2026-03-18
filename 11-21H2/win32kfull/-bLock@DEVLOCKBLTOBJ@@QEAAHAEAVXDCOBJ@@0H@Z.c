/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0289338 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0042384 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026AF64 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0271228 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C02713D4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0271408 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v3; // ebp
  __int64 *v7; // r12
  __int64 *v8; // r13
  int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d
  int v13; // edx
  bool v14; // zf
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  __int64 v32; // rax
  __int64 v33; // rdi
  DC *v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  BOOL v40; // edi
  int v41; // r8d
  int v42; // eax
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rax
  struct _SURFOBJ *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  HDC v52; // rdx
  __int64 v53; // rax
  signed __int32 v54[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v55[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v56; // [rsp+40h] [rbp-48h]
  __int64 v57; // [rsp+90h] [rbp+8h] BYREF
  __int64 v58; // [rsp+98h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = **(_QWORD **)a2;
  *((_QWORD *)this + 35) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 31, (HSURF *)this + 30, (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 34, (HSURF *)this + 33, 0LL) )
  {
    return 0LL;
  }
  v7 = (__int64 *)((char *)this + 120);
  v8 = (__int64 *)((char *)this + 176);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v9 = 1;
  if ( (!*(_QWORD *)a3 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
  {
    goto LABEL_26;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v3 = 1;
  }
  v10 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v11 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      v12 = *(_DWORD *)(v10 + 36);
      v13 = *(_DWORD *)(v11 + 36);
      if ( ((v13 ^ v12) & 0x200) != 0 )
      {
        if ( (**(_DWORD **)(v10 + 976) & 1) != 0 && (v13 & 0x8000) != 0 )
          goto LABEL_23;
        if ( (**(_DWORD **)(v11 + 976) & 1) == 0 )
          goto LABEL_22;
        v14 = (v12 & 0x8000) == 0;
      }
      else
      {
        if ( (v12 & 0x200) == 0 || (v13 & 0x200) == 0 || (v12 & 0x8000) == 0 )
          goto LABEL_22;
        v14 = (*(_DWORD *)(v11 + 36) & 0x8000) == 0;
      }
      if ( v14 )
LABEL_22:
        v9 = 0;
    }
LABEL_23:
    v57 = *(_QWORD *)(v10 + 48);
    v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v57);
  }
  if ( *(_QWORD *)a2 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v58);
  }
LABEL_26:
  v15 = 2;
  v16 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v16 & 0x8000) == 0 || !v9 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v17;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v18 = v17;
      if ( v3 && v17 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v18 = *((_QWORD *)this + 1);
        v3 = 0;
      }
      GreAcquireSemaphore(v18);
      v19 = *((_QWORD *)this + 1);
      v20 = 2LL;
      if ( v19 != ghsemGreLock )
        v20 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v19, v20);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      v21 = PtiCurrentShared();
      if ( v21 )
      {
        *(_QWORD *)(v21 + 320) = 0LL;
        *(_QWORD *)(v21 + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
      goto LABEL_42;
  }
  v23 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_63;
  v24 = *(_DWORD *)(v23 + 36);
  if ( (v24 & 0x200) == 0 )
    goto LABEL_69;
  if ( (v24 & 0x8000) == 0 || !v9 )
  {
    v25 = *(_QWORD *)(v23 + 64);
    *(_QWORD *)this = v25;
    *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v26 = v25;
    if ( v3 && v25 == ghsemGreLock )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
      v26 = *(_QWORD *)this;
      v3 = 0;
    }
    GreAcquireSemaphore(v26);
    if ( *(_QWORD *)this != ghsemGreLock )
      v15 = 11;
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
    v27 = *((_DWORD *)this + 28);
    if ( (v27 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
      *((_DWORD *)this + 28) = v27 | 0x200;
  }
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    v28 = PtiCurrentShared();
    if ( v28 )
    {
      *(_QWORD *)(v28 + 320) = 0LL;
      *(_QWORD *)(v28 + 312) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  v23 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
  {
LABEL_42:
    v22 = *((_DWORD *)this + 28);
    if ( (v22 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v22 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v22 & 0xFFFFFFFE;
LABEL_86:
    if ( v3 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    return 0LL;
  }
  if ( v23 )
  {
LABEL_69:
    v30 = *((_DWORD *)this + 28);
    v29 = v30;
    if ( (v30 & 0x1000) != 0 && (*(_DWORD *)(v23 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v30 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v30 & 0xFFFFFFFE;
      goto LABEL_86;
    }
  }
  else
  {
LABEL_63:
    v29 = *((_DWORD *)this + 28);
  }
  if ( (v29 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v29 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v29 & 0xFFFFFFFE;
    goto LABEL_86;
  }
  if ( v23
    && ((v29 & 0x1000) != 0 || (*(_DWORD *)(v23 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v23 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v23)
    || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_86;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_111;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 30) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v32 = PtiCurrentShared();
      v33 = v32;
      if ( v32 )
      {
        *(_QWORD *)(v32 + 312) = v7;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
        {
          *(_DWORD *)(v32 + 328) |= 1u;
          *(_QWORD *)(*(_QWORD *)a2 + 1976LL) = 0LL;
          GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          *(_DWORD *)(v33 + 336) = giVisRgnUniqueness;
          EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
        }
      }
    }
    v34 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v34 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 33) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v34);
      v35 = PtiCurrentShared();
      if ( v35 )
        *(_QWORD *)(v35 + 320) = a3;
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_111:
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v36 = *((_DWORD *)this + 28);
  if ( (v36 & 0x1000) == 0 )
    goto LABEL_152;
  if ( *(_QWORD *)a3 )
    v37 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v37 = 0LL;
  v38 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v39 = *(_QWORD *)(v38 + 496);
  else
    v39 = 0LL;
  v40 = 0;
  if ( v37 && v39 && v37 != v39 )
  {
    if ( v37 < v39 )
    {
      v41 = v36 | 0x8000;
      *((_DWORD *)this + 28) = v41;
      v40 = DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v41, 1) == 0;
      _InterlockedOr(v54, 0);
      v42 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1);
      goto LABEL_133;
    }
    v40 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) == 0;
    _InterlockedOr(v54, 0);
    v43 = 1;
  }
  else
  {
    if ( v38 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
      v40 = 1;
    if ( *(_QWORD *)a2 && **(_QWORD **)a2 == **(_QWORD **)a3 )
      goto LABEL_134;
    v43 = 0;
  }
  v42 = DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v36, v43);
LABEL_133:
  if ( !v42 )
    goto LABEL_138;
LABEL_134:
  if ( v40
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_138;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
    if ( v44 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        if ( bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)(v44 + 24)) )
        {
          SURFREF::SURFREF((SURFREF *)v55, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL));
          if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
          {
            v48 = v56;
            *((_QWORD *)this + 13) = a3;
            *((_QWORD *)this + 12) = *(_QWORD *)(v48 + 32);
            SURFREF::vKeepIt((SURFREF *)v55);
          }
          else
          {
            v45 = PtiCurrentShared();
            if ( !v45 || *(_QWORD *)(v45 + 384) )
            {
              *((_DWORD *)this + 28) &= ~1u;
              SURFREF::~SURFREF((SURFREF *)v55);
              return 0LL;
            }
            v46 = SURFMEM::pSurfobj((DEVLOCKBLTOBJ *)((char *)this + 40));
            *(_QWORD *)(v47 + 384) = v46;
          }
          CAutoTGO::vGuard(
            (DEVLOCKBLTOBJ *)((char *)this + 56),
            this,
            (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
          EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
          v49 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 1) = 0LL;
          *((_QWORD *)this + 4) = 0LL;
          if ( v49 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v49);
            GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
            *((_QWORD *)this + 2) = 0LL;
          }
          SURFREF::~SURFREF((SURFREF *)v55);
          goto LABEL_152;
        }
LABEL_138:
        *((_DWORD *)this + 28) &= ~1u;
        return 0LL;
      }
    }
  }
LABEL_152:
  v50 = *((_DWORD *)this + 28);
  if ( (v50 & 0x1000) == 0 && (v50 & 0x800000) == 0 )
    return 1LL;
  v51 = *v7;
  if ( !*v7 )
  {
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), **(HDC **)a2);
    v51 = *v7;
    if ( !*v7 )
      goto LABEL_158;
    *((_BYTE *)this + 169) = 0;
  }
  *(_DWORD *)(v51 + 40) |= 2u;
  *((_BYTE *)this + 168) = 1;
LABEL_158:
  v52 = **(HDC **)a3;
  if ( v52 != **(HDC **)a2 )
  {
    v53 = *v8;
    if ( *v8 )
    {
LABEL_162:
      *(_DWORD *)(v53 + 40) |= 2u;
      *((_BYTE *)this + 224) = 1;
      return 1LL;
    }
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), v52);
    v53 = *v8;
    if ( *v8 )
    {
      *((_BYTE *)this + 225) = 0;
      goto LABEL_162;
    }
  }
  return 1LL;
}
