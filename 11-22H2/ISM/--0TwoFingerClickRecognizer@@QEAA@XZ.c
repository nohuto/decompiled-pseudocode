/*
 * XREFs of ??0TwoFingerClickRecognizer@@QEAA@XZ @ 0x1801E457C
 * Callers:
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x1801E37D4 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801E3D58 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

TwoFingerClickRecognizer *__fastcall TwoFingerClickRecognizer::TwoFingerClickRecognizer(TwoFingerClickRecognizer *this)
{
  unsigned __int16 v2; // ax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &TwoFingerClickRecognizer::`vftable';
  *((_DWORD *)this + 2) = 23552;
  GestureRecognizer::StaticInitConfig();
  v2 = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 8) &= 0x14u;
  *((_WORD *)this + 30) = v2;
  *((_WORD *)this + 31) = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 32) = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
  *((_WORD *)this + 33) = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
  *((_WORD *)this + 35) = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
  *((_WORD *)this + 34) = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 5) = 0;
  return this;
}
