/*
 * XREFs of ??1?$_Temporary_owner@VScene@Engine@Spectre@@@std@@QEAA@XZ @ 0x18003FE30
 * Callers:
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine@Spectre@@@Z @ 0x18003EED4 (--$-0VScene@Engine@Spectre@@$0A@@-$shared_ptr@VScene@Engine@Spectre@@@std@@QEAA@PEAVScene@Engine.c)
 * Callees:
 *     ??_GScene@Engine@Spectre@@QEAAPEAXI@Z @ 0x180040204 (--_GScene@Engine@Spectre@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<Spectre::Engine::Scene>::~_Temporary_owner<Spectre::Engine::Scene>(
        Spectre::Engine::Scene **a1,
        unsigned int a2)
{
  Spectre::Engine::Scene *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Spectre::Engine::Scene::`scalar deleting destructor'(v2, a2);
  return result;
}
