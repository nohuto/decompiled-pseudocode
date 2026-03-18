/*
 * XREFs of GreRealizePalette @ 0x1C01470CC
 * Callers:
 *     xxxRealizePalette @ 0x1C0147070 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00DAB40 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00DCDA0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AC700 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BB934 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  HPALETTE v4; // rdi
  struct _W32PROCESS *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  HDC v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 matched; // rax
  HDC v18; // rbx
  _DWORD *v19; // rdx
  int v20; // eax
  HDC v21; // rdi
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  HDC v24; // rbx
  void (__fastcall *v25)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  char *v26; // r8
  signed __int64 v27; // r10
  unsigned int v28; // r9d
  unsigned int v29; // ebx
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  char v38[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v42[40]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  _QWORD v46[2]; // [rsp+110h] [rbp+10h] BYREF
  char v47[40]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v48; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+150h] [rbp+50h]
  char v50; // [rsp+198h] [rbp+98h] BYREF
  int v51; // [rsp+1A0h] [rbp+A0h] BYREF
  int v52; // [rsp+1A8h] [rbp+A8h] BYREF

  v52 = 0;
  v51 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  if ( !v41[0] )
    goto LABEL_79;
  v33 = *(_QWORD *)(v41[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v50);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v38, (struct PDEVOBJ *)&v33);
  v37 = *(_QWORD *)(v33 + 56);
  GreAcquireSemaphore(v37);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v46);
  v1 = v33;
  v49 = 0LL;
  v43 = 0LL;
  v48 = 0LL;
  v46[0] = 0LL;
  v45 = 1;
  if ( (*(_DWORD *)(v33 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v43 = *(_QWORD *)(v33 + 48);
    v44 = v33;
    GreAcquireSemaphore(v43);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v43, 11LL);
    v1 = v33;
  }
  v2 = *(_QWORD *)(v1 + 1776);
  v31 = v2;
  v3 = *(_QWORD *)(v41[0] + 88LL);
  v4 = *(HPALETTE *)v3;
  if ( (*(_DWORD *)(v1 + 2140) & 0x100) != 0 )
  {
    v36 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v4 != hForePalette )
    {
      v5 = *(struct _W32PROCESS **)(v41[0] + 976LL);
      if ( *((_DWORD *)v5 + 52) != 1
        || (v6 = 16711680LL,
            v5 = (struct _W32PROCESS *)((unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000),
            (_DWORD)v5 != ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
        || (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v5),
            v5 = hForePID,
            hForePID != CurrentProcessWin32Process) )
      {
        if ( (struct PALETTE *)v3 == ppalDefault )
          goto LABEL_64;
        v9 = *(_DWORD **)(v3 + 80);
        if ( v9 )
        {
          v10 = XEPALOBJ::ulTime((XEPALOBJ *)&v31);
          if ( *v9 == v10 )
            goto LABEL_64;
        }
        GreAcquireHmgrSemaphore(v5, v9, v6, v7);
        v11 = *(HDC *)(v3 + 40);
        while ( v11 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v32, v11);
          if ( !v32[0] )
          {
            MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
            goto LABEL_36;
          }
          *(_DWORD *)(*(_QWORD *)(v32[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 152LL) | 0xF;
          v11 = *(HDC *)(v32[0] + 984LL);
          XDCOBJ::RestoreAttributes((XDCOBJ *)v32);
          v32[0] = 0LL;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
        }
        v12 = *(_QWORD *)(v3 + 88);
        if ( v12 )
        {
          if ( v12 != *(_QWORD *)(v3 + 72) )
            Win32FreePool(v12);
          *(_QWORD *)(v3 + 88) = 0LL;
        }
        v13 = *(_DWORD **)(v3 + 72);
        if ( v13 )
        {
          if ( *v13 )
            goto LABEL_32;
          if ( *(_DWORD **)(v3 + 80) != v13 )
            Win32FreePool(v13);
          *(_QWORD *)(v3 + 72) = 0LL;
        }
        v35 = 0;
        v34 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v34, 1u, *(_DWORD *)(v31 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v14 = *(unsigned int *)(v31 + 28);
          v15 = *(_DWORD *)(v34 + 28);
          if ( (unsigned int)v14 >= v15 )
            v14 = v15;
          memmove(*(void **)(v34 + 112), *(const void **)(v31 + 112), 4 * v14);
          *(_DWORD *)(v34 + 60) = *(_DWORD *)(v31 + 60);
          *(_DWORD *)(v34 + 24) = *(_DWORD *)(v31 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v34);
          *(_QWORD *)(v3 + 72) = ptransMatchAPal(v16, v34, v3, 1LL, &v50, &v50);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v34);
        v13 = *(_DWORD **)(v3 + 72);
LABEL_32:
        *(_QWORD *)(v3 + 88) = *(_QWORD *)(v3 + 80);
        if ( v13 )
        {
          matched = ptransMatchAPal(v13, v31, v3, 0LL, &v51, &v52);
          *(_QWORD *)(v3 + 80) = matched;
          if ( !matched )
            *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 72);
        }
        else
        {
          *(_QWORD *)(v3 + 80) = 0LL;
        }
LABEL_36:
        v18 = *(HDC *)(v3 + 40);
        while ( v18 != v11 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v39, v18);
          _InterlockedDecrement((volatile signed __int32 *)(v39[0] + 12LL));
          v18 = *(HDC *)(v39[0] + 984LL);
          MDCOBJ::~MDCOBJ((MDCOBJ *)v39);
        }
LABEL_63:
        GreReleaseHmgrSemaphore();
LABEL_64:
        SEMOBJ::vUnlock((SEMOBJ *)&v36);
        v1 = v33;
        v2 = v31;
        goto LABEL_65;
      }
    }
    if ( (struct PALETTE *)v3 == ppalDefault )
      goto LABEL_64;
    v19 = *(_DWORD **)(v3 + 72);
    if ( v19 )
    {
      if ( v19 == *(_DWORD **)(v3 + 80) )
      {
        v20 = XEPALOBJ::ulTime((XEPALOBJ *)&v31);
        if ( *v19 == v20 )
          goto LABEL_64;
      }
    }
    GreAcquireHmgrSemaphore(v5, v19, v6, v7);
    v21 = *(HDC *)(v3 + 40);
    while ( v21 )
    {
      MDCOBJ::MDCOBJ((MDCOBJ *)v32, v21);
      if ( !v32[0] )
        goto LABEL_59;
      *(_DWORD *)(*(_QWORD *)(v32[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 152LL) | 0xF;
      v21 = *(HDC *)(v32[0] + 984LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)v32);
      v32[0] = 0LL;
      MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
    }
    v22 = *(_QWORD *)(v3 + 88);
    if ( v22 )
    {
      if ( v22 != *(_QWORD *)(v3 + 72) )
        Win32FreePool(v22);
      *(_QWORD *)(v3 + 88) = 0LL;
    }
    v23 = *(_DWORD **)(v3 + 72);
    if ( v23 )
    {
      if ( *v23 )
      {
        vMatchAPal(v41[0], v31, v3, &v51, &v52);
LABEL_58:
        *(_QWORD *)(v3 + 88) = *(_QWORD *)(v3 + 80);
        *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 72);
LABEL_59:
        v24 = *(HDC *)(v3 + 40);
        while ( v24 != v21 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v40, v24);
          _InterlockedDecrement((volatile signed __int32 *)(v40[0] + 12LL));
          v24 = *(HDC *)(v40[0] + 984LL);
          MDCOBJ::~MDCOBJ((MDCOBJ *)v40);
        }
        goto LABEL_63;
      }
      if ( *(_DWORD **)(v3 + 80) != v23 )
        Win32FreePool(v23);
      *(_QWORD *)(v3 + 72) = 0LL;
    }
    *(_QWORD *)(v3 + 72) = ptransMatchAPal(v23, v31, v3, 1LL, &v51, &v52);
    goto LABEL_58;
  }
LABEL_65:
  if ( v51 )
  {
    if ( (*(_DWORD *)(v1 + 40) & 0x400) == 0 )
    {
      v25 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v1 + 1736);
      if ( v25 )
      {
        v25(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 1768LL), &v31, 0LL, 0LL, *(_DWORD *)(v2 + 28));
        v2 = v31;
      }
    }
    if ( *(_DWORD *)(v2 + 28) == 256 )
    {
      v26 = *(char **)(v2 + 112);
      v27 = (char *)aPalHalftone - v26;
      v28 = 0;
      while ( ((*(_DWORD *)v26 ^ *(_DWORD *)&v26[v27]) & 0xFFFFFF) == 0 )
      {
        ++v28;
        v26 += 4;
        if ( v28 >= 0x100 )
        {
          if ( v28 == 256 )
          {
            *(_DWORD *)(v2 + 24) |= 0x100000u;
            goto LABEL_76;
          }
          break;
        }
      }
      *(_DWORD *)(v2 + 24) &= ~0x100000u;
    }
  }
LABEL_76:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v43);
  if ( v46[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v46);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v47);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v38);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v50);
LABEL_79:
  v29 = v52 | (v51 << 16);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v41);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
  return v29;
}
