/*
 * XREFs of ?NotifyVisualDisposingUnderLock@Private@VisualIslandSite@Composition@UI@Windows@@UEAAJXZ @ 0x180013050
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Private::NotifyVisualDisposingUnderLock(
        Windows::UI::Composition::VisualIslandSite::Private *this)
{
  Microsoft::WRL2::ContextRuntimeClass::Dispose((Windows::UI::Composition::VisualIslandSite::Private *)((char *)this - 264));
  return 0LL;
}
