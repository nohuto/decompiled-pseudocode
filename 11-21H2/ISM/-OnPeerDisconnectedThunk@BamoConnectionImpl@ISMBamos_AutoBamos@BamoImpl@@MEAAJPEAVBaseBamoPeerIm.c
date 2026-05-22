/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x180111DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x180102690 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104CAC (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)a2 + 2);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
    (__int64)v8,
    (__int64)this,
    (__int64)this);
  LOBYTE(v6) = a3;
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 112LL))(v4, v5, v6);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v8);
  return (unsigned int)v5;
}
