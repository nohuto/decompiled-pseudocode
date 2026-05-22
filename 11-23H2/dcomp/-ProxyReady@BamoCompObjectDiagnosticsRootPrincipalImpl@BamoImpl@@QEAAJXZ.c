/*
 * XREFs of ?ProxyReady@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x18019F4CC
 * Callers:
 *     ?Thunk_ProxyReady_0@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019FA60 (-Thunk_ProxyReady_0@-$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRoot.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18016A2F4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A8D0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::ProxyReady(
        BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl *this)
{
  _QWORD *v1; // rdi
  int v2; // ebx
  int v4; // ecx
  __int64 v5; // rbp
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v1[4] + 36LL) == v4 )
        break;
      v1 = (_QWORD *)v1[5];
    }
    while ( v1 );
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 32LL))(v1);
  v8 = *(_QWORD *)(v1[4] + 24LL);
  v9 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v8 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
      v6,
      v7);
    v10 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, v5);
    v2 = v10;
    if ( v10 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9);
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        4385LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
        (const char *)(unsigned int)v10,
        v15[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v15,
      v11,
      v12,
      v13);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1125,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
        (const char *)(unsigned int)v2);
  }
  return (unsigned int)v2;
}
