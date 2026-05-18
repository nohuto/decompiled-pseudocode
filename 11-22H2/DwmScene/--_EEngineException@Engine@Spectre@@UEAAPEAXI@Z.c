/*
 * XREFs of ??_EEngineException@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800180D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreException@Utils@Spectre@@UEAA@XZ @ 0x180017A80 (--1SpectreException@Utils@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::EngineException *__fastcall Spectre::Engine::EngineException::`vector deleting destructor'(
        Spectre::Engine::EngineException *this,
        char a2)
{
  Spectre::Utils::SpectreException::~SpectreException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
