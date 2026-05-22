/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x18017F9B4
 * Callers:
 *     ?Thunk_OnMouseSnappedToGaze_41@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017FFE0 (-Thunk_OnMouseSnappedToGaze_41@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincip.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnMouseSnappedToGaze(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this)
{
  int v2; // ebx
  _QWORD *i; // rdi
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rdi
  int v8; // eax
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i; i = (_QWORD *)i[5] )
  {
    if ( *(_DWORD *)(i[4] + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 32LL))(i);
  v6 = *(_QWORD *)(i[4] + 24LL);
  v7 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v6 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v13,
      *(_QWORD *)(v6 + 32),
      v5,
      0LL);
    v8 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16, v4);
    v2 = v8;
    v11 = 2276591628LL;
    if ( v8 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v7, 0x87B2080C, 0);
    }
    else if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E12,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v8,
        v13[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v13,
      v11,
      v9,
      v10);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E16,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v2);
  }
  return (unsigned int)v2;
}
