/*
 * XREFs of ?NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z @ 0x18015BF40
 * Callers:
 *     ?CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x18015BE18 (-CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     ?Invoke@Partner@CompositionIslandSite@Composition@UI@Windows@@UEAAJI@Z @ 0x18015BEC0 (-Invoke@Partner@CompositionIslandSite@Composition@UI@Windows@@UEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_DeferTransformChanged(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 23) )
  {
    v1 = *((_QWORD *)this + 24);
    v2 = *((_QWORD *)this + 28);
    v3 = v1;
    CoreUICallSend(v2, &v3, 1LL, 6LL);
  }
}
