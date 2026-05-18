/*
 * XREFs of ?EndCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x180026440
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ?Submit@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18003996C (-Submit@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z.c)
 */

char __fastcall Spectre::Engine::RenderDevice::EndCommandList(__int64 a1, _QWORD *a2)
{
  char result; // al
  __int64 v3; // r8
  _QWORD *v4; // r9

  result = std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(a2, (_QWORD *)(a1 + 272));
  if ( result )
    return Spectre::Engine::CommandList::Submit(*v4, v3);
  return result;
}
