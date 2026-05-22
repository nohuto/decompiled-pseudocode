/*
 * XREFs of ??0ClickRecognizer@@QEAA@XZ @ 0x1801E24A0
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1801E0B64 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801E3D58 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

ClickRecognizer *__fastcall ClickRecognizer::ClickRecognizer(ClickRecognizer *this)
{
  *((_DWORD *)this + 2) = 527;
  *(_QWORD *)this = &ClickRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 13) = ClickRecognizer::s_doubleTapTimeThreshold;
  *((_WORD *)this + 12) = ClickRecognizer::s_doubleTapDistanceThreshold;
  *((_WORD *)this + 14) = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  *((_WORD *)this + 17) = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
  *((_WORD *)this + 15) = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  *((_WORD *)this + 16) = ClickRecognizer::s_tapAndHoldDurationThreshold;
  *((_WORD *)this + 18) = ClickRecognizer::s_tapAndHoldDistanceThreshold;
  *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0x80 | 2;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 10) = 12;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 13) = 12;
  *((_OWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 16) = 16;
  *((_OWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 20) = 16;
  return this;
}
