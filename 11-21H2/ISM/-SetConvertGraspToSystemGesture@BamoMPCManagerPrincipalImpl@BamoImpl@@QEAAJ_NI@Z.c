/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18009B1EC
 * Callers:
 *     ?Thunk_SetConvertGraspToSystemGesture_43@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009BA70 (-Thunk_SetConvertGraspToSystemGesture_43@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipal.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetConvertGraspToSystemGesture(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2,
        unsigned int a3)
{
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  int v15; // ebx
  int v17; // [rsp+20h] [rbp-38h]
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF
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
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v18,
    *(_QWORD *)(*(_QWORD *)(v6[5] + 24LL) + 32LL),
    v9,
    0);
  LOBYTE(v10) = a2;
  v11 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
          (char *)this - 16,
          v8,
          v10,
          a3);
  v15 = v11;
  if ( v11 != -2018375668 && v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2944,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v11,
      v17);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v18,
    v12,
    v13,
    v14);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2948,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
