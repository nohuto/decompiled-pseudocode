/*
 * XREFs of ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4
 * Callers:
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAUICompositionHandle@1Handles@Foundation@5@@Z @ 0x180094200 (-OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObjec.c)
 *     ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8 (-Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICom.c)
 *     ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PEAPEAX@Z @ 0x180128398 (-GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PE.c)
 *     ?OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAX@Z @ 0x180128940 (-OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIComposition.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4 (-ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(
        DirectComposition::CDevice **this,
        struct Windows::UI::Composition::ProxyObject *a2,
        void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = DirectComposition::CDevice::ResourceOpenSharedHandle(this[57], *((_DWORD *)a2 + 32), a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135C,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
