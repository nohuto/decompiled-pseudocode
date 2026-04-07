/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FCB0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BEC0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180035A94 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180055108 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  CWindowData *v5; // rsi
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  bool v8; // bp
  int ProxyFromShared; // eax
  __int64 v10; // rcx
  CTopLevelWindow *v11; // rcx
  CWindowData *v13; // rax
  CWindowData *v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-48h]
  HANDLE hObject; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+88h] [rbp+20h]

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  hObject = 0LL;
  v4 = 0;
  v5 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    if ( !v13 || (v14 = CWindowData::CWindowData(v13), (v5 = v14) == 0LL) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x884u, 0LL);
LABEL_29:
      v6 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x16CFu, 0LL);
      goto LABEL_10;
    }
    *((_QWORD *)v14 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v14);
    *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData(this, a2, v5);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x888u, 0LL);
      goto LABEL_29;
    }
  }
  v6 = v4;
  if ( v5 && *((_QWORD *)v5 + 4) )
  {
    v7 = (__int64 *)((char *)v5 + 424);
    v8 = *((_QWORD *)v5 + 53) != 0LL;
    ProxyFromShared = (*(__int64 (__fastcall **)(struct IDwmWindow *, HANDLE *))(*(_QWORD *)a2 + 328LL))(a2, &hObject);
    v6 = ProxyFromShared;
    if ( ProxyFromShared < 0 )
    {
      v15 = 5849;
    }
    else
    {
      v10 = *v7;
      if ( *v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
        *v7 = 0LL;
      }
      if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
        || (ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                hObject,
                                (char *)v5 + 424),
            v6 = ProxyFromShared,
            ProxyFromShared >= 0) )
      {
        v11 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
        if ( v11 && (ProxyFromShared = CTopLevelWindow::OnClipUpdated(v11), v6 = ProxyFromShared, ProxyFromShared < 0) )
        {
          v15 = 5860;
        }
        else
        {
          if ( v8 == (*v7 != 0) )
            goto LABEL_10;
          ProxyFromShared = CWindowData::NotifyRepresentationChanged(v5);
          v6 = ProxyFromShared;
          if ( ProxyFromShared >= 0 )
            goto LABEL_10;
          v15 = 5868;
        }
      }
      else
      {
        v15 = 5853;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFromShared, v15, 0LL);
  }
LABEL_10:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
