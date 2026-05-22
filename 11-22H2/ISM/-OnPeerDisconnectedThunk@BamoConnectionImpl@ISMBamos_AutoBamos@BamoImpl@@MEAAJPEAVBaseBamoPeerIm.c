/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x180029EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180023290 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028DE0 (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180029FA0 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = *((_QWORD *)a2 + 2);
  v7 = this != 0LL ? 3 : 0;
  v13 = this;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(this);
  v14 = v7;
  *(_QWORD *)v12 = 0LL;
  if ( !*((_DWORD *)this + 47) )
  {
    *(_QWORD *)v12 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  if ( this )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2));
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9,
        v12[0]);
  }
  LOBYTE(v8) = a3;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, v6, v8);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v12);
  return v10;
}
