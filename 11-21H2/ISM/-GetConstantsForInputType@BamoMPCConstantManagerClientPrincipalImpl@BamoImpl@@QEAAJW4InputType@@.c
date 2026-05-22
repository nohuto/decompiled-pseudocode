/*
 * XREFs of ?GetConstantsForInputType@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@I@Z @ 0x18009546C
 * Callers:
 *     ?Thunk_GetConstantsForInputType_21@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096A90 (-Thunk_GetConstantsForInputType_21@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstant.c)
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
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetConstantsForInputType(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v6; // rbx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v13; // rdi
  char *v14; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-48h]
  __int64 v25[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD **)(a1 + 32);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v6[5] + 36LL) == v7 )
        break;
      v6 = (_QWORD *)v6[6];
    }
    while ( v6 );
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  v10 = v6[5];
  v11 = *(_QWORD *)(v10 + 24);
  v12 = *(_QWORD *)(v11 + 32);
  v13 = 0LL;
  v14 = 0LL;
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32),
              *(unsigned int *)(v10 + 36),
              a3);
    v13 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2361,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v14 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v25,
    v12,
    v8,
    0);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)(a1 - 16) + 136LL))(
          a1 - 16,
          v9,
          a2,
          v14);
  v21 = v17;
  if ( v17 != -2018375668 && v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2370,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v17,
      v24);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v25,
    v18,
    v19,
    v20);
  if ( v13 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v13, v22, v23);
  if ( v21 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x237F,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v21);
  return (unsigned int)v21;
}
