/*
 * XREFs of ??1SpectreException@Utils@Spectre@@UEAA@XZ @ 0x180017A80
 * Callers:
 *     ??_EEngineException@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800180D0 (--_EEngineException@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1SpectreInvalidArgException@Utils@Spectre@@UEAA@XZ @ 0x18001E4F4 (--1SpectreInvalidArgException@Utils@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall Spectre::Utils::SpectreException::~SpectreException(Spectre::Utils::SpectreException *this)
{
  std::string::_Tidy_deallocate((__int64)this + 16);
  *(_QWORD *)this = &stdext::exception::`vftable';
}
