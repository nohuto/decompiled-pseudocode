/*
 * XREFs of ??R?$default_delete@VEngine@1Spectre@@@std@@QEBAXPEAVEngine@2Spectre@@@Z @ 0x180010280
 * Callers:
 *     ??1?$unique_ptr@VEngine@1Spectre@@U?$default_delete@VEngine@1Spectre@@@std@@@std@@QEAA@XZ @ 0x180010260 (--1-$unique_ptr@VEngine@1Spectre@@U-$default_delete@VEngine@1Spectre@@@std@@@std@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Spectre::Engine::Engine>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
