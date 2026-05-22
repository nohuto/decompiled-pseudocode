/*
 * XREFs of ?GetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGI@Z @ 0x1800950DC
 * Callers:
 *     ?Thunk_GetConstant_16@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096A70 (-Thunk_GetConstant_16@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClient.c)
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
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetConstant(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD *v8; // rbx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v15; // rdi
  int v16; // ebx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  const char *v22; // r9
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[5] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[6];
    }
    while ( v8 );
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v12 = v8[5];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(v13 + 32);
  v15 = 0LL;
  v16 = 0;
  if ( a4 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
              *(unsigned int *)(v12 + 36),
              a4);
    v15 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2271,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v16 = (_DWORD)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v27,
    v14,
    v10,
    0);
  v26 = v16;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 104LL))(
          a1 - 16,
          v11,
          a2,
          a3);
  v23 = v19;
  if ( v19 != -2018375668 && v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2280,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v19,
      v26);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v27,
    v20,
    v21,
    v22);
  if ( v15 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v15, v24, v25);
  if ( v23 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228F,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v23);
  return (unsigned int)v23;
}
