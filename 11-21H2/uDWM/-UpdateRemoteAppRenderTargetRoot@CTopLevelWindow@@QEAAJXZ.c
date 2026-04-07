/*
 * XREFs of ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18001103C
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180107AFC (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  CTopLevelWindow *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 109)
    && *((_QWORD *)this + 94)
    && (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5
     || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer()) )
  {
    v4 = this;
    v5 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
    if ( v5 )
      v4 = *(CTopLevelWindow **)(v5 + 24);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 110) + 8LL))(
           *((_QWORD *)this + 110),
           *((_QWORD *)v4 + 2));
    v1 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                           + 16LL)
                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5)
                                                                + 16LL));
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1866u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1865u);
    }
  }
  return v1;
}
