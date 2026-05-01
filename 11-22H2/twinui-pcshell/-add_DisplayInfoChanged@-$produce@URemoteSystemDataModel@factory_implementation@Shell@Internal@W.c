/*
 * XREFs of ?add_DisplayInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18018E540
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18018E590 (-add@-$event@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::add_DisplayInfoChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 184;
  if ( !a1 )
    v5 = 208LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::add(
    v5,
    &v7,
    &v8);
  *a3 = v7;
  return 0LL;
}
