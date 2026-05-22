/*
 * XREFs of ?SetOnlyMixedWorldRouting@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800B1E20
 * Callers:
 *     ?Thunk_SetOnlyMixedWorldRouting_38@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B2630 (-Thunk_SetOnlyMixedWorldRouting_38@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@B.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetOnlyMixedWorldRouting(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v10; // rdi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v15; // rdx
  __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v5[4] + 36LL) == v6 )
        break;
      v5 = (_QWORD *)v5[5];
    }
    while ( v5 );
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  v9 = *(_QWORD *)(v5[4] + 24LL);
  v10 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v9 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v17,
      *(_QWORD *)(v9 + 32),
      v7,
      0LL);
    LOBYTE(v11) = a2;
    v12 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 88LL))(
            (char *)this - 16,
            v8,
            v11);
    v4 = v12;
    v15 = 2276591628LL;
    if ( v12 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, 0x87B2080C, 0);
    }
    else if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2966,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v12,
        v17[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v17,
      v15,
      v13,
      v14);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x296A,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
