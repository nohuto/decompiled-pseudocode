/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180020E24
 * Callers:
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x1800103E4 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18001BEAC (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800208E0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180023E74 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  unsigned int v2; // ebx
  CTopLevelWindow *v3; // rcx
  int v4; // eax
  CWindowIconic *v5; // rcx
  int v7; // eax

  v2 = 0;
  v3 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v3 && (v4 = CTopLevelWindow::OnWindowStyleUpdated(v3), v2 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x20E3u);
  }
  else
  {
    v5 = (CWindowIconic *)*((_QWORD *)this + 61);
    if ( v5 )
    {
      v7 = CWindowIconic::OnWindowStyleUpdated(v5, 1);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x20E8u);
    }
  }
  return v2;
}
