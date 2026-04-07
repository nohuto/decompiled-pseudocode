/*
 * XREFs of ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180015BCC
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180030A20 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18010E138 (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  CTopLevelWindow *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 106)
    && *((_QWORD *)this + 94)
    && (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5
     || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer()) )
  {
    v4 = this;
    v5 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
    if ( v5 )
      v4 = *(CTopLevelWindow **)(v5 + 24);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 107) + 8LL))(
           *((_QWORD *)this + 107),
           *((_QWORD *)v4 + 2));
    v1 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 24LL)
                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 24LL));
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1847u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1846u, 0LL);
    }
  }
  return v1;
}
