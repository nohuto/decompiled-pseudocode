/*
 * XREFs of ?RequestHitTest@BamoTestCommandsPrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18019F6AC
 * Callers:
 *     ?Thunk_RequestHitTest_28@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019F990 (-Thunk_RequestHitTest_28@-$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoTestCommandsPrincipalImpl@1@@Z @ 0x18019F220 (--0-$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18019F31C (--1-$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoTestCommandsPrincipalImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v4; // ebp
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (int)a4;
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[5] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[6];
    }
    while ( v8 );
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>(
    (__int64)v14,
    *(_QWORD *)(*(_QWORD *)(v8[5] + 24LL) + 32LL),
    (__int64)this);
  v11 = (*(__int64 (__fastcall **)(char *, __int64, __int64, __int64))(*((_QWORD *)this - 2) + 96LL))(
          (char *)this - 16,
          v10,
          a2,
          a3);
  v12 = v11;
  if ( v11 != -2018375668 && v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE67A,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v4);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>((__int64)v14);
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE67E,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
