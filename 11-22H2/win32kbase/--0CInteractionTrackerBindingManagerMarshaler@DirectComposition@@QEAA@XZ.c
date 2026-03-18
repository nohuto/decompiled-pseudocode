/*
 * XREFs of ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B5F0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 91LL);
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
  result = this;
  *((_BYTE *)this + 80) = 1;
  *((_QWORD *)this + 13) = 32LL;
  return result;
}
