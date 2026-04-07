/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@@Z @ 0x1800E39A0
 * Callers:
 *     ??0?$CTimeline@M@@QEAA@NMMUInterpolationParameters@@@Z @ 0x1800997A0 (--0-$CTimeline@M@@QEAA@NMMUInterpolationParameters@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimelineBase::CTimelineBase(__int64 a1, double a2, double a3, double a4, int *a5)
{
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, a3, a4, *a5);
  v6[10] = v5[1];
  v6[11] = v5[2];
  v6[12] = v5[3];
  v6[13] = v5[4];
  result = v6;
  *v6 = &CTimelineBase::`vftable';
  return result;
}
