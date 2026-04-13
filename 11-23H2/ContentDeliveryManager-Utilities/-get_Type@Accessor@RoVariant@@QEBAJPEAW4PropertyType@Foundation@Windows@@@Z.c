/*
 * XREFs of ?get_Type@Accessor@RoVariant@@QEBAJPEAW4PropertyType@Foundation@Windows@@@Z @ 0x1800A0494
 * Callers:
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C648 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009CF00 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RoVariant::Accessor::get_Type(RoVariant::Accessor *this, enum Windows::Foundation::PropertyType *a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // r8d

  v2 = *((_DWORD *)this + 2);
  if ( v2 < 0 )
    return (unsigned int)v2;
  if ( !v2 )
  {
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  v4 = v2 - 1;
  if ( !v4 || v4 == 2 )
  {
    *(_DWORD *)a2 = 13;
    return 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, enum Windows::Foundation::PropertyType *))(**(_QWORD **)this + 48LL))(
             *(_QWORD *)this,
             a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
