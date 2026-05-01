/*
 * XREFs of ?OnSuggestionsHidden@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x18045E290
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x18045CA9C (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnSuggestionsHidden(
        SearchAppExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
      v1 + 144,
      v1);
}
