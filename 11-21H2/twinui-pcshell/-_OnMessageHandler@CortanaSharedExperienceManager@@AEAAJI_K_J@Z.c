/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x18035DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@J@Z @ 0x18035606C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVCorta.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035DDB8 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035EAB0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        CortanaSharedExperienceManager *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        int a4)
{
  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 112) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 116) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer(this);
    }
  }
  else if ( a3 == this )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,long>(
      (__int64)this + 312,
      (__int64)this,
      a4);
  }
  return 0LL;
}
