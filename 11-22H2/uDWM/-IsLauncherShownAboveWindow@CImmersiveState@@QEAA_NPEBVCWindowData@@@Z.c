/*
 * XREFs of ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800C4AE0
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000EED4 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DD90C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFB00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180016214 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall CImmersiveState::IsLauncherShownAboveWindow(CImmersiveState *this, const struct tagRECT *a2)
{
  unsigned int top; // r9d
  char v3; // r8
  int v4; // eax

  top = a2[8].top;
  v3 = 0;
  if ( top - 8 <= 3 || top <= 0xC && (v4 = 4130, _bittest(&v4, top)) )
  {
    if ( *((_BYTE *)this + 56) && ContainsRect((const struct tagRECT *)((char *)this + 72), a2 + 3) )
      return 1;
  }
  return v3;
}
