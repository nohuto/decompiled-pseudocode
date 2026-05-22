/*
 * XREFs of _lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______ @ 0x180074060
 * Callers:
 *     ?GetAllEdgyLocationsFromRegistrations@ShellGesturesProcessor@@AEAA?AW4EdgyLocation@ShellEdgyRecognizer@@QEAUtagTOUCH_GESTURE_SETTINGS@@@Z @ 0x1800742F8 (-GetAllEdgyLocationsFromRegistrations@ShellGesturesProcessor@@AEAA-AW4EdgyLocation@ShellEdgyReco.c)
 * Callees:
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074180 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@details@wil@@QEAA_NXZ @ 0x180074D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackportDisableEdgySettings@@@det.c)
 *     ??0?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18017C92C (--0-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGesturesPr.c)
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18017E084 (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3ac41b7c074b5572a862bd524c28f9fc_::operator()_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration_______(
        __int64 *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rbx
  __int64 i; // rdi
  int v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF

  std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>(
    &v10,
    a3);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackportDisableEdgySettings>::GetImpl'::`2'::impl) )
  {
    v5 = a1[1];
    if ( v5 )
    {
      if ( v10 == 1 )
      {
        v6 = *(_DWORD *)(v5 + 56) == 0;
        goto LABEL_7;
      }
      if ( v10 == 4 )
      {
        v6 = *(_DWORD *)(v5 + 60) == 0;
LABEL_7:
        if ( v6 )
          goto LABEL_14;
      }
    }
  }
  v7 = *a1;
  for ( i = v11[0]; i != v11[1]; i += 32LL )
  {
    if ( (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient<DragManagerClientProxy>(v7, *(_QWORD *)(i + 16)) )
    {
      a2 |= v10;
      break;
    }
  }
LABEL_14:
  std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(v11);
  return a2;
}
