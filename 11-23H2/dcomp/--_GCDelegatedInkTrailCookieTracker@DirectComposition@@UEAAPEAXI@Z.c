/*
 * XREFs of ??_GCDelegatedInkTrailCookieTracker@DirectComposition@@UEAAPEAXI@Z @ 0x1800E5A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ @ 0x1800E5954 (--1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CDelegatedInkTrailCookieTracker *__fastcall DirectComposition::CDelegatedInkTrailCookieTracker::`scalar deleting destructor'(
        DirectComposition::CDelegatedInkTrailCookieTracker *this,
        char a2)
{
  DirectComposition::CDelegatedInkTrailCookieTracker::~CDelegatedInkTrailCookieTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
