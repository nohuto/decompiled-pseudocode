/*
 * XREFs of ?CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801102A0
 * Callers:
 *     ?Thunk_CreateCursorShape_384@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800681B0 (-Thunk_CreateCursorShape_384@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControl.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028E48 (--1-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerPrincipalImpl@1@@Z @ 0x18010FA58 (--0-$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Mi_ea_18010FA58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorShape(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const struct CursorBitmapDataHeader *a4)
{
  int v4; // r14d
  int v8; // ebx
  _QWORD *v9; // rdi
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v13; // rdi
  int v14; // eax
  _BYTE v16[32]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (int)a4;
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
  v12 = *(_QWORD *)(v9[4] + 24LL);
  v13 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v12 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v12 + 32),
      (void (__fastcall ***)(_QWORD))this);
    v14 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(*((_QWORD *)this - 2) + 136LL))(
            (char *)this - 16,
            v11,
            a2,
            a3);
    v8 = v14;
    if ( v14 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v13, 0x87B2080C, 0);
    }
    else if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FA4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v14,
        v4);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>((__int64)v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
  }
  return (unsigned int)v8;
}
