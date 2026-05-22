/*
 * XREFs of ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1801859D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCompositionSurfaceBrush@345@PEAVCompositionSwapChain@345@@Z @ 0x1801A1934 (-SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCo.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::Destroy(
        Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  DirectComposition::CDeviceLock *v4; // [rsp+30h] [rbp+8h] BYREF

  Windows::UI::Composition::Internal::CompositionSuperWetInkSource::SetReferenceSwapChain(this, 0LL, 0LL);
  v2 = *((_QWORD *)this + 23);
  if ( v2 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 48LL))(v2 + 16) )
  {
    v4 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 23);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  }
  v3 = *((_QWORD *)this + 24);
  if ( v3 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 48LL))(v3 + 16) )
  {
    v4 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)this + 24);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
