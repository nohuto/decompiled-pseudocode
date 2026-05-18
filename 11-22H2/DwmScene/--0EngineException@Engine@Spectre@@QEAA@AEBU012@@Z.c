/*
 * XREFs of ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C
 * Callers:
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180029E24 (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18003AEB0 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180047AAC (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18004AC54 (--0EngineNotImplException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0EngineUnexpectedException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18008A804 (--0EngineUnexpectedException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890 (--0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 */

Spectre::Engine::EngineException *__fastcall Spectre::Engine::EngineException::EngineException(
        Spectre::Engine::EngineException *this,
        const struct Spectre::Engine::EngineException *a2)
{
  Spectre::Utils::SpectreException::SpectreException(this, a2);
  *(_QWORD *)this = &Spectre::Engine::EngineException::`vftable';
  return this;
}
