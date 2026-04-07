/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D3210
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180046348 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800D01E0 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800D028C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800D10C0 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800D11C8 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800D43C4 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800D442C (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800D44B4 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800D4C90 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800D4D6C (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D594C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D5C70 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  __int64 v5; // rcx
  int inserted; // esi
  unsigned int i; // edx
  __int64 v8; // rax
  __int64 v9; // r15
  const struct _LUID *v10; // r13
  __int64 v11; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  __int64 v13; // r8
  int v14; // eax
  _QWORD *v15; // r15
  int v16; // eax
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v20; // r13
  struct CVisual *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-59h]
  char v26; // [rsp+30h] [rbp-49h]
  int v27; // [rsp+34h] [rbp-45h]
  unsigned __int64 v28; // [rsp+38h] [rbp-41h] BYREF
  __int64 v29; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v31; // [rsp+50h] [rbp-29h] BYREF
  struct CProjectionBorderVisual *v32[2]; // [rsp+58h] [rbp-21h]
  struct _LUID v33; // [rsp+68h] [rbp-11h]
  int v34; // [rsp+70h] [rbp-9h]
  unsigned __int64 v35; // [rsp+78h] [rbp-1h]
  char v36; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  inserted = 0;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v5 = 56LL * i;
    *(_BYTE *)(v5 + *((_QWORD *)this + 50) + 48) = 0;
  }
  v8 = 0LL;
  v27 = 0;
  if ( !*(_DWORD *)a2 )
  {
LABEL_32:
    CProjectionBorderManager::_RemoveInactiveVisuals(this);
    CProjectionBorderManager::_UpdateFilteredVisualList(this);
    goto LABEL_33;
  }
  while ( 1 )
  {
    v9 = 3 * v8;
    rc1 = 0LL;
    v10 = (const struct _LUID *)((char *)a2 + 24 * v8);
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(
                (CProjectionBorderManager *)v5,
                v10 + 2,
                v10[3].LowPart,
                &rc1) >= 0 )
      break;
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v11);
LABEL_31:
    v8 = (unsigned int)(v27 + 1);
    v27 = v8;
    if ( (unsigned int)v8 >= *(_DWORD *)a2 )
      goto LABEL_32;
  }
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                this,
                                v10 + 2,
                                *((_DWORD *)a2 + 2 * v9 + 6));
  if ( ProjectionVisualByAdapter == -1 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
  if ( !(unsigned int)GetDesktopID(1LL, &v28, v13) )
    goto LABEL_31;
  v26 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    v33 = 0LL;
    v31 = 0LL;
    v36 = 1;
    *(RECT *)v32 = rc1;
    v33 = v10[2];
    v34 = *((_DWORD *)a2 + 2 * v9 + 6);
    v35 = v28;
    v14 = CProjectionBorderVisual::Create(&v31);
    inserted = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x86u);
      goto LABEL_33;
    }
    *((_DWORD *)v31 + 77) = 1;
    v15 = (_QWORD *)((char *)this + 400);
    v16 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)this + 400, (__int64)&v31);
    inserted = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x89u);
      goto LABEL_33;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v26 = 1;
  }
  else
  {
    v15 = (_QWORD *)((char *)this + 400);
    v29 = ProjectionVisualByAdapter;
    v17 = 56LL * ProjectionVisualByAdapter;
    *(_BYTE *)(*((_QWORD *)this + 50) + v17 + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v17 + *((_QWORD *)this + 50) + 8LL)) )
    {
      *(RECT *)(*v15 + v17 + 8) = rc1;
      v26 = 1;
    }
    v18 = v28;
    if ( v28 == *(_QWORD *)(*v15 + v17 + 40) )
    {
      v20 = v29;
LABEL_28:
      if ( v26 )
      {
        CSolidRectangleVisual::UpdateRect(
          *(CSolidRectangleVisual **)(56 * v20 + *v15),
          (const struct tagRECT *)(56 * v20 + *v15 + 8LL));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(56 * v20 + *v15) + 112LL))(*(_QWORD *)(56 * v20 + *v15));
        v24 = *(_QWORD *)(*(_QWORD *)(56 * v20 + *v15) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v18);
      goto LABEL_31;
    }
    *(_QWORD *)(*v15 + v17 + 40) = v28;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                  v28,
                                  1);
  if ( OverlayRootVisualForDesktop
    || (OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                        v28)) != 0LL )
  {
    v20 = ProjectionVisualByAdapter;
    v29 = 56LL * ProjectionVisualByAdapter;
    v21 = *(struct CVisual **)(v29 + *v15);
    v22 = *((_QWORD *)v21 + 3);
    if ( v22 )
      VisualCollection::Remove((VisualCollection *)(v22 + 32), v21);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 *(_QWORD *)(v29 + *v15),
                 0LL,
                 0,
                 v25);
    if ( inserted < 0 )
    {
      v23 = 179;
      goto LABEL_25;
    }
    goto LABEL_28;
  }
  inserted = -2147024882;
  v23 = 171;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v23);
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_33:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return (unsigned int)inserted;
}
