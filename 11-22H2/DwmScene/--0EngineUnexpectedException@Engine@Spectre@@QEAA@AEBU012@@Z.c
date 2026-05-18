/*
 * XREFs of ??0EngineUnexpectedException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18008A804
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineUnexpectedException *__fastcall Spectre::Engine::EngineUnexpectedException::EngineUnexpectedException(
        Spectre::Engine::EngineUnexpectedException *this,
        const struct Spectre::Engine::EngineUnexpectedException *a2)
{
  Spectre::Engine::EngineException::EngineException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return this;
}
