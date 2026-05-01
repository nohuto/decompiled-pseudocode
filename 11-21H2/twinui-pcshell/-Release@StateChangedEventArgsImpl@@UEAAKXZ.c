/*
 * XREFs of ?Release@StateChangedEventArgsImpl@@UEAAKXZ @ 0x1805635D0
 * Callers:
 *     ?Release@StateChangedEventArgsImpl@@W7EAAKXZ @ 0x18020DA70 (-Release@StateChangedEventArgsImpl@@W7EAAKXZ.c)
 *     ?Release@StateChangedEventArgsImpl@@WBA@EAAKXZ @ 0x18020DA90 (-Release@StateChangedEventArgsImpl@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall StateChangedEventArgsImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
