/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800DF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800DF500 (--1SpectrumListener@@UEAA@XZ.c)
 */

SpectrumListener *__fastcall SpectrumListener::`scalar deleting destructor'(SpectrumListener *this, char a2)
{
  SpectrumListener::~SpectrumListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
