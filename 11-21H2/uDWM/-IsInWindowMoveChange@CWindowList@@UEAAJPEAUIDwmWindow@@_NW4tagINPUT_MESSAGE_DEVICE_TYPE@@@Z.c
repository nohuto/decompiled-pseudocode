/*
 * XREFs of ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180104C10 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E56CC (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800E6B60 (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x1801034A8 (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA?AW4Variant_Wmasfot@@W4VariantReportingKind@3@_N@Z @ 0x18010720C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAA-AW4V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsInWindowMoveChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a4)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // r15
  char *v11; // rdi
  __int64 v12; // rcx
  int SyncedWindowData; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r9
  char v17; // cl
  unsigned __int64 v18; // rcx
  CTopLevelWindow3D *v19; // rcx
  __int64 v20; // rax
  unsigned int **v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+58h] [rbp+10h] BYREF

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = v8;
  if ( v8 && (*(_BYTE *)(v8 + 670) & 0xA) != 0 )
    a3 = 0;
  if ( ((a4 - 4) & 0xFFFFFFFB) != 0
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::__private_GetVariant(`wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl) != 1
    || !a3 && (!v9 || (*(_BYTE *)(v9 + 669) & 0x10) == 0) )
  {
    goto LABEL_40;
  }
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (v10 = 1, (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u)) )
  {
    v10 = 0;
  }
  v11 = (char *)this + 704;
  v12 = *((_QWORD *)this + 88);
  if ( v12 )
    goto LABEL_44;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, (struct CWindowData **)this + 88);
  v14 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v15 = 3100LL;
LABEL_38:
    v16 = (unsigned int)SyncedWindowData;
    goto LABEL_39;
  }
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 )
  {
LABEL_44:
    if ( ((*(_BYTE *)(v12 + 669) & 0x10) != 0) != a3 || !v9 )
    {
      *(_BYTE *)(v12 + 669) = (16 * a3) | *(_BYTE *)(v12 + 669) & 0xEF;
      (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 88LL))(a2, *(_QWORD *)v11 + 216LL);
      v17 = *(_BYTE *)(*(_QWORD *)v11 + 669LL);
      if ( (v17 & 0x40) == 0 )
      {
        if ( (v17 & 0x10) != 0 )
        {
          SyncedWindowData = CWindowList::EnsureAcrylicSheet(this);
          v14 = SyncedWindowData;
          if ( SyncedWindowData < 0 )
          {
            v15 = 3120LL;
            goto LABEL_38;
          }
        }
        if ( v10 )
        {
          v18 = *((_QWORD *)this + 70);
          if ( (*(_BYTE *)(*(_QWORD *)v11 + 669LL) & 0x10) != 0 )
          {
            SyncedWindowData = CAcrylicSheet::StartAnimationShowOrHide(v18, 0);
            v14 = SyncedWindowData;
            if ( SyncedWindowData < 0 )
            {
              v15 = 3127LL;
              goto LABEL_38;
            }
          }
          else
          {
            SyncedWindowData = CAcrylicSheet::StartAnimationShowOrHide(v18, 1);
            v14 = SyncedWindowData;
            if ( SyncedWindowData < 0 )
            {
              v15 = 3132LL;
              goto LABEL_38;
            }
          }
        }
        v19 = *(CTopLevelWindow3D **)(*(_QWORD *)v11 + 448LL);
        v20 = *(_QWORD *)v11;
        if ( v19 && v10 )
        {
          SyncedWindowData = CTopLevelWindow3D::OnIsInWindowMoveUpdated(
                               v19,
                               (*(_BYTE *)(*(_QWORD *)v11 + 669LL) & 0x10) != 0);
          v14 = SyncedWindowData;
          if ( SyncedWindowData < 0 )
          {
            v15 = 3138LL;
            goto LABEL_38;
          }
          v20 = *(_QWORD *)v11;
        }
        v21 = *(unsigned int ***)(v20 + 440);
        if ( v21 )
          CTopLevelWindow::OnIsInWindowMove(
            v21,
            (*(_BYTE *)(v20 + 669) & 0x10) != 0,
            (const struct tagRECT *)(v20 + 48));
      }
    }
    SyncedWindowData = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
    v14 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v15 = 3148LL;
      goto LABEL_38;
    }
LABEL_40:
    v14 = 0;
    goto LABEL_41;
  }
  v14 = -2147024882;
  v16 = 2147942414LL;
  v15 = 3101LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v16);
LABEL_41:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v14;
}
