/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107060
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001D140 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x1800395E0 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180039CEC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // ebx
  CVisual *v5; // rcx
  int v6; // eax
  int v7; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 673LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 673LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 673LL)) & 0x40;
  v5 = (CVisual *)*((_QWORD *)this + 11);
  v6 = *((_DWORD *)v5 + 22);
  if ( (v6 & 0x100000) == 0 )
  {
    *((_DWORD *)v5 + 22) = v6 | 0x100000;
    CVisual::PropagateDirtyChildren(v5);
  }
  if ( a2 )
  {
    v7 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x204u);
  }
  return v4;
}
