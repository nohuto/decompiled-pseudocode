/*
 * XREFs of ??_GSpectreWorld@@UEAAPEAXI@Z @ 0x1800181D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreWorld@@UEAA@XZ @ 0x180017C00 (--1SpectreWorld@@UEAA@XZ.c)
 */

SpectreWorld *__fastcall SpectreWorld::`scalar deleting destructor'(SpectreWorld *this, char a2)
{
  SpectreWorld::~SpectreWorld(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
