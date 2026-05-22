/*
 * XREFs of ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ @ 0x180019160
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0 (-Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180019218 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionEffectFactory::Destroy(
        Windows::UI::Composition::CompositionEffectFactory *this,
        void *a2)
{
  wil::details *v3; // rcx
  __int64 v4; // rcx
  Windows::UI::Composition::BatchController *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (wil::details *)*((_QWORD *)this + 27);
  if ( v3 )
    wil::details::SetEvent(v3, a2);
  Windows::UI::Composition::SharedAllocationHolder::Destroy((Windows::UI::Composition::CompositionEffectFactory *)((char *)this + 160));
  Windows::UI::Composition::ProxyObject::Destroy(this);
  if ( !*((_DWORD *)this + 44) )
  {
    v4 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 44) = 2;
    Windows::UI::Composition::CompositorCommon::GetBatchController(v4, 2LL, &v5);
    Windows::UI::Composition::BatchController::NotifyObjectCompleted(
      v5,
      (Windows::UI::Composition::CompositionEffectFactory *)((char *)this + 200));
  }
}
