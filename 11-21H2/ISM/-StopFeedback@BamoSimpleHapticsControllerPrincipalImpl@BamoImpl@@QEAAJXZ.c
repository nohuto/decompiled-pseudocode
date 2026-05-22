/*
 * XREFs of ?StopFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x18018EF7C
 * Callers:
 *     ?Thunk_StopFeedback_14@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018F1B0 (-Thunk_StopFeedback_14@-$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z @ 0x18018C480 (--0-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18018C750 (--1-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::StopFeedback(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  _QWORD *i; // rdi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ebx
  int v7[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = (_QWORD *)*((_QWORD *)this + 4); i; i = (_QWORD *)i[6] )
  {
    if ( *(_DWORD *)(i[5] + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 32LL))(i);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>(
    (__int64)v7,
    *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 32LL),
    (__int64)this);
  v4 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16, v3);
  v5 = v4;
  if ( v4 != -2018375668 && v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD209,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v4,
      v7[0]);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>((__int64)v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD20D,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
