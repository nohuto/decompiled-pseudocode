/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJW4MPCSourceKind@@I@Z @ 0x1801601F4
 * Callers:
 *     ?Thunk_OnMenuPressed_21@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801609C0 (-Thunk_OnMenuPressed_21@-$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientPrincipalImpl::OnMenuPressed(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // ebx
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *(_QWORD **)(a1 + 32);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
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
    (__int64)v17,
    *(_QWORD *)(*(_QWORD *)(v6[5] + 24LL) + 32LL),
    v9,
    0);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, v8, a2, a3);
  v14 = v10;
  if ( v10 != -2018375668 && v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2CCC,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10,
      v16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v17,
    v11,
    v12,
    v13);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD0,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
