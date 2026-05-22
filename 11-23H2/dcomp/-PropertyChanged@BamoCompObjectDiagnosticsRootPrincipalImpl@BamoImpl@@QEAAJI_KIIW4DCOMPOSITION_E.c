/*
 * XREFs of ?PropertyChanged@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F2C0
 * Callers:
 *     ?Thunk_PropertyChanged_10@?$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019FA00 (-Thunk_PropertyChanged_10@-$ICompObjectDiagnosticsRootPrincipal_Receive@VBamoCompObjectDiagnosti.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18016A2F4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A8D0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootPrincipalImpl::PropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *(_QWORD **)(a1 + 32);
  v5 = 0;
  if ( v4 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v4[4] + 36LL) == v10 )
        break;
      v4 = (_QWORD *)v4[5];
    }
    while ( v4 );
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  v14 = *(_QWORD *)(v4[4] + 24LL);
  v15 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v14 + 32);
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v21,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v14 + 32),
      v12,
      v13);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 104LL))(
            a1 - 16,
            v11,
            a2,
            a3);
    v5 = v16;
    if ( v16 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v15);
    }
    else if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        4498LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
        (const char *)(unsigned int)v16,
        a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v21,
      v17,
      v18,
      v19);
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1196,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
        (const char *)(unsigned int)v5);
  }
  return (unsigned int)v5;
}
