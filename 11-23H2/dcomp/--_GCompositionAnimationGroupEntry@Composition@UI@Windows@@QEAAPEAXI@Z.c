/*
 * XREFs of ??_GCompositionAnimationGroupEntry@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1801516B4
 * Callers:
 *     ?Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z @ 0x180151FD8 (-Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z.c)
 *     ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ @ 0x1801520C4 (-RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::CompositionAnimationGroupEntry::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 2);
  operator delete(this);
  return this;
}
