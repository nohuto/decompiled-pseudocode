/*
 * XREFs of ??0EngineNotImplException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18004AC54
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineNotImplException *__fastcall Spectre::Engine::EngineNotImplException::EngineNotImplException(
        Spectre::Engine::EngineNotImplException *this,
        const struct Spectre::Engine::EngineNotImplException *a2)
{
  Spectre::Engine::EngineException::EngineException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineNotImplException::`vftable';
  return this;
}
