/*
 * XREFs of ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180029E24
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineAccessDeniedException *__fastcall Spectre::Engine::EngineAccessDeniedException::EngineAccessDeniedException(
        Spectre::Engine::EngineAccessDeniedException *this,
        const struct Spectre::Engine::EngineAccessDeniedException *a2)
{
  Spectre::Engine::EngineException::EngineException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return this;
}
