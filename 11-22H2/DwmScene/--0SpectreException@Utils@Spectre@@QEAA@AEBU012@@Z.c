/*
 * XREFs of ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890
 * Callers:
 *     ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x18001E37C (--0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x18002547C (--0EngineException@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0CancelledException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x1800DFDE0 (--0CancelledException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 *     ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBU012@@Z @ 0x1800E1A54 (--0GeometryProcessingException@Framework@Spectre@@QEAA@AEBU012@@Z.c)
 *     _Spectre::Engine::ShaderPropertyBlock::ExtendLayoutWithProperty_::_1_::catch$0 @ 0x1800EA40B (_Spectre--Engine--ShaderPropertyBlock--ExtendLayoutWithProperty_--_1_--catch$0.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Utils::SpectreException *__fastcall Spectre::Utils::SpectreException::SpectreException(
        Spectre::Utils::SpectreException *this,
        const struct Spectre::Utils::SpectreException *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &Spectre::Utils::SpectreException::`vftable';
  std::string::string((_QWORD *)this + 2, (__int64)a2 + 16);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  return this;
}
