/*
 * XREFs of ?GetOutputMode@Camera@Engine@Spectre@@QEBA?AW4OutputMode@123@XZ @ 0x18005BA98
 * Callers:
 *     ?ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x180059F50 (-ApplyOutputState@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@s.c)
 *     ?RenderCamera@Camera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BE8C (-RenderCamera@Camera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Camera::GetOutputMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 128);
}
