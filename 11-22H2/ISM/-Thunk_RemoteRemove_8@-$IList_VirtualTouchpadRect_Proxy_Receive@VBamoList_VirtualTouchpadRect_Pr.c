/*
 * XREFs of ?Thunk_RemoteRemove_8@?$IList_VirtualTouchpadRect_Proxy_Receive@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1801597A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x180158B74 (--0-$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 *     ??1?$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180158C70 (--1-$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::Thunk_RemoteRemove_8(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>(
    (__int64)v8,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>((__int64)v8);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v5, v6);
  return v4;
}
