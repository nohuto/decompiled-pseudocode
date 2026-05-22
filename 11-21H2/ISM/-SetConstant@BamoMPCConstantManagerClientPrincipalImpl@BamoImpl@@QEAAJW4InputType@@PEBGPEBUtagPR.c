/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEBUtagPROPVARIANT@@I@Z @ 0x180096318
 * Callers:
 *     ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096AF0 (-Thunk_SetConstant_8@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientP.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  _QWORD *v9; // rbx
  int v10; // ecx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rdi
  __int64 v16; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = *(_QWORD **)(a1 + 32);
  if ( v9 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v9[5] + 36LL) == v10 )
        break;
      v9 = (_QWORD *)v9[6];
    }
    while ( v9 );
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
  v12 = v9[5];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(v13 + 32);
  Proxy = 0LL;
  v16 = a5;
  if ( !a5
    || (Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                  *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
                  *(unsigned int *)(v12 + 36),
                  a5)) != 0LL )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v25,
      v14,
      v16,
      0);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 96LL))(
            a1 - 16,
            v11,
            a2,
            a3);
    v22 = v18;
    if ( v18 != -2018375668 && v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2243,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v18,
        a4);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v25,
      v19,
      v20,
      v21);
    if ( Proxy )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(Proxy, v23, v24);
    if ( v22 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2252,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v22);
    return (unsigned int)v22;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2234,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}
