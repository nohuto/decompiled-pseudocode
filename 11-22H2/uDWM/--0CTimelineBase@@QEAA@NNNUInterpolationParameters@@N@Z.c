/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x1800E51E4
 * Callers:
 *     ??0?$CTimeline@M@@QEAA@NMMUInterpolationParameters@@N@Z @ 0x1800A27A0 (--0-$CTimeline@M@@QEAA@NMMUInterpolationParameters@@N@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimelineBase::CTimelineBase(__int64 a1, double a2, double a3, double a4, int *a5, __int64 a6)
{
  _QWORD *v6; // r8
  _QWORD *v7; // r9
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, a3, a4, *a5);
  v7[11] = v6[1];
  v7[12] = v6[2];
  v7[13] = v6[3];
  v7[14] = v6[4];
  result = v7;
  v7[10] = a6;
  *v7 = &CTimelineBase::`vftable';
  return result;
}
