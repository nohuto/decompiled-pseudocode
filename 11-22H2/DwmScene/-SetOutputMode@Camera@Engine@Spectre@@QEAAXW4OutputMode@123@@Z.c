/*
 * XREFs of ?SetOutputMode@Camera@Engine@Spectre@@QEAAXW4OutputMode@123@@Z @ 0x18005D2EC
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetOutputMode(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 128) = a2;
}
