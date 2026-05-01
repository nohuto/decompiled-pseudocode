/*
 * XREFs of ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801B1C90
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::GetAppId(TouchKeyboardExperienceManager *this, HSTRING *a2)
{
  __int64 CurrentInputAppId; // rax
  winrt::impl *v4; // rcx
  unsigned int v5; // r8d
  winrt::impl *hstring_on_heap; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentInputAppId = TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 200, v8);
  v4 = (winrt::impl *)CurrentInputAppId;
  if ( *(_QWORD *)(CurrentInputAppId + 24) >= 8uLL )
    v4 = *(winrt::impl **)CurrentInputAppId;
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v4, (winrt::impl *)*(unsigned int *)(CurrentInputAppId + 16));
  std::wstring::_Tidy_deallocate((__int64)v8);
  winrt::hstring::operator=((volatile signed __int32 **)a2, &hstring_on_heap, v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&hstring_on_heap);
  return 0LL;
}
