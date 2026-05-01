/*
 * XREFs of ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800FC02C
 * Callers:
 *     DllGetActivationFactory @ 0x1800FC020 (DllGetActivationFactory.c)
 * Callees:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x18005B7C8 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180146454 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     ?winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager@@YAPEAXXZ @ 0x1805B5490 (-winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager@@YAPEAXXZ.c)
 */

__int64 __fastcall WINRT_GetActivationFactory(HSTRING a1, void **a2)
{
  char *v4; // rax
  void *Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager; // rax
  Microsoft::WRL::Details *v6; // rax
  __int64 v7; // rdx
  char *i; // rcx
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  HSTRING v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  winrt::hstring::operator std::basic_string_view<unsigned short>(&v12, &v10);
  v4 = &v10[2 * v11];
  if ( 2 * v11 == 122 )
  {
    for ( i = v4 - 2; i + 2 != v10; i -= 2 )
    {
      if ( *(_WORD *)i != *(_WORD *)&i[(char *)L"" - v4] )
        goto LABEL_2;
    }
    Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager = winrt_make_Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager();
  }
  else
  {
LABEL_2:
    Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager = 0LL;
  }
  *a2 = Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager;
  if ( Windows_Internal_Shell_SnapComponent_DesktopSnapLayoutManager )
    return 0LL;
  v6 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return Microsoft::WRL::Details::GetActivationFactory<1>(v6, v7, a1, a2);
}
