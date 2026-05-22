/*
 * XREFs of ?DestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1800E8E58
 * Callers:
 *     ?Thunk_DestroyCursorShape_353@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800EA370 (-Thunk_DestroyCursorShape_353@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorContro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerPrincipalImpl@1@@Z @ 0x1800E80CC (--0-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E81C8 (--1-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::DestroyCursorShape(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v6[5] + 36LL) == v7 )
        break;
      v6 = (_QWORD *)v6[6];
    }
    while ( v6 );
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>(
    (__int64)v13,
    *(_QWORD *)(*(_QWORD *)(v6[5] + 24LL) + 32LL),
    (__int64)this);
  v9 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(*((_QWORD *)this - 2) + 144LL))(
         (char *)this - 16,
         v8,
         a2,
         a3);
  v10 = v9;
  if ( v9 != -2018375668 && v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDFDD,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>((__int64)v13);
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDFE1,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
