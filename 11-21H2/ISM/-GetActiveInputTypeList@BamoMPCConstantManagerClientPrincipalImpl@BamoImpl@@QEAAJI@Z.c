/*
 * XREFs of ?GetActiveInputTypeList@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180094EAC
 * Callers:
 *     ?Thunk_GetActiveInputTypeList_25@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096A50 (-Thunk_GetActiveInputTypeList_25@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantMa.c)
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
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetActiveInputTypeList(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v4; // rbx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rdi
  char *v12; // rbx
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v4[5] + 36LL) == v5 )
        break;
      v4 = (_QWORD *)v4[6];
    }
    while ( v4 );
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4);
  v8 = v4[5];
  v9 = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(v9 + 32);
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v9 + 32),
              *(unsigned int *)(v8 + 36),
              a2);
    v11 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2325,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v12 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v22,
    v10,
    v6,
    0);
  v15 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 128LL))((char *)this - 16, v7, v12);
  v19 = v15;
  if ( v15 != -2018375668 && v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2334,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v15,
      v22[0]);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v22,
    v16,
    v17,
    v18);
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v20, v21);
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2343,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
