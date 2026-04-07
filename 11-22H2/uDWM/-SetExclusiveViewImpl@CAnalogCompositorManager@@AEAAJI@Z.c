/*
 * XREFs of ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800A6188
 * Callers:
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A612C (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A5160 (-EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveViewImpl(CAnalogCompositorManager *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAnalogCompositorManager::EnsureExclusiveMode(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                      + 32LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x85u);
  }
  return v5;
}
