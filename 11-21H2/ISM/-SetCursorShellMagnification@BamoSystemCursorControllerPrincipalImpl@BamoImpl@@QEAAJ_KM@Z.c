/*
 * XREFs of ?SetCursorShellMagnification@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_KM@Z @ 0x1800E9D34
 * Callers:
 *     ?Thunk_SetCursorShellMagnification_339@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800EA3B0 (-Thunk_SetCursorShellMagnification_339@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCur.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerPrincipalImpl@1@@Z @ 0x1800E80CC (--0-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E81C8 (--1-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetCursorShellMagnification(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        __int64 a2,
        float a3)
{
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // ebx
  int v11; // [rsp+20h] [rbp-48h]
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v5[5] + 36LL) == v6 )
        break;
      v5 = (_QWORD *)v5[6];
    }
    while ( v5 );
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>(
    (__int64)v12,
    *(_QWORD *)(*(_QWORD *)(v5[5] + 24LL) + 32LL),
    (__int64)this);
  v8 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v7, a2);
  v9 = v8;
  if ( v8 != -2018375668 && v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDF66,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v11);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>((__int64)v12);
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF6A,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
