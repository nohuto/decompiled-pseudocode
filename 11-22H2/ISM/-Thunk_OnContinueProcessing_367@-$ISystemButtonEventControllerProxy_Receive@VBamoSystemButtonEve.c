/*
 * XREFs of ?Thunk_OnContinueProcessing_367@?$ISystemButtonEventControllerProxy_Receive@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800762F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemButtonEventControllerProxyImpl@1@@Z @ 0x18005050C (--0-$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800505E4 (--1-$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISystemButtonEventControllerProxy_Receive<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::Thunk_OnContinueProcessing_367(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>(
    (__int64)v7,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  LODWORD(v3) = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>((__int64)v7);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v4, v5);
  return (unsigned int)v3;
}
