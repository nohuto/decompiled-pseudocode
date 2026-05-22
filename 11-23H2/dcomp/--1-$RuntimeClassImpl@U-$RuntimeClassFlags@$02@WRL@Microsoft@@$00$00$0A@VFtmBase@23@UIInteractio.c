/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180136370
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180136660 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerInter.c)
 *     ??_EInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801367A0 (--_EInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(a1 + 32));
}
