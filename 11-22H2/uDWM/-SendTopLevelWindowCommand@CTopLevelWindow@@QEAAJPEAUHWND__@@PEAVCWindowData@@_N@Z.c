/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18003713C
 * Callers:
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036BA4 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800AE72C (--$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemo.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2, struct CWindowData *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  __int64 v18; // rbx
  int ProxyFromShared; // eax
  int v20; // eax
  HANDLE hObject; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  hObject = 0LL;
  if ( a2
    && (v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v8 = *(_QWORD *)(v7 + 16),
        v9 = *(unsigned int *)(v7 + 24),
        LOBYTE(v7) = 1,
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, HWND, __int64))(*(_QWORD *)v8 + 416LL))(v8, v9, a2, v7),
        v3 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x20Du, 0LL);
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 2 )
  {
    v12 = (_QWORD *)((char *)this + 848);
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 6)
                                                                          + 32LL)
                                                            + 216LL))(
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
            &GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b,
            (char *)this + 848);
    v3 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 48LL))(*v12, *((_QWORD *)a3 + 5));
      v3 = v14;
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 32LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 6)
                                                                   + 32LL));
        v3 = v15;
        if ( v15 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 6)
                                                                                  + 32LL)
                                                                    + 224LL))(
                  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
                  *v12,
                  &hObject);
          v3 = v16;
          if ( v16 >= 0 )
          {
            v17 = (CBaseObject *)*((_QWORD *)this + 107);
            v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
            *((_QWORD *)this + 107) = 0LL;
            if ( v17 )
              CBaseObject::Release(v17);
            ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CRemoteAppRenderTargetProxy>(
                                v18,
                                hObject,
                                (char *)this + 856);
            v3 = ProxyFromShared;
            if ( ProxyFromShared >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 107) + 8LL))(
                      *((_QWORD *)this + 107),
                      *((_QWORD *)this + 2));
              v3 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x222u, 0LL);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFromShared, 0x221u, 0LL);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x21Fu, 0LL);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x21Au, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x219u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x217u, 0LL);
    }
  }
  if ( hObject )
    CloseHandle(hObject);
  return v3;
}
