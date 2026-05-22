/*
 * XREFs of ?Thunk_RemoteClear_14@?$IList_DisplayOcclusionRect_Proxy_Receive@VBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x18014A400
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x180149684 (--0-$CalloutWrapper@VBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bam.c)
 *     ??1?$CalloutWrapper@VBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180149780 (--1-$CalloutWrapper@VBamoList_DisplayOcclusionRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bam.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>::Thunk_RemoteClear_14(
        Microsoft::BamoImpl::BamoProxyImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>(
    (__int64)v6,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_ProxyImpl>((__int64)v6);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v3, v4);
  return v2;
}
