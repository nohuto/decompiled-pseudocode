/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180136660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInteractingStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180136370 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractio.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>::`vector deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2,IInspectable>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
