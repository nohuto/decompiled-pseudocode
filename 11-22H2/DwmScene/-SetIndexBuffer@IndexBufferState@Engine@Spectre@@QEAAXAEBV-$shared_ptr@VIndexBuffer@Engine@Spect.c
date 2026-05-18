/*
 * XREFs of ?SetIndexBuffer@IndexBufferState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009EDF8
 * Callers:
 *     ?SetIndexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800396F0 (-SetIndexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIndexBuffer@Engine@Spectre@@@.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 *__fastcall Spectre::Engine::IndexBufferState::SetIndexBuffer(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax

  result = std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
