/*
 * XREFs of ??1?$unique_ptr@VEngine@1Spectre@@U?$default_delete@VEngine@1Spectre@@@std@@@std@@QEAA@XZ @ 0x180010260
 * Callers:
 *     ??1SpectreRenderer@@EEAA@XZ @ 0x180017B24 (--1SpectreRenderer@@EEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VEngine@1Spectre@@@std@@QEBAXPEAVEngine@2Spectre@@@Z @ 0x180010280 (--R-$default_delete@VEngine@1Spectre@@@std@@QEBAXPEAVEngine@2Spectre@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::Engine>::~unique_ptr<Spectre::Engine::Engine>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Engine::Engine>::operator()();
  return result;
}
