/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x18017EC3C
 * Callers:
 *     ?Thunk_OnButtonsChangedDuringHomeGesture_68@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017FE70 (-Thunk_OnButtonsChangedDuringHomeGesture_68@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManager.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnButtonsChangedDuringHomeGesture(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  int v8; // ebx
  _QWORD *v9; // rdi
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v14; // rdi
  int v15; // eax
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rdx
  __int64 v20[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 0;
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v9[4] + 36LL) == v10 )
        break;
      v9 = (_QWORD *)v9[5];
    }
    while ( v9 );
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
  v13 = *(_QWORD *)(v9[4] + 24LL);
  v14 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v13 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v20,
      *(_QWORD *)(v13 + 32),
      v12,
      0LL);
    v15 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD))(*((_QWORD *)this - 2) + 136LL))(
            (char *)this - 16,
            v11,
            a2,
            a3);
    v8 = v15;
    v18 = 2276591628LL;
    if ( v15 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, 0x87B2080C, 0);
    }
    else if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2EBE,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v15,
        a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v20,
      v18,
      v16,
      v17);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC2,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8);
  }
  return (unsigned int)v8;
}
