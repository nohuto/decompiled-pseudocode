/*
 * XREFs of ??_ECDelegatedInkTrailImpl@DirectComposition@@UEAAPEAXI@Z @ 0x1800E6600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ @ 0x1800E657C (--1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CDelegatedInkTrailImpl *__fastcall DirectComposition::CDelegatedInkTrailImpl::`vector deleting destructor'(
        DirectComposition::CDelegatedInkTrailImpl *this,
        char a2)
{
  DirectComposition::CDelegatedInkTrailImpl::~CDelegatedInkTrailImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
