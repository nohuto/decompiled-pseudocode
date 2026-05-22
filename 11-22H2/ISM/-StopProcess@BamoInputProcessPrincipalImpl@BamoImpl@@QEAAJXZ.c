/*
 * XREFs of ?StopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x1800DA654
 * Callers:
 *     ?Thunk_StopProcess_14@?$IInputProcessPrincipal_Receive@VBamoInputProcessPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800DA840 (-Thunk_StopProcess_14@-$IInputProcessPrincipal_Receive@VBamoInputProcessPrincipalImpl@BamoImpl@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@@Z @ 0x1800D97E0 (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D9B88 (--1-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputProcessPrincipalImpl::StopProcess(BamoImpl::BamoInputProcessPrincipalImpl *this)
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
  if ( *((_QWORD *)this + 5) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>(
      (__int64)v9,
      *(_QWORD *)(v5 + 32),
      (__int64)this);
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 5) + 48LL))(
           *((_QWORD *)this + 5),
           (char *)this - 16,
           v4);
    v2 = v7;
    if ( v7 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v6, 0x87B2080C, 0);
    }
    else if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA970,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v9[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>((__int64)v9);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA974,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v2);
  }
  return (unsigned int)v2;
}
