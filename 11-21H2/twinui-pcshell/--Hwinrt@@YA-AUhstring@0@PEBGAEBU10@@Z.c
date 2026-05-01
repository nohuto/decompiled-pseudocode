/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x18038E578
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?ParseArgs@UndockedSearchAppExperienceManager@@AEAA?AUWwwFormUrlDecoder@Foundation@Windows@winrt@@AEBUhstring@5@@Z @ 0x18038F5B4 (-ParseArgs@UndockedSearchAppExperienceManager@@AEAA-AUWwwFormUrlDecoder@Foundation@Windows@winrt.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180390130 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 */

__int64 __fastcall winrt::operator+(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v8);
  v5 = -1LL;
  v7[0] = v4;
  do
    ++v5;
  while ( *(_WORD *)(v4 + 2 * v5) );
  v7[1] = v5;
  winrt::impl::concat_hstring(a1, v7, v8);
  return a1;
}
