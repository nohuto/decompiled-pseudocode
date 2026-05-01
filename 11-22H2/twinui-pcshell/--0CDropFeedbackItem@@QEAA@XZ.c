/*
 * XREFs of ??0CDropFeedbackItem@@QEAA@XZ @ 0x1805F2BAC
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@AEAPEBU5@AEANAEAW4DROP_FEEDBACK_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackItem@@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@5AEANAEAW4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805F2864 (--$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationVi.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1805F2AFC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UIDropFeedbackItem@.c)
 */

CDropFeedbackItem *__fastcall CDropFeedbackItem::CDropFeedbackItem(CDropFeedbackItem *this)
{
  CDropFeedbackItem *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IDropFeedbackItem,ITemporaryAppVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationNotification,IDropFeedbackItemInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IDropFeedbackItem,ITemporaryAppVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationNotification,IDropFeedbackItemInternal>(this);
  *(_QWORD *)this = &CDropFeedbackItem::`vftable';
  *((_QWORD *)this + 1) = &CDropFeedbackItem::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 2) = &CDropFeedbackItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDropFeedbackItemInternal>'};
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  result = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_WORD *)this + 78) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return result;
}
