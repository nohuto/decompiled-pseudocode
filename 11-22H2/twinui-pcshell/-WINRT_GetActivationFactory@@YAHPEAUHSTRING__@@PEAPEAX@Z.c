/*
 * XREFs of ?WINRT_GetActivationFactory@@YAHPEAUHSTRING__@@PEAPEAX@Z @ 0x1800B547C
 * Callers:
 *     DllGetActivationFactory @ 0x1800B5470 (DllGetActivationFactory.c)
 * Callees:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800852E8 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B555C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18017DC90 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

__int64 __fastcall WINRT_GetActivationFactory(HSTRING a1, void **a2, __int64 a3, __int64 a4)
{
  void *activation_factory; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  Microsoft::WRL::Details *v9; // rax
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  HSTRING v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a1;
  winrt::hstring::operator std::basic_string_view<unsigned short>(&v12, v11, a3, a4);
  try
  {
    activation_factory = (void *)winrt_get_activation_factory();
    *a2 = activation_factory;
    if ( activation_factory )
    {
      result = 0LL;
    }
    else
    {
      v9 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create(v7);
      result = Microsoft::WRL::Details::GetActivationFactory<1>(v9, v10, a1, a2);
    }
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v13);
  }
  return result;
}
