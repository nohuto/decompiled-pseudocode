/*
 * XREFs of ?OnTransitionScreenDismissed@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180733B08
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180067A6C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::OnTransitionScreenDismissed(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  if ( this[14].Ptr )
    std::_Func_class<void,>::operator()((__int64)&this[7]);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
