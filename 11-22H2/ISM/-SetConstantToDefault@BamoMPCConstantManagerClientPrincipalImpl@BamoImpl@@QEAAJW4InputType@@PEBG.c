/*
 * XREFs of ?SetConstantToDefault@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGI@Z @ 0x1800BF5C8
 * Callers:
 *     ?Thunk_SetConstantToDefault_16@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BFA10 (-Thunk_SetConstantToDefault_16@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantMana.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstantToDefault(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  int v7; // ebx
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rax
  struct Microsoft::BamoImpl::ConnectionIndirector **v14; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v15; // rdi
  int v16; // r12d
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v24[11]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v26; // [rsp+90h] [rbp+8h]

  v7 = 0;
  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[4] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[5];
    }
    while ( v8 );
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v12 = v8[4];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v13 + 32);
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
      v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v12 + 24) + 32LL),
             0x87B2080C,
             0);
      if ( v7 < 0 )
      {
        v18 = 9012LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPC"
                   "ManagerBamo.MPCManagerBamo.bamo.h",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      return (unsigned int)v7;
    }
    v16 = (_DWORD)Proxy - 16;
  }
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v24,
      (__int64)v14,
      v11,
      0LL);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 120LL))(
            a1 - 16,
            v26,
            a2,
            a3);
    v7 = v19;
    v22 = 2276591628LL;
    if ( v19 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, 0x87B2080C, 0);
    }
    else if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2348,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v19,
        v16);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v24,
      v22,
      v20,
      v21);
  }
  if ( v15 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v15, v10, v11);
  if ( v7 < 0 )
  {
    v18 = 9047LL;
    goto LABEL_18;
  }
  return (unsigned int)v7;
}
