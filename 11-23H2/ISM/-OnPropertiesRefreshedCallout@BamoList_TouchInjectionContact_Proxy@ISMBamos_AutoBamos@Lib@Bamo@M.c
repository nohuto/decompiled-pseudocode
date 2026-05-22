/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ @ 0x1801B5BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x1801B5854 (--0-$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Ba.c)
 *     ??1?$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B5950 (--1-$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Ba.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy::OnPropertiesRefreshedCallout(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *this)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
