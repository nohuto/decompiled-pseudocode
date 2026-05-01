/*
 * XREFs of ?add_RemoteDesktopProcessInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18018E340
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18018E390 (-add@-$event@U-$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundat.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::add_RemoteDesktopProcessInfoChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 248;
  if ( !a1 )
    v5 = 272LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>>::add(
    v5,
    &v7,
    &v8);
  *a3 = v7;
  return 0LL;
}
