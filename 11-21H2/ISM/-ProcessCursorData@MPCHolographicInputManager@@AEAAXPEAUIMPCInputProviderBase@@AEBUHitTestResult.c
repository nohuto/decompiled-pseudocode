/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800A023C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18009D9E0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18009E560 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellCont.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800A533C (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r12d
  MPCHolographicInputManager *v9; // rcx
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // al
  int v14; // eax
  struct _Mtx_internal_imp_t *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // xmm8_4
  int v19; // xmm7_4
  int v20; // xmm6_4
  __int64 v21; // rdx
  __int64 v22; // r8
  const char *v23; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rdi
  int (__fastcall *v25)(struct IMPCInputPostProcessor *, _QWORD, __int64 *); // rbx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-60h] BYREF
  struct _Mtx_internal_imp_t *v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  int v32; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      901LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(a5 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(a5 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(a5 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(a5 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)a5 = *(_OWORD *)(a3 + 256);
  *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 272);
  *(_BYTE *)(a5 + 136) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(a5 + 152) = v5;
  *(_DWORD *)(a5 + 132) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(a5 + 160) = 0;
  *(_QWORD *)(a5 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(a5 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(a5 + 161) = *(_BYTE *)a3;
  v10 = 1;
  if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v9, a2) )
    LODWORD(v11) = 1;
  else
    v11 = (__int64)(*(_QWORD *)(a1 + 3608) - *(_QWORD *)(a1 + 3600)) >> 3;
  *(_DWORD *)(a5 + 164) = v11;
  *(_DWORD *)(a5 + 168) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 312LL))(a2);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a3 + 288);
  *(_QWORD *)(a5 + 184) = *(_QWORD *)(a3 + 296);
  *(_QWORD *)(a5 + 192) = *(_QWORD *)(a3 + 304);
  LOBYTE(v29) = 0;
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent>::GetImpl'::`2'::impl,
    v12);
  if ( *(_BYTE *)(a3 + 398) )
  {
    v13 = *(_BYTE *)(a3 + 72) == 0;
    LOBYTE(v29) = v13;
  }
  else
  {
    if ( v5 == 1 )
    {
      v14 = MPCCursorManager::ProcessProviderHitTest(
              *(MPCCursorManager **)(a1 + 3384),
              a2,
              (const struct HitTestResult3D *)a3,
              (bool *)&v29);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x39F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v14,
          v29);
    }
    v13 = v29;
  }
  if ( !v13 && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) )
    v10 = 0;
  *(_BYTE *)(a5 + 160) = v10;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) && v5 )
  {
    *(_BYTE *)(a5 + 24) = 0;
    *(_BYTE *)(a5 + 72) = 0;
  }
  v15 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3336) + 128LL))(*(_QWORD *)(a1 + 3336));
  v30 = v15;
  v16 = _Mtx_lock(v15);
  if ( v16 )
    std::_Throw_C_error(v16);
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3328) + 112LL))(*(_QWORD *)(a1 + 3328), a5);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3AE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v17,
      v29);
  _Mtx_unlock(v15);
  v18 = *(_DWORD *)(a3 + 52);
  v19 = *(_DWORD *)(a3 + 56);
  v20 = *(_DWORD *)(a3 + 60);
  v31 = 0LL;
  v32 = 0;
  PostProcessor = MPCHolographicInputManager::GetPostProcessor((MPCHolographicInputManager *)a1, v21, v22, v23);
  v25 = *(int (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, __int64 *))(*(_QWORD *)PostProcessor + 120LL);
  v26 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
  if ( v25(PostProcessor, v26, &v31) >= 0 )
  {
    v20 = v32;
    v19 = HIDWORD(v31);
    v18 = v31;
  }
  *(_DWORD *)(a1 + 240) = v18;
  *(_DWORD *)(a1 + 244) = v19;
  *(_DWORD *)(a1 + 248) = v20;
  v27 = Windows::Foundation::Numerics::transform(&v30, a1 + 240, a1 + 16);
  *(_QWORD *)(a1 + 252) = *(_QWORD *)v27;
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(v27 + 8);
  *(_OWORD *)(a1 + 3400) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 3416) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 3432) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 3448) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 3464) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 3480) = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a1 + 3496) = *(_OWORD *)(a5 + 96);
  *(_OWORD *)(a1 + 3512) = *(_OWORD *)(a5 + 112);
  *(_OWORD *)(a1 + 3528) = *(_OWORD *)(a5 + 128);
  *(_OWORD *)(a1 + 3544) = *(_OWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 3560) = *(_OWORD *)(a5 + 160);
  *(_OWORD *)(a1 + 3576) = *(_OWORD *)(a5 + 176);
  result = *(_QWORD *)(a5 + 192);
  *(_QWORD *)(a1 + 3592) = result;
  return result;
}
