/*
 * XREFs of ??_EInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801367F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@6789@UIInteractionTrackerInertiaStateEnteredArgs3@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801363A4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23_ea_1801363A4.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        volatile int *a2)
{
  char v2; // di

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
