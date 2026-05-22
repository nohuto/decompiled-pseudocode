/*
 * XREFs of ?Thunk_TransferForegroundToHost_38@?$ICUIComponentInputObjectProxy_Receive@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180142540
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCUIComponentInputObjectProxyImpl@1@@Z @ 0x1801419BC (--0-$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE.c)
 *     ??1?$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180141AB8 (--1-$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ICUIComponentInputObjectProxy_Receive<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::Thunk_TransferForegroundToHost_38(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>(
    (__int64)v7,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
    (__int64)this);
  LODWORD(v3) = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 136LL))((char *)this - 16, v3);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>((__int64)v7);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v4, v5);
  return (unsigned int)v3;
}
