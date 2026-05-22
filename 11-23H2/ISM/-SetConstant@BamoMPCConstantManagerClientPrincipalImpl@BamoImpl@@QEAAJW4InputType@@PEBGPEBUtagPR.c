/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEBUtagPROPVARIANT@@I@Z @ 0x1800ACA08
 * Callers:
 *     ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800AD240 (-Thunk_SetConstant_8@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientP.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  int v8; // ebx
  _QWORD *v9; // rdi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  struct Microsoft::BamoImpl::ConnectionIndirector **v14; // r14
  Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v23[11]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v25; // [rsp+A0h] [rbp+8h]

  v8 = 0;
  v9 = *(_QWORD **)(a1 + 32);
  if ( v9 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v9[4] + 36LL) == v10 )
        break;
      v9 = (_QWORD *)v9[5];
    }
    while ( v9 );
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
  v12 = v9[4];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v13 + 32);
  Proxy = 0LL;
  v16 = a5;
  if ( !a5
    || (Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                  *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
                  *(unsigned int *)(v12 + 36),
                  a5)) != 0LL )
  {
    if ( *(int *)(a1 + 8) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        (__int64)v23,
        (__int64)v14,
        v16,
        0LL);
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 96LL))(
              a1 - 16,
              v25,
              a2,
              a3);
      v8 = v18;
      v21 = 2276591628LL;
      if ( v18 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, 0x87B2080C, 0);
      }
      else if ( v18 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2283,
          (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
          (const char *)(unsigned int)v18,
          a4);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        v23,
        v21,
        v19,
        v20);
    }
    if ( Proxy )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(Proxy, v11, v16);
    if ( v8 < 0 )
    {
      v17 = 8850LL;
      goto LABEL_17;
    }
  }
  else
  {
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v12 + 24) + 32LL),
           0x87B2080C,
           0);
    if ( v8 < 0 )
    {
      v17 = 8815LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
    }
  }
  return (unsigned int)v8;
}
