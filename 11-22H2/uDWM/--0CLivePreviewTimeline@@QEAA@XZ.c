/*
 * XREFs of ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18004A86C
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A7E0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E6C2C (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::CLivePreviewTimeline(CLivePreviewTimeline *this, __int64 a2)
{
  CLivePreviewTimeline *v2; // r8
  CLivePreviewTimeline *result; // rax

  CTimelineBase::CTimelineBase(this, a2, this);
  result = v2;
  *(_QWORD *)v2 = &CLivePreviewTimeline::`vftable';
  return result;
}
