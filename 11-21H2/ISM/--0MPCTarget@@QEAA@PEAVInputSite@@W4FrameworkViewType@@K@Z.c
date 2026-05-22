/*
 * XREFs of ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800F3140
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800F00F0 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800F27F8 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800F3104 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x1800F3A54 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCTarget::MPCTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  int v10; // r8d
  const char *v11; // r9
  __int64 v12; // rcx
  ISMTracing *v13; // rcx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int *v17; // rbx
  _DWORD *CompositionInputQueue; // rcx
  const char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  _DWORD v24[4]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v23 = a1;
  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MPCTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCTarget::`vftable'{for `RefCountedObject'};
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 40) = a3 == 1;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      30LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
  InputSite::GetIdForNamespace(a2, (__int64)&v21, 1);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 48) = v21;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( !*(_BYTE *)(a2 + 480) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        42LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v11);
    v15 = 0LL;
    v16 = v10;
    do
      v24[v15++] = v16++;
    while ( v15 < 4 );
    v17 = v24;
    while ( 1 )
    {
      CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(a2 + 48, *v17);
      if ( (unsigned int)(*CompositionInputQueue - 2) <= 1 )
        break;
      if ( ++v17 == (unsigned int *)&v25 )
      {
        v20 = *(_QWORD *)(a1 + 48);
        goto LABEL_17;
      }
    }
    v20 = (unsigned int)CompositionInputQueue[2];
    *(_QWORD *)(a1 + 48) = v20;
LABEL_17:
    v9 = retaddr;
    if ( !v20 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        63LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v19);
  }
  if ( ISMTracing::IsEnabled((__int64)v9) )
  {
    wil::details::static_lazy<ISMTracing>::get(v12, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_Create_(v13, (struct IMPCTarget *)a1);
  }
  return a1;
}
