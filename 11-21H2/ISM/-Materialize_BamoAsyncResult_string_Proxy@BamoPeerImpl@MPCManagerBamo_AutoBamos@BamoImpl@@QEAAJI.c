/*
 * XREFs of ?Materialize_BamoAsyncResult_string_Proxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18009960C
 * Callers:
 *     ?Thunk_Materialize_BamoAsyncResult_string_Proxy_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B8F0 (-Thunk_Materialize_BamoAsyncResult_string_Proxy_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180048740 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::Materialize_BamoAsyncResult_string_Proxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v15; // [rsp+60h] [rbp+8h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    *(_QWORD *)(*((_QWORD *)this + 3) + 32LL),
    a3,
    0);
  v15 = operator new(0x30uLL);
  *v15 = &BamoAsyncResult_string_Proxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v15[1] = &BamoAsyncResult_string_Proxy::`vftable'{for `IAsyncResult_string_Proxy'};
  *((_DWORD *)v15 + 6) = 0;
  v15[4] = 0LL;
  *((_DWORD *)v15 + 10) = 0;
  *((_DWORD *)v15 + 11) = 0;
  v15[2] = &BamoImpl::BamoAsyncResult_string_ProxyImpl::`vftable';
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v13,
    v5,
    v6,
    v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 56LL))(v15);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v8 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v8 + 24) = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 40LL))(
          v9,
          *((unsigned int *)this + 9),
          a2,
          v8);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD30,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
  return 0LL;
}
