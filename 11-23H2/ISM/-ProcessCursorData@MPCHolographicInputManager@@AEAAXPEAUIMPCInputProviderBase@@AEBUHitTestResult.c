/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800B7A54
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800B4C00 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800B5790 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800B95F0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800BD240 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
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
  char v12; // al
  int v13; // eax
  struct _Mtx_internal_imp_t *v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rdi
  int (__fastcall *v21)(struct IMPCInputPostProcessor *, _QWORD, struct _Mtx_internal_imp_t **); // rbx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 result; // rax
  int v25; // [rsp+20h] [rbp-30h] BYREF
  struct _Mtx_internal_imp_t *v26; // [rsp+28h] [rbp-28h] BYREF
  int v27; // [rsp+30h] [rbp-20h]
  struct _Mtx_internal_imp_t *v28; // [rsp+38h] [rbp-18h] BYREF
  int v29; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x378,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
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
  LOBYTE(v25) = 0;
  if ( *(_BYTE *)(a3 + 398) )
  {
    v12 = *(_BYTE *)(a3 + 72) == 0;
    LOBYTE(v25) = v12;
    goto LABEL_12;
  }
  if ( v5 == 1 )
  {
    v13 = MPCCursorManager::ProcessProviderHitTest(
            *(MPCCursorManager **)(a1 + 3384),
            a2,
            (const struct HitTestResult3D *)a3,
            (bool *)&v25);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x392,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v13,
        v25);
    v12 = v25;
LABEL_12:
    if ( v12 )
      goto LABEL_15;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) )
    v10 = 0;
LABEL_15:
  *(_BYTE *)(a5 + 160) = v10;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 80LL))(**(_QWORD **)(a1 + 3600)) && v5 )
  {
    *(_BYTE *)(a5 + 24) = 0;
    *(_BYTE *)(a5 + 72) = 0;
  }
  v14 = (struct _Mtx_internal_imp_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3336) + 128LL))(*(_QWORD *)(a1 + 3336));
  v26 = v14;
  v15 = _Mtx_lock(v14);
  if ( v15 )
    std::_Throw_C_error(v15);
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3328) + 112LL))(*(_QWORD *)(a1 + 3328), a5);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v16,
      v25);
  _Mtx_unlock(v14);
  v26 = *(struct _Mtx_internal_imp_t **)(a3 + 52);
  v27 = *(_DWORD *)(a3 + 60);
  v28 = 0LL;
  v29 = 0;
  PostProcessor = MPCHolographicInputManager::GetPostProcessor((MPCHolographicInputManager *)a1, v17, v18, v19);
  v21 = *(int (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, struct _Mtx_internal_imp_t **))(*(_QWORD *)PostProcessor + 120LL);
  v22 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
  if ( v21(PostProcessor, v22, &v28) >= 0 )
  {
    v26 = v28;
    v27 = v29;
  }
  *(_QWORD *)(a1 + 240) = v26;
  *(_DWORD *)(a1 + 248) = v27;
  v23 = Windows::Foundation::Numerics::transform(&v26, a1 + 240, a1 + 16);
  *(_QWORD *)(a1 + 252) = *(_QWORD *)v23;
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(v23 + 8);
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
