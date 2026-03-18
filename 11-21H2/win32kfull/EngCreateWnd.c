/*
 * XREFs of EngCreateWnd @ 0x1C0283EE0
 * Callers:
 *     VerifierEngCreateWnd @ 0x1C029CEC0 (VerifierEngCreateWnd.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     UserAssociateHwnd @ 0x1C01E318C (UserAssociateHwnd.c)
 *     ??1WO_CLEANUP@@QEAA@XZ @ 0x1C0283684 (--1WO_CLEANUP@@QEAA@XZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0283C44 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 */

WNDOBJ *__stdcall EngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  __int64 v5; // rbx
  PVOID *p_pvScan0; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  TRACKOBJ *v12; // rax
  __int64 i; // rcx
  TRACKOBJ *v14; // rdi
  __int64 v15; // rax
  struct _RECTL *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  struct REGION *v19; // rdx
  struct REGION **v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 Semaphore; // rax
  FLONG v24; // r15d
  struct REGION *v25; // rdx
  __int64 v26; // rax
  struct REGION *v28; // [rsp+20h] [rbp-B1h] BYREF
  int v29; // [rsp+28h] [rbp-A9h]
  struct REGION *v30; // [rsp+30h] [rbp-A1h] BYREF
  int v31; // [rsp+38h] [rbp-99h]
  __int64 v32; // [rsp+40h] [rbp-91h] BYREF
  int v33; // [rsp+48h] [rbp-89h]
  __int64 v34; // [rsp+50h] [rbp-81h] BYREF
  __int64 v35; // [rsp+58h] [rbp-79h] BYREF
  int v36; // [rsp+60h] [rbp-71h] BYREF
  __int64 v37; // [rsp+68h] [rbp-69h]
  __int128 v38; // [rsp+70h] [rbp-61h]
  __int128 v39; // [rsp+80h] [rbp-51h]
  __int128 v40; // [rsp+90h] [rbp-41h]
  struct _RECTL v41; // [rsp+A0h] [rbp-31h] BYREF
  struct _RECTL v42; // [rsp+B0h] [rbp-21h] BYREF
  struct _RECTL v43; // [rsp+C0h] [rbp-11h] BYREF
  struct _RECTL v44; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0LL;
  p_pvScan0 = &pso[-1].pvScan0;
  v36 = 0;
  v7 = -(__int64)pso;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = (unsigned __int64)p_pvScan0 & -(__int64)(v7 != 0);
  v40 = 0LL;
  if ( (unsigned int)UserIsUserCritSecIn(v7) && (fl & 0xF7FFFC00) == 0 )
  {
    v35 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v12 = gpto;
    if ( gpto )
    {
      while ( 2 )
      {
        for ( i = *((_QWORD *)v12 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          if ( *(HWND *)(i + 176) == hwnd )
          {
            if ( *((WNDOBJCHANGEPROC *)v12 + 5) == pfn && *(_DWORD *)(i + 188) == iPixelFormat )
              v5 = -1LL;
            goto LABEL_44;
          }
        }
        v12 = (TRACKOBJ *)*((_QWORD *)v12 + 1);
        if ( v12 )
          continue;
        break;
      }
      v14 = gpto;
      do
      {
        if ( *((_QWORD *)v14 + 4) == v8 && *((WNDOBJCHANGEPROC *)v14 + 5) == pfn )
          break;
        v14 = (TRACKOBJ *)*((_QWORD *)v14 + 1);
      }
      while ( v14 );
      if ( v14 )
        goto LABEL_25;
    }
    v15 = Win32AllocPoolZInit(72LL, 1684961095LL);
    v14 = (TRACKOBJ *)v15;
    if ( !v15 )
      goto LABEL_44;
    v37 = v15;
    v16 = (struct _RECTL *)(v15 + 52);
    *(_DWORD *)(v15 + 52) = 0;
    *(_DWORD *)v15 = 1128354388;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = v8;
    *(_QWORD *)(v15 + 40) = pfn;
    *(_DWORD *)(v15 + 48) = fl;
    *(_DWORD *)(v15 + 56) = 0;
    *(_DWORD *)(v15 + 60) = *(_DWORD *)(v8 + 56);
    *(_DWORD *)(v15 + 64) = *(_DWORD *)(v8 + 60);
    if ( (fl & 0xC) != 0 )
    {
      v17 = Win32AllocPoolZInit(208LL, 1684961095LL);
      v18 = v17;
      if ( !v17 )
        goto LABEL_44;
      *(_QWORD *)&v38 = v17;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28, 0, 1);
      if ( !v28 )
      {
        if ( v29 == 1 )
        {
          v20 = &v28;
LABEL_43:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
        }
LABEL_44:
        SEMOBJ::vUnlock((SEMOBJ *)&v35);
        goto LABEL_45;
      }
      *(_QWORD *)&v39 = v28;
      RGNOBJ::vSet((RGNOBJ *)&v28, v16);
      *(_QWORD *)(v18 + 168) = v14;
      v19 = v28;
      *((_DWORD *)v19 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      v41 = *v16;
      EWNDOBJ::vSetClip(v18, v28, &v41);
      *(_QWORD *)(v18 + 24) = 0LL;
      *(_DWORD *)(v18 + 152) = 1145984837;
      *(_QWORD *)(v18 + 160) = 0LL;
      *(_QWORD *)(v18 + 176) = 0LL;
      *(_DWORD *)(v18 + 188) = 0;
      *(_QWORD *)(v18 + 48) = (v8 + 24) & -(__int64)(v8 != 0);
      *(_DWORD *)(v18 + 184) = fl | 0x20000000;
      *((_QWORD *)v14 + 2) = v18;
      if ( v29 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
    }
LABEL_25:
    if ( (*((_DWORD *)v14 + 12) & 0x87FFFFF) != fl )
      goto LABEL_44;
    v21 = Win32AllocPoolZInit(208LL, 1684961095LL);
    v22 = v21;
    if ( !v21 )
      goto LABEL_44;
    *((_QWORD *)&v38 + 1) = v21;
    v43 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30, 0, 1);
    if ( !v30 )
    {
LABEL_41:
      if ( v31 == 1 )
      {
        v20 = &v30;
        goto LABEL_43;
      }
      goto LABEL_44;
    }
    *((_QWORD *)&v39 + 1) = v30;
    RGNOBJ::vSet((RGNOBJ *)&v30, &v43);
    v44 = 0LL;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32, 0, 1);
    if ( v32 )
    {
      *(_QWORD *)&v40 = v32;
      RGNOBJ::vSet((RGNOBJ *)&v32, &v44);
      Semaphore = GreCreateSemaphore();
      *(_QWORD *)(v22 + 200) = Semaphore;
      if ( Semaphore )
      {
        *(_QWORD *)(v22 + 168) = v14;
        v24 = fl | 0x10000000;
        v25 = v30;
        *((_QWORD *)&v40 + 1) = Semaphore;
        *((_DWORD *)v25 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
        v42 = v43;
        EWNDOBJ::vSetClip(v22, v30, &v42);
        *(_QWORD *)(v22 + 192) = v32;
        v26 = v8 + 24;
        *(_QWORD *)(v22 + 24) = 0LL;
        if ( !v8 )
          v26 = 0LL;
        *(_QWORD *)(v22 + 48) = v26;
        *(_DWORD *)(v22 + 188) = iPixelFormat;
        *(_DWORD *)(v22 + 152) = 1145984837;
        *(_QWORD *)(v22 + 176) = hwnd;
        *(_DWORD *)(v22 + 184) = v24;
        if ( hwnd )
        {
          if ( !(unsigned int)UserAssociateHwnd((__int64)hwnd, v22) )
            goto LABEL_39;
        }
        else
        {
          *(_QWORD *)(v8 + 136) = v22;
        }
        *(_QWORD *)(v22 + 160) = *((_QWORD *)v14 + 3);
        *((_QWORD *)v14 + 3) = v22;
        if ( v37 )
        {
          *((_QWORD *)v14 + 1) = gpto;
          gpto = v14;
        }
        gbWndobjUpdate = 1;
        *((_DWORD *)v14 + 12) |= 0x40000000u;
        *(_DWORD *)(v22 + 184) |= 0x40000000u;
        v34 = *(_QWORD *)(v8 + 48);
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v34);
        v36 = 1;
        v5 = v22;
      }
    }
LABEL_39:
    if ( v33 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
    goto LABEL_41;
  }
LABEL_45:
  WO_CLEANUP::~WO_CLEANUP((WO_CLEANUP *)&v36);
  return (WNDOBJ *)v5;
}
