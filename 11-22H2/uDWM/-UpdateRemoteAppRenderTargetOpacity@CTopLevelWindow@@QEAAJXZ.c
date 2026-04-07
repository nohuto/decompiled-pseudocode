/*
 * XREFs of ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180030280
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001D140 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180035D18 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180055108 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax

  v1 = *((_QWORD *)this + 106);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 94);
    if ( v4 )
    {
      v5 = 3LL;
      if ( *(_QWORD *)(v4 + 424) || (*(_BYTE *)(v4 + 673) & 0x40) == 0 || (*(_DWORD *)(v4 + 120) & 0x200000) != 0 )
        v5 = 1LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 106), v5);
      v2 = v6;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 32LL));
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x182Du, 0LL);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x182Cu, 0LL);
      }
    }
  }
  return v2;
}
