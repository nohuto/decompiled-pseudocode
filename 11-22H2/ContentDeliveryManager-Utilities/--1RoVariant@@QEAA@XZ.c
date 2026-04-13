/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x18009B33C
 * Callers:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18009B2C4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C698 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009CF50 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E3C0 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$8 @ 0x1800D9B6A (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$8.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetCompositeValue_::_1_::dtor$1 @ 0x1800D9C8A (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D9C8A.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$1 @ 0x1800D9EBB (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D9EBB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
