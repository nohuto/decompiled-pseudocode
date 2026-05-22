/*
 * XREFs of ??_GCPresentationSurface@@MEAAPEAXI@Z @ 0x1801AFDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 */

CPresentationSurface *__fastcall CPresentationSurface::`scalar deleting destructor'(
        CPresentationSurface *this,
        char a2)
{
  CPresentationSurface::~CPresentationSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
