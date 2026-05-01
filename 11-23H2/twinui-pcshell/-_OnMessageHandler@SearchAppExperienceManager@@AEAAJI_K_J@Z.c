/*
 * XREFs of ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18045F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@J@Z @ 0x18045CB24 (--$InvokeAll@PEAVSearchAppExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVCortanaEx.c)
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18045F8FC (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1804605D0 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnMessageHandler(
        SearchAppExperienceManager *this,
        int a2,
        SearchAppExperienceManager *a3,
        int a4)
{
  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 114) )
    {
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 118) )
    {
      SearchAppExperienceManager::_OnDeferredSuspensionTimer(this);
    }
  }
  else if ( a3 == this )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,long>(
      (__int64)this + 312,
      (__int64)this,
      a4);
  }
  return 0LL;
}
