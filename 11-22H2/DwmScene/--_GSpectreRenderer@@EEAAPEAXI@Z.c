/*
 * XREFs of ??_GSpectreRenderer@@EEAAPEAXI@Z @ 0x180010300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreRenderer@@EEAA@XZ @ 0x180017B24 (--1SpectreRenderer@@EEAA@XZ.c)
 */

SpectreRenderer *__fastcall SpectreRenderer::`scalar deleting destructor'(SpectreRenderer *this, char a2)
{
  SpectreRenderer::~SpectreRenderer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
