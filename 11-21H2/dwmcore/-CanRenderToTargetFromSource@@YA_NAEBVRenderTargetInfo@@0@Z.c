/*
 * XREFs of ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x180086D24
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180058B9C (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180059058 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x18005945C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180086BB4 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800DE490 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 * Callees:
 *     <none>
 */

char __fastcall CanRenderToTargetFromSource(const struct RenderTargetInfo *a1, const struct RenderTargetInfo *a2)
{
  int v3; // eax
  int v4; // ecx
  char v5; // cl

  if ( *(_DWORD *)a2 != *(_DWORD *)a1 )
    return 0;
  if ( *((_DWORD *)a2 + 1) != *((_DWORD *)a1 + 1) )
    return 0;
  v3 = *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a2 + 2);
  if ( v4 != DisplayId::None && v4 != v3 && v3 != DisplayId::All )
    return 0;
  v5 = 1;
  if ( (*((float *)a2 + 4) != 0.0) != (*((float *)a1 + 4) != 0.0) || *((_BYTE *)a2 + 20) != *((_BYTE *)a1 + 20) )
    return 0;
  return v5;
}
