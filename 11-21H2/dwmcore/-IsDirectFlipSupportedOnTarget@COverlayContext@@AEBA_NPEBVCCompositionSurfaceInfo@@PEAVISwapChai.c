/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x1801B7EE4
 * Callers:
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@II_N@Z @ 0x1800085D8 (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1801B7D5C (-CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV-.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        const struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-30h] BYREF

  v3 = *((_QWORD *)this + 1396);
  v4 = 0;
  if ( v3
    && *(const struct CCompositionSurfaceInfo **)(v3 + 16) == a2
    && *(_QWORD *)(*((_QWORD *)this + 1396) + 24LL) == (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    return 1;
  }
  v7 = *(_QWORD *)a3;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(struct ISwapChainRealization *, __int64 *, _QWORD))(v7 + 144))(a3, &v14, 0LL) >= 0 )
  {
    v8 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this) + 20);
    v9 = *(_QWORD *)a3;
    v15 = v8;
    v10 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(v9 + 48))(a3);
    v11 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 12LL) + 8;
    v12 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v11)(v11, v16);
    v4 = COverlayContext::CheckDirectFlipSupport(this, v14, *(_DWORD *)(v12 + 8), v10, (__int64)&v15);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
  return v4;
}
