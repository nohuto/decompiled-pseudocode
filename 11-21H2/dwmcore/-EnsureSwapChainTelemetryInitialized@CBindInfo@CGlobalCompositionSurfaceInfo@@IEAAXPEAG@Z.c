/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x18006B75C
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180015740 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180069750 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        size_t *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned __int16 *v7; // rax

  if ( CGlobalCompositionSurfaceInfo::IsSwapChain(*(CGlobalCompositionSurfaceInfo **)this) )
  {
    if ( !*((_QWORD *)this + 36) )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *((_WORD *)a2 + v4) );
      v5 = v4 + 1;
      if ( v5 > 1 )
      {
        v6 = v5;
        v7 = (unsigned __int16 *)DefaultHeap::Alloc(saturated_mul(v5, 2uLL));
        *((_QWORD *)this + 36) = v7;
        if ( v7 )
        {
          StringCchCopyW(v7, v6, a2);
          CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry((__int64)this, 0, 1);
        }
      }
    }
  }
}
