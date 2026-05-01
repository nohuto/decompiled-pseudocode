/*
 * XREFs of ?Release@?$EventInvocationContextProvider@$00@details@wil@@UEAAKXZ @ 0x1801626D0
 * Callers:
 *     ?Release@?$EventInvocationContextProvider@$00@details@wil@@W7EAAKXZ @ 0x1801F8ED0 (-Release@-$EventInvocationContextProvider@$00@details@wil@@W7EAAKXZ.c)
 *     ?Release@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ @ 0x1801F8EF0 (-Release@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::details::EventInvocationContextProvider<1>::Release(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(a1);
}
