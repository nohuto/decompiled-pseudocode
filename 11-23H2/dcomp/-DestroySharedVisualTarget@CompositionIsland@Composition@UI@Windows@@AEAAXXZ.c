/*
 * XREFs of ?DestroySharedVisualTarget@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18011223C
 * Callers:
 *     ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z @ 0x180111E48 (-Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposit.c)
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180060B30 (-SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::DestroySharedVisualTarget(
        Windows::UI::Composition::CompositionIsland *this)
{
  Windows::UI::Composition::VisualTarget *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx

  v2 = (Windows::UI::Composition::VisualTarget *)*((_QWORD *)this + 46);
  if ( v2 )
  {
    Windows::UI::Composition::VisualTarget::SetRoot(v2, 0LL);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(*((Microsoft::WRL2::ContextRuntimeClass **)this + 46));
    v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 46);
    if ( v3 )
    {
      *((_QWORD *)this + 46) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
    }
  }
}
