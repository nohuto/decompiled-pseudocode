/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1630
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180041554 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800464A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AF0FC (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B6EC8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E3E30 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E3F38 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E43B0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // r14
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v11; // rdi
  CTetherVisual *v12; // r9
  int v13; // eax
  CContactManager *v14; // rcx
  int v15; // eax
  int v16; // eax
  CContactManager *v17; // rcx
  __int64 v18; // rax
  CBaseObject *v19; // r14
  __int64 v20; // rax
  CDirectTouchVisual **v21; // rdx
  int Touch; // eax
  CContactManager *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // ebx
  CContactManager *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  CBaseObject *v32; // rcx
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v35; // [rsp+90h] [rbp+50h] BYREF
  __int64 v36; // [rsp+98h] [rbp+58h] BYREF

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v35 = 0LL;
  GetDesktopID(1LL, &v34, v5);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v8 = 104LL * v6;
    if ( *(_DWORD *)(v8 + v7) == *((_DWORD *)a2 + 1) )
      break;
    if ( ++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( (v6 & 0x80000000) != 0 || *(_DWORD *)(v8 + v7 + 4) != 1 )
  {
LABEL_5:
    v9 = -2147024809;
    goto LABEL_6;
  }
  v11 = 104LL * v6;
  v12 = *(CTetherVisual **)(v11 + v7 + 72);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v12 )
    {
      CTetherVisual::UpdatePosition(v12, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      v9 = 0;
      goto LABEL_6;
    }
    v13 = CreateTouchVisual<CTetherVisual>(v34, &v35);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CEu);
      v4 = v35;
      goto LABEL_43;
    }
    v4 = v35;
    v15 = CContactManager::AddToTouchNode(v14, v34, v35);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3CFu);
LABEL_43:
      if ( v4 )
        CBaseObject::Release(v4);
      goto LABEL_6;
    }
    v16 = CTetherVisual::Start(
            v4,
            (const struct tagPOINT *)((char *)a2 + 12),
            (const struct tagPOINT *)(v11 + *((_QWORD *)this + 7) + 8LL));
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3D0u);
      goto LABEL_43;
    }
    *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 72) = v4;
    v18 = *((_QWORD *)this + 7);
    v19 = *(CBaseObject **)(v11 + v18 + 80);
    if ( v19 )
    {
      CContactManager::StopAndRemoveFromRootNode(v17, *(struct CTouchVisual **)(v11 + v18 + 80));
      CBaseObject::Release(v19);
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 80) = 0LL;
      *(_BYTE *)(v11 + *((_QWORD *)this + 7) + 96) = 0;
      if ( *((_BYTE *)this + 324) || *(_DWORD *)(v11 + *((_QWORD *)this + 7) + 40) )
      {
        v20 = *((_QWORD *)this + 7);
        v21 = (CDirectTouchVisual **)(v11 + v20 + 48);
        if ( !*v21 && !*(_QWORD *)(v11 + v20 + 88) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(v34, v21);
          v9 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3E2u);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v23, v34, *(struct CVisual **)(v11 + *((_QWORD *)this + 7) + 48));
        }
        v24 = *((_QWORD *)this + 7);
        v25 = 4294967291LL;
        if ( !*((_BYTE *)this + 324) )
          v25 = *(unsigned int *)(v11 + v24 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v11 + v24 + 48), v11 + v24 + 8, v11 + v24 + 24, v25);
      }
    }
  }
  else
  {
    if ( !v12 )
    {
      v9 = -2147024809;
      goto LABEL_43;
    }
    v36 = *(_QWORD *)(104LL * v6 + v7 + 72);
    v26 = *((_DWORD *)this + 44);
    v27 = v26 + 1;
    if ( v26 + 1 >= v26 )
    {
      v28 = 0;
      if ( v27 > *((_DWORD *)this + 43) )
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v36);
        v28 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xC0u);
      }
      else
      {
        v29 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v29) = v12;
        *((_DWORD *)this + 44) = v27;
      }
    }
    else
    {
      v28 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v31 = *((_QWORD *)this + 7);
    if ( v28 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v29, *(struct CTouchVisual **)(v11 + v31 + 72));
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + v31 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v11 + *((_QWORD *)this + 7) + 72));
    }
    v32 = *(CBaseObject **)(v11 + *((_QWORD *)this + 7) + 72);
    v9 = 0;
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *(_QWORD *)(v11 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v9;
}
