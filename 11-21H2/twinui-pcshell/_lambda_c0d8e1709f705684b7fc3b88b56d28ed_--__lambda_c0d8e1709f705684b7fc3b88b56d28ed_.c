/*
 * XREFs of _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1800706C8
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x180217F98 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb____::_1_::dtor$1 @ 0x1804A9CCE (_ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPol_ea_1804A9CCE.c)
 *     _ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2____::_1_::dtor$1 @ 0x1804B76C1 (_ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c211_ea_1804B76C1.c)
 *     _ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f____::_1_::dtor$1 @ 0x1804B77F5 (_ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPol_ea_1804B77F5.c)
 *     _ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe____::_1_::dtor$1 @ 0x1804C64A1 (_ObservableProperty_bool_--AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe____--_1_--dtor$1.c)
 *     _CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::s_TimerWndProc_::_1_::dtor$0 @ 0x1804CB143 (_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--s_TimerWndProc_--_1_-.c)
 *     _ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5____::_1_::dtor$1 @ 0x1804CEB35 (_ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5_ea_1804CEB35.c)
 *     _ItemAnimationCoordinatorBase::BeginAnimation_::_1_::dtor$8 @ 0x1804DC5BB (_ItemAnimationCoordinatorBase--BeginAnimation_--_1_--dtor$8.c)
 *     _CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc_::_1_::dtor$0 @ 0x18051DBD3 (_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--s_TimerWndProc_--_1_-.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba____::_1_::dtor$0 @ 0x18054E337 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242____::_1_::dtor$0 @ 0x18054E3C3 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed____::_1_::dtor$0 @ 0x18054E460 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d2.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed____::_1_::dtor$0 @ 0x18054E525 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_6.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba____::_1_::dtor$0 @ 0x18054E5F8 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_7.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242____::_1_::dtor$0 @ 0x18054E6CC (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
