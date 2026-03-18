/*
 * XREFs of ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x180197000
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18019762C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
        Microsoft::BamoImpl::BamoAsyncOperationCoordinator *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v3; // r8
  const char *v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a2 + 3) + 32LL));
  v5 = *(_QWORD *)this;
  v6 = 0;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5 )
  {
    v7 = 0LL;
    do
    {
      v8 = 32 * v7;
      v9 = *(__int64 (__fastcall **)(_QWORD))(v8 + v5 + 16);
      if ( v9 )
      {
        v10 = v9(*(_QWORD *)(v8 + v5 + 8));
        if ( v10 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            251LL,
            (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
            (const char *)(unsigned int)v10,
            v11[0]);
      }
      v5 = *(_QWORD *)this;
      v7 = ++v6;
    }
    while ( v6 < (unsigned __int64)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5) );
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    v5,
    v3,
    v4);
  *((_QWORD *)this + 1) = *(_QWORD *)this;
}
