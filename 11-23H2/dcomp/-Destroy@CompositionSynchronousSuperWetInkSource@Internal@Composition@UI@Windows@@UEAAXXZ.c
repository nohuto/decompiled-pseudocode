/*
 * XREFs of ?Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180185200
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ?SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCompositionSurfaceBrush@345@PEAVCompositionSwapChain@345@@Z @ 0x1801A1934 (-SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCo.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Destroy(
        DirectComposition::CDelayedDestructionObject **this)
{
  DirectComposition::CDelayedDestructionObject *v2; // rax
  DirectComposition::CDelayedDestructionObject *v3; // rax
  DirectComposition::CDeviceLock *v4; // [rsp+30h] [rbp+8h] BYREF

  Windows::UI::Composition::Internal::CompositionSuperWetInkSource::SetReferenceSwapChain(
    (Windows::UI::Composition::Internal::CompositionSuperWetInkSource *)this,
    0LL,
    0LL);
  v2 = this[23];
  if ( v2 && *(_QWORD *)(*((_QWORD *)v2 + 6) + 24LL) )
  {
    v4 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this[3] + 57) + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(this + 23);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  }
  v3 = this[25];
  if ( v3 && *(_QWORD *)(*((_QWORD *)v3 + 6) + 24LL) )
  {
    v4 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this[3] + 57) + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(this + 25);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v4);
  }
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
