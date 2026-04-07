/*
 * XREFs of ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180102EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x1800B2188 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2884 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B2904 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B2F78 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B3188 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E5820 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopThumbnailChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  CDesktopThumbnailCVIVisual *v10; // rdi
  int SyncedWindowData; // eax
  struct CWindowData *v12; // rsi
  CTopLevelWindow *v13; // r12
  int DesktopThumbnail; // eax
  CBaseObject *v15; // r14
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  CBaseObject *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  CBaseObject *v25; // [rsp+30h] [rbp-48h] BYREF
  CDesktopThumbnailCVIVisual *v26; // [rsp+38h] [rbp-40h] BYREF
  CBaseObject *v27; // [rsp+40h] [rbp-38h] BYREF
  struct CWindowData *v28; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT *v29; // [rsp+50h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+58h] [rbp-20h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-18h] BYREF

  v29 = a3;
  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v25 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v28);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x147Cu);
    goto LABEL_35;
  }
  v12 = v28;
  if ( !v28 )
    goto LABEL_35;
  v13 = (CTopLevelWindow *)*((_QWORD *)v28 + 55);
  if ( !v13 || *((_DWORD *)v28 + 33) == 1 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1486u);
    goto LABEL_35;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v25);
  v9 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0x148Au);
LABEL_27:
    v15 = v25;
    goto LABEL_28;
  }
  v15 = v25;
  *((_QWORD *)v25 + 35) = *((_QWORD *)v12 + 17);
  updated = CDesktopThumbnailBase::UpdateWindowClones(v15);
  v9 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x148Bu);
    goto LABEL_28;
  }
  v31 = *a4;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v15, &v31, &v27);
  v9 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v18 = *((_QWORD *)v12 + 80);
    v19 = a6 & 0x200000;
    if ( v18 )
    {
      if ( v19 )
      {
        VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v18 + 24) + 32LL), (struct CVisual *)v18);
        v20 = (CBaseObject *)*((_QWORD *)v12 + 80);
        if ( v20 )
        {
          CBaseObject::Release(v20);
          *((_QWORD *)v12 + 80) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v18 + 348) = a6;
        CDesktopThumbnailCVIVisual::Update(*((CDesktopThumbnailCVIVisual **)v12 + 80), v29, (double)a5 / 255.0);
      }
      goto LABEL_28;
    }
    if ( !v19 )
    {
      v21 = CDesktopThumbnailCVIVisual::Create(&v26);
      v9 = v21;
      if ( v21 >= 0 )
      {
        v10 = v26;
        *((_QWORD *)v26 + 40) = v12;
        *((_DWORD *)v10 + 87) = a6;
        *((_BYTE *)v10 + 345) = 0;
        v22 = CDesktopThumbnailCVIVisual::SetVisual(v10, v27, a4);
        v9 = v22;
        if ( v22 >= 0 )
        {
          CDesktopThumbnailCVIVisual::Update(v10, v29, (double)a5 / 255.0);
          v23 = CTopLevelWindow::OnThumbnailAdded(v13, v10);
          v9 = v23;
          if ( v23 >= 0 )
          {
            *((_QWORD *)v12 + 80) = v10;
            _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
            v10 = v26;
            goto LABEL_27;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x14ACu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x14A9u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x14A3u);
        v10 = v26;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0x148Cu);
  }
LABEL_28:
  if ( v15 )
    CBaseObject::Release(v15);
  if ( v27 )
    CBaseObject::Release(v27);
  if ( v10 )
    CBaseObject::Release(v10);
LABEL_35:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v9;
}
