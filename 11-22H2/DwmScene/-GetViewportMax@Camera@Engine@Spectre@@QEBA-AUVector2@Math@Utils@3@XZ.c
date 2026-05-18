/*
 * XREFs of ?GetViewportMax@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BC10
 * Callers:
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::Camera::GetViewportMax(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 352);
  return result;
}
