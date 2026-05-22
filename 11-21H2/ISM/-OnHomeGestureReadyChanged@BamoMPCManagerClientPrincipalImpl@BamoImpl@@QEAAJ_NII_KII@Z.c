/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18015FEE0
 * Callers:
 *     ?Thunk_OnHomeGestureReadyChanged_60@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180160950 (-Thunk_OnHomeGestureReadyChanged_60@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPr.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureReadyChanged(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *this,
        char a2,
        unsigned int a3,
        int a4)
{
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // ebx
  __int64 v19[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

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
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v19,
    *(_QWORD *)(*(_QWORD *)(v8[5] + 24LL) + 32LL),
    v11,
    0);
  LOBYTE(v12) = a2;
  v13 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
          (char *)this - 16,
          v10,
          v12,
          a3);
  v17 = v13;
  if ( v13 != -2018375668 && v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D76,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v13,
      a4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v19,
    v14,
    v15,
    v16);
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D7A,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
