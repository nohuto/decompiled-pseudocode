/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136E60
 * Callers:
 *     ?AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AF3A0 (-AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@W7EAA.c)
 *     ?AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AF3C0 (-AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WCI@E.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800AF3E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_1800AF3E0.c)
 *     ?AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AF400 (-AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@E.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerCustomAnimationStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800AF420 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_1800AF420.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
