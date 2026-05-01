/*
 * XREFs of ?ParseArgs@UndockedSearchAppExperienceManager@@AEAA?AUWwwFormUrlDecoder@Foundation@Windows@winrt@@AEBUhstring@5@@Z @ 0x18038F5B4
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180024BE0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?AUUri@Foundation@Windows@2@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18038D6EC (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x18038E578 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUri@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x18038E96C (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWwwFormUrlDecoder@Foundation@Windows@3@XZ @ 0x18038F790 (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall UndockedSearchAppExperienceManager::ParseArgs(
        volatile signed __int32 *a1,
        __int64 a2,
        winrt::hstring *a3)
{
  winrt::impl *v4; // rax
  winrt::impl *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[6]; // [rsp+28h] [rbp-30h] BYREF
  struct winrt::impl::hstring_header *hstring_on_heap; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF
  _QWORD *v20; // [rsp+80h] [rbp+28h] BYREF
  volatile signed __int32 *v21; // [rsp+88h] [rbp+30h] BYREF

  v19 = a2;
  hstring_on_heap = (struct winrt::impl::hstring_header *)a1;
  v4 = (winrt::impl *)winrt::hstring::c_str(a3);
  if ( (_DWORD)v5 )
  {
    v7 = v6 ? *(_QWORD *)(v6 + 16) : 0LL;
    v8 = (unsigned int)((_DWORD)v5 - 1);
    if ( *(_WORD *)(v7 + 2 * v8) == 47 )
      v5 = (winrt::impl *)(unsigned int)v8;
  }
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v4, v5);
  v17[0] = *(_QWORD *)winrt::operator+((__int64)&v21, (__int64)L"ms-search://search?", (__int64 *)&hstring_on_heap);
  v20 = v17;
  _InterlockedIncrement64(&qword_1807B5D48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v19,
      v17);
    _InterlockedDecrement64(&qword_1807B5D48);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B5D48);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v9,
      (__int64)&v19,
      &v20);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21, v10, v11, v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&hstring_on_heap, v13, v14, v15);
  winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
    &v19,
    a2);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  return a2;
}
