/*
 * XREFs of ?Thunk_RequestActivation_14@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008F170
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationControllerProxyImpl@1@@Z @ 0x18008EBE4 (--0-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ??1?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18008ECE0 (--1-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IActivationControllerProxy_Receive<BamoImpl::BamoActivationControllerProxyImpl>::Thunk_RequestActivation_14(
        Microsoft::BamoImpl::BamoProxyImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
    (__int64)v6,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>((__int64)v6);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v3, v4);
  return v2;
}
