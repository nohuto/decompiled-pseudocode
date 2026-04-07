/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180106CF0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000AF74 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180018FF0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1801035A0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // rsi
  __int64 v9; // r15
  _QWORD *ViewBase; // r13
  _QWORD *v11; // r14
  HWND v12; // rbx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  _QWORD *v18; // r14
  unsigned int i; // r15d
  HWND v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r9d
  unsigned int v24; // eax
  int v25; // r9d
  int v26; // eax
  CDesktopThumbnailBase *v27; // rcx
  int v28; // r9d
  unsigned int v29; // eax
  CVisual *v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-59h]
  struct CWindowData *v33; // [rsp+30h] [rbp-49h] BYREF
  struct CWindowData *v34; // [rsp+38h] [rbp-41h] BYREF
  CWindowList *v35; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+48h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v37; // [rsp+50h] [rbp-29h] BYREF

  v35 = this;
  v36 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v37, 0, sizeof(v37));
  v9 = 0LL;
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 28) != 2 )
  {
    v32 = 4752;
    goto LABEL_51;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v32 = 4757;
LABEL_51:
    v25 = -2147024809;
    v14 = -2147024809;
    goto LABEL_52;
  }
  ViewBase = a4->ViewBase;
  v11 = (_QWORD *)((char *)ThumbnailData + 128);
  *((_DWORD *)ThumbnailData + 38) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 128, 8u);
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_19:
    v18 = (_QWORD *)((char *)ThumbnailData + 160);
    *((_DWORD *)ThumbnailData + 46) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 160, 8u);
    for ( i = 0; i < *((_DWORD *)a3 + 4); ++i )
    {
      v20 = (HWND)ViewBase[i + *((_DWORD *)a3 + 3)];
      if ( (unsigned int)DwmValidateWindow(v20, a2) )
      {
        SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v35, v20, &v34);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v32 = 4785;
          goto LABEL_31;
        }
        if ( v34 )
        {
          v21 = *((_DWORD *)ThumbnailData + 46);
          v22 = v21 + 1;
          if ( v21 + 1 < v21 )
          {
            v28 = -2147024362;
            v14 = -2147024362;
            v29 = 181;
            goto LABEL_40;
          }
          if ( v22 > *((_DWORD *)ThumbnailData + 45) )
          {
            v33 = (struct CWindowData *)&v34;
            v26 = DynArrayImpl<0>::Grow((char **)ThumbnailData + 20, 8u, 1, 0, (unsigned __int64 *)&v33);
            v14 = v26;
            if ( v26 < 0 )
            {
              v28 = v26;
              v29 = 192;
LABEL_40:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v29);
              v32 = 4788;
              goto LABEL_29;
            }
            *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 46))++) + *v18) = *(_QWORD *)v33;
          }
          else
          {
            *(_QWORD *)(*v18 + 8LL * v21) = v34;
            *((_DWORD *)ThumbnailData + 46) = v22;
          }
        }
      }
    }
    *((_BYTE *)ThumbnailData + 192) = *((_BYTE *)a3 + 52) & 1;
    *((_BYTE *)ThumbnailData + 193) = (*((_DWORD *)a3 + 13) & 2) != 0;
    v27 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 15);
    if ( v27 )
    {
      SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v27);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v32 = 4800;
        goto LABEL_31;
      }
    }
    v37.dwFlags = 3;
    v37.rcSource = *(RECT *)((char *)a3 + 20);
    v37.rcDestination.left = 0;
    v37.rcDestination.top = 0;
    v37.rcDestination.right = (int)*(double *)((char *)a3 + 36);
    v37.rcDestination.bottom = (int)*(double *)((char *)a3 + 44);
    SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v37);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd >= 0 )
    {
      SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
      {
        SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                   (VisualCollection *)(*((_QWORD *)ThumbnailData + 12) + 32LL),
                                   *((struct CVisual **)ThumbnailData + 13),
                                   0LL,
                                   0,
                                   1);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          v30 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 440LL);
          if ( v30 )
            CVisual::SetDirtyFlags(v30, 0x8000000);
          goto LABEL_53;
        }
        v32 = 4810;
      }
      else
      {
        v32 = 4809;
      }
    }
    else
    {
      v32 = 4808;
    }
LABEL_31:
    v25 = SyncedWindowDataByHwnd;
    goto LABEL_52;
  }
  while ( 1 )
  {
    v12 = (HWND)ViewBase[v9];
    if ( !(unsigned int)DwmValidateWindow(v12, a2) )
      goto LABEL_18;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v35, v12, &v33);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v32 = 4770;
      goto LABEL_31;
    }
    if ( !v33 )
      goto LABEL_18;
    v15 = *((_DWORD *)ThumbnailData + 38);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
      break;
    if ( v16 > *((_DWORD *)ThumbnailData + 37) )
    {
      v34 = (struct CWindowData *)&v33;
      v17 = DynArrayImpl<0>::Grow((char **)ThumbnailData + 16, 8u, 1, 0, (unsigned __int64 *)&v34);
      v14 = v17;
      if ( v17 < 0 )
      {
        v23 = v17;
        v24 = 192;
        goto LABEL_28;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)ThumbnailData + 38))++) + *v11) = *(_QWORD *)v34;
    }
    else
    {
      *(_QWORD *)(*v11 + 8LL * v15) = v33;
      *((_DWORD *)ThumbnailData + 38) = v16;
    }
LABEL_18:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)a3 + 3) )
      goto LABEL_19;
  }
  v23 = -2147024362;
  v14 = -2147024362;
  v24 = 181;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, v24);
  v32 = 4773;
LABEL_29:
  v25 = v14;
LABEL_52:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, v32);
LABEL_53:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return v14;
}
