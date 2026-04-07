/*
 * XREFs of ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A612C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800A6188 (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveView(unsigned int a1)
{
  unsigned int v2; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v4; // eax

  v2 = 0;
  Instance = CAnalogCompositorManager::GetInstance();
  if ( Instance )
  {
    v4 = CAnalogCompositorManager::SetExclusiveViewImpl(Instance, a1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xADu);
  }
  return v2;
}
