/*
 * XREFs of ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z @ 0x18018E430
 * Callers:
 *     ?Thunk_SendHapticFeedbackForDuration_315@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018F140 (-Thunk_SendHapticFeedbackForDuration_315@-$ISimpleHapticsControllerPrincipal_Receive@VBamoSimple.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z @ 0x18018C480 (--0-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 *     ??1?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18018C750 (--1-$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForDuration(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        unsigned __int16 a2,
        float a3,
        int a4)
{
  _QWORD *v7; // rdi
  int v8; // ecx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ebx
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v7[5] + 36LL) == v8 )
        break;
      v7 = (_QWORD *)v7[6];
    }
    while ( v7 );
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>(
    (__int64)v13,
    *(_QWORD *)(*(_QWORD *)(v7[5] + 24LL) + 32LL),
    (__int64)this);
  v10 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v9, a2);
  v11 = v10;
  if ( v10 != -2018375668 && v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD226,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      a4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>((__int64)v13);
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD22A,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
