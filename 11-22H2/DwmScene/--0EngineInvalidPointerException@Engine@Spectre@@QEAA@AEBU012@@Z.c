/*
 * XREFs of ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180047AAC
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineInvalidPointerException *__fastcall Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
        Spectre::Engine::EngineInvalidPointerException *this,
        const struct Spectre::Engine::EngineInvalidPointerException *a2)
{
  Spectre::Engine::EngineException::EngineException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  return this;
}
