/*
 * XREFs of ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x18009AF8C
 * Callers:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18009B274 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C648 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009CF00 (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E370 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

RoVariant *__fastcall RoVariant::RoVariant(RoVariant *this, struct IInspectable *a2)
{
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v6);
    if ( v4 < 0 )
    {
      if ( v4 == -2147467262 )
      {
        *(_QWORD *)this = a2;
        *((_DWORD *)this + 2) = 3;
      }
      else
      {
        *(_QWORD *)this = 0LL;
        *((_DWORD *)this + 2) = v4;
        ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      }
    }
    else
    {
      *(_QWORD *)this = v6;
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      *((_DWORD *)this + 2) = 7;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
