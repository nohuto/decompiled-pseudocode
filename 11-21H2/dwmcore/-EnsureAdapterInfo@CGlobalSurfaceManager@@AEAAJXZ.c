/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D964
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D7DC (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x180031018 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003DAFC (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DC80 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x18003DDB4 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  __int64 *v1; // r15
  CDisplayManager *v3; // rcx
  int DXGIFactory; // eax
  unsigned int v5; // ecx
  int v6; // edi
  struct IDXGIFactory5 *v7; // rbx
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  struct IDXGIFactory5 *v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  char v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[296]; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID v21; // [rsp+188h] [rbp+88h] BYREF

  v16 = 0LL;
  v1 = (__int64 *)((char *)this + 472);
  std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 472);
  v15 = 0LL;
  DXGIFactory = CDisplayManager::GetDXGIFactory(v3, &v15);
  v6 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DXGIFactory, 0x190u, 0LL);
  }
  else
  {
    v7 = v15;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v7->lpVtbl;
      v18 = 0LL;
      v17 = &v16;
      v19 = 1;
      v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v7, i, &v18);
      if ( v19 )
      {
        v10 = *v17;
        *v17 = v18;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v6 < 0 )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 64LL))(v16, v20);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x198u, 0LL);
        goto LABEL_13;
      }
      v13 = *((_QWORD *)this + 60);
      if ( v13 == *((_QWORD *)this + 61) )
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(v1, v13, &v21);
      else
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_back_with_unused_capacity<_LUID &>(v1, &v21);
    }
    if ( v6 == -2005270526 )
      v6 = 0;
  }
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v16);
  return (unsigned int)v6;
}
