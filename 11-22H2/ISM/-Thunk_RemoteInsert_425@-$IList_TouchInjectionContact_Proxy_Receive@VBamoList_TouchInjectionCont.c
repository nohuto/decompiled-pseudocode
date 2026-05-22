/*
 * XREFs of ?Thunk_RemoteInsert_425@?$IList_TouchInjectionContact_Proxy_Receive@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x180077080
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x1801C2F74 (--0-$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Ba.c)
 *     ??1?$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801C3070 (--1-$CalloutWrapper@VBamoList_TouchInjectionContact_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Ba.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_TouchInjectionContact_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>::Thunk_RemoteInsert_425(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  int *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>(
    v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    this);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD, int *))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v4, v3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_ProxyImpl>(v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v6, v7);
  return v5;
}
