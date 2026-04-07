/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022FD0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18000D224 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180011764 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CBaseObject **v7; // rsi
  bool v8; // bp
  int v9; // eax
  CAccent **v10; // rcx
  int ProxyFromShared; // eax
  int v13; // eax
  int v14; // eax
  HANDLE hObject; // [rsp+80h] [rbp+18h] BYREF
  CWindowData *v16; // [rsp+88h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  hObject = 0LL;
  v16 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v16);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x166Eu);
  }
  else
  {
    v6 = v16;
    if ( v16 && *((_QWORD *)v16 + 4) )
    {
      v7 = (CBaseObject **)((char *)v16 + 424);
      v8 = *((_QWORD *)v16 + 53) != 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *, HANDLE *))(*(_QWORD *)a2 + 328LL))(a2, &hObject);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1678u);
      }
      else
      {
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
          || (ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(
                                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                  (__int64)hObject,
                                  (CBaseObject **)v6 + 53),
              v5 = ProxyFromShared,
              ProxyFromShared >= 0) )
        {
          v10 = (CAccent **)*((_QWORD *)v6 + 55);
          if ( v10 && (v14 = CTopLevelWindow::OnClipUpdated(v10), v5 = v14, v14 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1683u);
          }
          else if ( v8 != (*v7 != 0LL) )
          {
            v13 = CWindowData::NotifyRepresentationChanged(v6);
            v5 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x168Bu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x167Cu);
        }
      }
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
