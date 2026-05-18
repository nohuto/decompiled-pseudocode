/*
 * XREFs of ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C
 * Callers:
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z @ 0x18001AFFC (-SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z.c)
 *     ?NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005BE28 (-NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetAspectRatioInternal@Camera@Engine@Spectre@@IEBAXM@Z @ 0x18005CFD0 (-SetAspectRatioInternal@Camera@Engine@Spectre@@IEBAXM@Z.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D18C (-SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D1BC (-SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D268 (-SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetOrthographicSize@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D2BC (-SetOrthographicSize@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z @ 0x18005D4E4 (-SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetMatrixStagesChanged(Spectre::Engine::Camera *this, int a2)
{
  *((_DWORD *)this + 136) |= a2;
  if ( (a2 & 4) != 0 )
    *((_BYTE *)this + 1612) = 1;
}
