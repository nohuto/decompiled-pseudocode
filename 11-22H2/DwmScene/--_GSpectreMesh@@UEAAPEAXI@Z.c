/*
 * XREFs of ??_GSpectreMesh@@UEAAPEAXI@Z @ 0x180018190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreSampler@@UEAA@XZ @ 0x180017AF8 (--1SpectreSampler@@UEAA@XZ.c)
 */

SpectreMesh *__fastcall SpectreMesh::`scalar deleting destructor'(SpectreMesh *this, char a2)
{
  SpectreSampler::~SpectreSampler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
