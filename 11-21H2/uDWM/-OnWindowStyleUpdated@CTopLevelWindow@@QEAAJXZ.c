/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180023E74
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180020E24 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180023EE8 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowStyleUpdated(CTopLevelWindow *this)
{
  int v1; // eax
  __int64 v3; // rbx
  int updated; // eax
  unsigned int v5; // ebx

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) == 0 )
  {
    v3 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 22) = v1 | 0x8000;
    while ( v3 && (*(_BYTE *)(v3 + 88) & 1) == 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      v3 = *(_QWORD *)(v3 + 24);
    }
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x616u);
  return v5;
}
