/*
 * XREFs of ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z @ 0x1801BA778
 * Callers:
 *     ?Thunk_SendHapticFeedbackForDuration_356@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180076450 (-Thunk_SendHapticFeedbackForDuration_356@-$ISimpleHapticsControllerPrincipal_Receive@VBamoSimple.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z @ 0x1801B8608 (--0-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B88D8 (--1-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForDuration(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        unsigned __int16 a2,
        float a3,
        int a4)
{
  int v7; // ebx
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rbp
  __int64 v11; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v12; // rdi
  int v13; // eax
  _BYTE v15[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[4] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[5];
    }
    while ( v8 );
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v11 = *(_QWORD *)(v8[4] + 24LL);
  v12 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v11 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>(
      (__int64)v15,
      *(_QWORD *)(v11 + 32),
      (__int64)this);
    v13 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 104LL))(
            (char *)this - 16,
            v10,
            a2);
    v7 = v13;
    if ( v13 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v12, 0x87B2080C, 0);
    }
    else if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1167,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>((__int64)v15);
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
  }
  return (unsigned int)v7;
}
