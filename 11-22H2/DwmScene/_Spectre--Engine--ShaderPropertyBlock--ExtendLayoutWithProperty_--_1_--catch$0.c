/*
 * XREFs of _Spectre::Engine::ShaderPropertyBlock::ExtendLayoutWithProperty_::_1_::catch$0 @ 0x1800EA40B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z @ 0x180017890 (--0SpectreException@Utils@Spectre@@QEAA@AEBU012@@Z.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall __noreturn Spectre::Engine::ShaderPropertyBlock::ExtendLayoutWithProperty_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(*(Spectre::Engine::ShaderPropertyLayout **)(*(_QWORD *)(a2 + 32)
                                                                                                  + 16LL));
  Spectre::Utils::SpectreException::SpectreException(
    (Spectre::Utils::SpectreException *)(a2 + 48),
    *(const struct Spectre::Utils::SpectreException **)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
