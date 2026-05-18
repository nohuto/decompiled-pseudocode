/*
 * XREFs of ?GetViewportMode@Camera@Engine@Spectre@@QEBA?AW4EViewportMode@123@XZ @ 0x18005BC40
 * Callers:
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Camera::GetViewportMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 360);
}
