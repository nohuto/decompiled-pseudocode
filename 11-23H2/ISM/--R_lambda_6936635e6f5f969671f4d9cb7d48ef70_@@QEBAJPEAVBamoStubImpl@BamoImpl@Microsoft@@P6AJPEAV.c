/*
 * XREFs of ??R_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@QEBAJPEAVBamoStubImpl@BamoImpl@Microsoft@@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z @ 0x1800AAD3C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@CAJPEAVBamoStubImpl@BamoImpl@Microsoft@@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z @ 0x1800A9EC0 (-_lambda_invoker_cdecl_@_lambda_6936635e6f5f969671f4d9cb7d48ef70_@@CAJPEAVBamoStubImpl@BamoImpl@.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_6936635e6f5f969671f4d9cb7d48ef70_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int128 *),
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        __int64 a7)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v15[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h]
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int64 v19[4]; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v19,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL) + 32LL),
    (__int64)a3,
    0LL);
  *(_OWORD *)v15 = *(_OWORD *)a7;
  v16 = *(_QWORD *)(a7 + 16);
  v17 = *a6;
  v18 = *((_QWORD *)a6 + 2);
  v10 = a3(a2 - 16, a4, a5, &v17);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x180E,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10,
      (int)v15);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v19,
    v11,
    v12,
    v13);
  return 0LL;
}
