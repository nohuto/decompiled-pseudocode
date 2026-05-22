/*
 * XREFs of ?Thunk_StartManualResize_68@?$IManualResizeAreaClientProxy_Receive@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180170060
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoManualResizeAreaClientProxyImpl@1@@Z @ 0x18016F840 (--0-$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA.c)
 *     ??1?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016F93C (--1-$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IManualResizeAreaClientProxy_Receive<BamoImpl::BamoManualResizeAreaClientProxyImpl>::Thunk_StartManualResize_68(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>(
    (__int64)v9,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v4, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>((__int64)v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v6, v7);
  return v5;
}
