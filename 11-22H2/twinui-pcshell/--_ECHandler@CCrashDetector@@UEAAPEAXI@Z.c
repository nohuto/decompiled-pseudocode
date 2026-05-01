/*
 * XREFs of ??_ECHandler@CCrashDetector@@UEAAPEAXI@Z @ 0x1803BB2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CCrashDetector::CHandler *__fastcall CCrashDetector::CHandler::`vector deleting destructor'(
        CCrashDetector::CHandler *this,
        char a2)
{
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
