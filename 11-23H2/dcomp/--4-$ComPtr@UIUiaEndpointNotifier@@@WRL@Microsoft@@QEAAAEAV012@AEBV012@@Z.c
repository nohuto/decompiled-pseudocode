/*
 * XREFs of ??4?$ComPtr@UIUiaEndpointNotifier@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AD70
 * Callers:
 *     ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x18006AB7C (-AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU-$ITyp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IUiaEndpointNotifier>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
  return a1;
}
