/*
 * XREFs of ?SetDisplayScaleFactor@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005D160
 * Callers:
 *     ?PreRenderCamera@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x1800672D0 (-PreRenderCamera@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetDisplayScaleFactor(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 364) = a2;
}
