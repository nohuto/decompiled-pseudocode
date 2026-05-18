/*
 * XREFs of ??0EngineInvalidArgException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18003AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineInvalidArgException *__fastcall Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        Spectre::Engine::EngineInvalidArgException *this,
        const struct Spectre::Engine::EngineInvalidArgException *a2)
{
  Spectre::Engine::EngineException::EngineException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineInvalidArgException::`vftable';
  return this;
}
