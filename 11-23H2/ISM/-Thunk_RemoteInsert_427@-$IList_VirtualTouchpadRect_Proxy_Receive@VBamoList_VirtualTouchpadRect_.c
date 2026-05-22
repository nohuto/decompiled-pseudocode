/*
 * XREFs of ?Thunk_RemoteInsert_427@?$IList_VirtualTouchpadRect_Proxy_Receive@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x18005FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x18014A894 (--0-$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 *     ??1?$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014A990 (--1-$CalloutWrapper@VBamoList_VirtualTouchpadRect_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Proxy_Receive<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::Thunk_RemoteInsert_427(
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
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>(
    v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    this);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD, int *))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v4, v3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl>(v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v6, v7);
  return v5;
}
