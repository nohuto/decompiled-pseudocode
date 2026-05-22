/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x1800B0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)a2 + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    (__int64)this,
    a3,
    0LL);
  LOBYTE(v6) = v3;
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 104LL))(v4, v5, v6);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v11,
    v7,
    v8,
    v9);
  return (unsigned int)v5;
}
