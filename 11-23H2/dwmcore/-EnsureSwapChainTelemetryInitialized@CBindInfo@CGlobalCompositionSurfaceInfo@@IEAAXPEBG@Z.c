/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1800EBC9C
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800EBB30 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180032640 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800924E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180134200 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        size_t *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int16 *v8; // rax
  __int64 v9; // r8

  if ( CGlobalCompositionSurfaceInfo::IsSwapChain(*(CGlobalCompositionSurfaceInfo **)this) && !*((_QWORD *)this + 37) )
  {
    v4 = *((_QWORD *)this + 13);
    if ( !v4 )
      v4 = **((_QWORD **)this + 9);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) == 1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *((_WORD *)a2 + v5) );
      v6 = v5 + 1;
      if ( v6 > 1 )
      {
        v7 = v6;
        v8 = (unsigned __int16 *)DefaultHeap::Alloc(saturated_mul(v6, 2uLL));
        *((_QWORD *)this + 37) = v8;
        if ( v8 )
        {
          StringCchCopyW(v8, v7, a2);
          LOBYTE(v9) = 1;
          CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(this, 0LL, v9);
        }
      }
    }
  }
}
