/*
 * XREFs of ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18011DDD0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x18011DE1C (CreationThreadDispatcher--RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::WorkAreaChanged(
        AccessibilityExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  *(struct tagRECT *)((char *)this + 312) = *a3;
  CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___(
    *((_QWORD *)this + 20),
    (char *)this - 128);
  return 0LL;
}
