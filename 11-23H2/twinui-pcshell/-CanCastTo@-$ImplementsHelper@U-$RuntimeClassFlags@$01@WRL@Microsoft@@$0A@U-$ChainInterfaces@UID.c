/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805F2FF8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationNotification@@UIDropFeedbackItemInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F3820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1805F3820.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$Verify@$01@?$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@KAXXZ @ 0x18016C6A0 (--$Verify@$01@-$ChainInterfaces@UIDropFeedbackItem@@UITemporaryAppVisual@@VNil@Details@WRL@Micro.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<IDropFeedbackItem,ITemporaryAppVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationNotification,IDropFeedbackItemInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // r9d
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx

  Microsoft::WRL::ChainInterfaces<IDropFeedbackItem,ITemporaryAppVisual,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Verify<2>();
  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810);
  v8 = 0;
  if ( IsEqualGUID
    || InlineIsEqualGUID(v7, &GUID_114ed843_c914_443d_9588_6ffb643e73d0)
    || (a1 += 8LL, InlineIsEqualGUID(v9, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060)) )
  {
    *a3 = a1;
  }
  else if ( InlineIsEqualGUID(v10, &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36) )
  {
    *a3 = a1 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v8;
}
