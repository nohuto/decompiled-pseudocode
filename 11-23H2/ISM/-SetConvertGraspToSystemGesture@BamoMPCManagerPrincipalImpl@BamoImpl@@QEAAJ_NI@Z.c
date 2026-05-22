/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800B1C8C
 * Callers:
 *     ?Thunk_SetConvertGraspToSystemGesture_43@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B2610 (-Thunk_SetConvertGraspToSystemGesture_43@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipal.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetConvertGraspToSystemGesture(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2,
        unsigned int a3)
{
  int v6; // ebx
  _QWORD *v7; // rdi
  int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v12; // rdi
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  const char *v16; // r9
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v7[4] + 36LL) == v8 )
        break;
      v7 = (_QWORD *)v7[5];
    }
    while ( v7 );
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v11 = *(_QWORD *)(v7[4] + 24LL);
  v12 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v11 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v20,
      *(_QWORD *)(v11 + 32),
      v10,
      0LL);
    LOBYTE(v13) = a2;
    v14 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
            (char *)this - 16,
            v9,
            v13,
            a3);
    v6 = v14;
    v17 = 2276591628LL;
    if ( v14 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v12, 0x87B2080C, 0);
    }
    else if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A06,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v14,
        v19);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v20,
      v17,
      v15,
      v16);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A0A,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v6);
  }
  return (unsigned int)v6;
}
