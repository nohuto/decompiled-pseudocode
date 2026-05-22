/*
 * XREFs of ?StopFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x1801BB30C
 * Callers:
 *     ?Thunk_StopFeedback_14@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BB4F0 (-Thunk_StopFeedback_14@-$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z @ 0x1801B8608 (--0-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B88D8 (--1-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::StopFeedback(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  int v2; // ebx
  _QWORD *i; // rdi
  __int64 v4; // rbp
  __int64 v5; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v6; // rdi
  int v7; // eax
  int v9[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i; i = (_QWORD *)i[5] )
  {
    if ( *(_DWORD *)(i[4] + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 32LL))(i);
  v5 = *(_QWORD *)(i[4] + 24LL);
  v6 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v5 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>(
      (__int64)v9,
      *(_QWORD *)(v5 + 32),
      (__int64)this);
    v7 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16, v4);
    v2 = v7;
    if ( v7 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v6, 0x87B2080C, 0);
    }
    else if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1145,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v9[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>((__int64)v9);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1149,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v2);
  }
  return (unsigned int)v2;
}
