/*
 * XREFs of ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DED5C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEF90 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1800085F0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800EA080 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800EC6C8 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CStoryboard::_StopTrackingWindow(CStoryboard *this, struct CWindowData *a2)
{
  CStoryboard *v3; // rsi
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  CStoryboard *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  v3 = (CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v6 = v4;
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = 1;
    v10 = v3;
    CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___(a2, &v10, v5);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v7, (int)&CommitChannel_StopTrackingWindow, (__int64)a2);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                         + 24LL)
                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 24LL));
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x1567u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0xC0Du);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x1562u);
  }
  return v6;
}
