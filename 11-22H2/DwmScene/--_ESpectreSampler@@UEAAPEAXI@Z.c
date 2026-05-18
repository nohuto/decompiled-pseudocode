/*
 * XREFs of ??_ESpectreSampler@@UEAAPEAXI@Z @ 0x180018150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectreSampler@@UEAA@XZ @ 0x180017AF8 (--1SpectreSampler@@UEAA@XZ.c)
 */

SpectreSampler *__fastcall SpectreSampler::`vector deleting destructor'(SpectreSampler *this, char a2)
{
  SpectreSampler::~SpectreSampler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
