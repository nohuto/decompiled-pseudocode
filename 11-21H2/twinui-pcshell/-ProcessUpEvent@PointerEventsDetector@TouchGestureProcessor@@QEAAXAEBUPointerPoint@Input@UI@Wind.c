/*
 * XREFs of ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18058F500
 * Callers:
 *     _lambda_2fbe770fc9512a1546b07b3150b12f28_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058C90C (_lambda_2fbe770fc9512a1546b07b3150b12f28_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18003ACEC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18058DC98 (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x18058ECC8 (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18058FEC0 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::PointerEventsDetector::ProcessUpEvent(
        TouchGestureProcessor::PointerEventsDetector *this,
        const struct winrt::Windows::UI::Input::PointerPoint *a2)
{
  std::_Ref_count_base *v3; // rdi
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v5; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-10h]
  std::_Ref_count_base *v7; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(v7) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId((__int64 *)a2);
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
      (char *)this + 8,
      &v7);
    if ( !*((_QWORD *)this + 2) )
    {
      *((_WORD *)this + 78) = 0;
      *((_DWORD *)this + 38) = 0;
      if ( *((_QWORD *)this + 18) )
        std::_Func_class<void,>::operator()((__int64)this + 88);
      *(_OWORD *)v4 = 0LL;
      v3 = (std::_Ref_count_base *)operator new(0xD0uLL);
      v7 = v3;
      *(_OWORD *)v3 = 0LL;
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *(_QWORD *)v3 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v3 + 16,
        0LL,
        0LL);
      v5 = (_DWORD *)((char *)v3 + 16);
      v6 = v3;
      std::shared_ptr<KBViewInfo>::operator=(v4, (__int64 *)&v5);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v4)
        && v4[0] )
      {
        tip::details::test_common_data<1>::complete((__int64)v4[0] + 8);
      }
      if ( v4[1] )
        std::_Ref_count_base::_Decref(v4[1]);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  }
}
