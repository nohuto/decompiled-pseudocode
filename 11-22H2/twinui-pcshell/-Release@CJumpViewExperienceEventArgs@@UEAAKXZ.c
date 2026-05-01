/*
 * XREFs of ?Release@CJumpViewExperienceEventArgs@@UEAAKXZ @ 0x180422C10
 * Callers:
 *     ?Release@?$EventInvocationContext@$00@details@wil@@W7EAAKXZ @ 0x1802965B0 (-Release@-$EventInvocationContext@$00@details@wil@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ @ 0x1802965D0 (-Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
