/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18003D270 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003DF5C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801994B0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x180199B14 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801C1220 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1801FF930 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003D75C (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, struct _LUID *a2)
{
  struct IDXGIAdapter1 *v4[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[296]; // [rsp+30h] [rbp-158h] BYREF
  struct _LUID v6; // [rsp+158h] [rbp-30h]

  v4[0] = 0LL;
  *a2 = g_luidZero;
  if ( (int)CDisplayManager::GetPrimaryAdapter(this, v4) >= 0
    && ((int (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v4[0]->lpVtbl->GetDesc1)(v4[0], v5) >= 0 )
  {
    *a2 = v6;
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)v4);
  return (struct _LUID)a2;
}
