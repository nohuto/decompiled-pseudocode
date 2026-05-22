/*
 * XREFs of ??1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ @ 0x1800E5954
 * Callers:
 *     ??_GCDelegatedInkTrailCookieTracker@DirectComposition@@UEAAPEAXI@Z @ 0x1800E5A40 (--_GCDelegatedInkTrailCookieTracker@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall DirectComposition::CDelegatedInkTrailCookieTracker::~CDelegatedInkTrailCookieTracker(
        DirectComposition::CDelegatedInkTrailCookieTracker *this)
{
  DirectComposition::CDelegatedInkTrailCookieTracker **i; // rcx

  *(_QWORD *)this = &DirectComposition::CDelegatedInkTrailCookieTracker::`vftable';
  AcquireSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  for ( i = (DirectComposition::CDelegatedInkTrailCookieTracker **)DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers;
        i != (DirectComposition::CDelegatedInkTrailCookieTracker **)qword_180220998 && *i != this;
        ++i )
  {
    ;
  }
  memmove_0(i, i + 1, qword_180220998 - (_QWORD)(i + 1));
  qword_180220998 -= 8LL;
  ReleaseSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease((char *)this + 24);
}
