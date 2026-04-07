/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AC744
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003FD24 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AA0A8 (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E2610 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E270C (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E2BB4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // r14
  unsigned int v5; // edi
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // rbx
  CTetherVisual *v10; // rcx
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  CContactManager *v15; // rcx
  __int64 v16; // rax
  CBaseObject *v17; // r14
  char v18; // cl
  __int64 v19; // rax
  CDirectTouchVisual **v20; // rdx
  int Touch; // eax
  CContactManager *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  CContactManager *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  CBaseObject *v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v33; // [rsp+90h] [rbp+50h] BYREF
  __int64 v34; // [rsp+98h] [rbp+58h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0;
  GetDesktopID(1LL, &v32);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(104LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 104LL * (unsigned int)v6, *(_DWORD *)(v7 + v9 + 4) != 1) )
  {
LABEL_5:
    v5 = -2147024809;
    goto LABEL_6;
  }
  if ( *((_DWORD *)a2 + 2) )
  {
    v10 = *(CTetherVisual **)(v7 + v9 + 72);
    if ( v10 )
    {
      CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      goto LABEL_6;
    }
    v11 = CreateTouchVisual<CTetherVisual>(v32, &v33);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3CAu);
      v4 = v33;
      goto LABEL_43;
    }
    v4 = v33;
    v13 = CContactManager::AddToTouchNode(v12, v32, v33);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CBu);
LABEL_43:
      if ( v4 )
        CBaseObject::Release(v4);
      goto LABEL_6;
    }
    v14 = CTetherVisual::Start(
            v4,
            (const struct tagPOINT *)((char *)a2 + 12),
            (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL));
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CCu);
      goto LABEL_43;
    }
    *(_QWORD *)(*((_QWORD *)this + 7) + v9 + 72) = v4;
    v16 = *((_QWORD *)this + 7);
    v17 = *(CBaseObject **)(v16 + v9 + 80);
    if ( v17 )
    {
      CContactManager::StopAndRemoveFromRootNode(v15, *(struct CTouchVisual **)(v16 + v9 + 80));
      CBaseObject::Release(v17);
      *(_QWORD *)(*((_QWORD *)this + 7) + v9 + 80) = 0LL;
      *(_BYTE *)(*((_QWORD *)this + 7) + v9 + 96) = 0;
      v18 = *((_BYTE *)this + 324);
      if ( v18 || *(_DWORD *)(*((_QWORD *)this + 7) + v9 + 40) )
      {
        v19 = *((_QWORD *)this + 7);
        v20 = (CDirectTouchVisual **)(v19 + v9 + 48);
        if ( !*v20 && !*(_QWORD *)(v19 + v9 + 88) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(v32, v20);
          v5 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3DEu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v22, v32, *(struct CVisual **)(*((_QWORD *)this + 7) + v9 + 48));
          v18 = *((_BYTE *)this + 324);
          v19 = *((_QWORD *)this + 7);
        }
        v23 = 4294967291LL;
        if ( !v18 )
          v23 = *(unsigned int *)(v19 + v9 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v19 + v9 + 48), v19 + v9 + 8, v19 + v9 + 24, v23);
      }
    }
  }
  else
  {
    v24 = *(_QWORD *)(v7 + v9 + 72);
    if ( !v24 )
    {
      v5 = -2147024809;
      goto LABEL_43;
    }
    v34 = v24;
    v25 = *((_DWORD *)this + 44);
    v26 = v25 + 1;
    if ( v25 + 1 >= v25 )
    {
      if ( v26 > *((_DWORD *)this + 43) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v34);
        LODWORD(v4) = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
      }
      else
      {
        v27 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v27) = v24;
        *((_DWORD *)this + 44) = v26;
      }
    }
    else
    {
      LODWORD(v4) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v29 = *((_QWORD *)this + 7);
    if ( (int)v4 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v27, *(struct CTouchVisual **)(v29 + v9 + 72));
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v29 + v9 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(*((_QWORD *)this + 7) + v9 + 72));
    }
    v30 = *(CBaseObject **)(*((_QWORD *)this + 7) + v9 + 72);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *(_QWORD *)(*((_QWORD *)this + 7) + v9 + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v5;
}
