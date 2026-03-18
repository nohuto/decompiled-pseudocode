/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0004208
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0004260 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C0004600 (NtBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C0077DF0 (-PairedUnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00036FC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  __int64 v4; // rcx
  struct CCompositionBuffer *ActiveBuffer; // rax

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      *((_BYTE *)ActiveBuffer + 40) = 0;
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}
