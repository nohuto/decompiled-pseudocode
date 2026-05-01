/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1803BB144
 * Callers:
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x1802BBD2C (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1802BF050 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x1802BF41F (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame____::_1_::dtor$2 @ 0x1802BF443 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CA.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1802C7796 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1803BAE6B (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1803BAE6B.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
