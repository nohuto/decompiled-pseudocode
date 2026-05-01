/*
 * XREFs of ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18071014C
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 *     ?DeserializeValueSet@RemoteSystemData@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI@Z @ 0x180710E60 (-DeserializeValueSet@RemoteSystemData@@YA-AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RemoteSystemData::RemoteSystem::CreateFromBytes(__int64 a1)
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-8h] BYREF
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp+28h] BYREF

  RemoteSystemData::DeserializeValueSet(&v3);
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 24) = -1;
  v4 = v3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  RemoteSystemData::RemoteSystem::Serialize<RemoteSystemData::Details::ValueSetReader>(a1, &v4);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  return a1;
}
