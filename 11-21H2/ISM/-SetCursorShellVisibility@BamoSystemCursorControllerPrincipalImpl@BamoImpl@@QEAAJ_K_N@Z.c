/*
 * XREFs of ?SetCursorShellVisibility@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K_N@Z @ 0x1800E9F70
 * Callers:
 *     ?Thunk_SetCursorShellVisibility_335@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800EA3D0 (-Thunk_SetCursorShellVisibility_335@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerPrincipalImpl@1@@Z @ 0x1800E80CC (--0-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E81C8 (--1-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetCursorShellVisibility(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        __int64 a2,
        char a3)
{
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // r9
  int v10; // eax
  int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF
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
    (__int64)v14,
    *(_QWORD *)(*(_QWORD *)(v6[5] + 24LL) + 32LL),
    (__int64)this);
  LOBYTE(v9) = a3;
  v10 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(*((_QWORD *)this - 2) + 112LL))(
          (char *)this - 16,
          v8,
          a2,
          v9);
  v11 = v10;
  if ( v10 != -2018375668 && v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDF4A,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v13);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>((__int64)v14);
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF4E,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
