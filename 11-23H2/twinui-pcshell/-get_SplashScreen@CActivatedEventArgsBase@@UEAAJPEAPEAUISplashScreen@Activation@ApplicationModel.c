/*
 * XREFs of ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x18073AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::get_SplashScreen(
        CActivatedEventArgsBase *this,
        struct Windows::ApplicationModel::Activation::ISplashScreen **a2)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  AcquireSRWLockShared((PSRWLOCK)this + 18);
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)this + 11);
  *a2 = (struct Windows::ApplicationModel::Activation::ISplashScreen *)*((_QWORD *)this + 11);
  if ( this != (CActivatedEventArgsBase *)-144LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 18);
  return 0LL;
}
