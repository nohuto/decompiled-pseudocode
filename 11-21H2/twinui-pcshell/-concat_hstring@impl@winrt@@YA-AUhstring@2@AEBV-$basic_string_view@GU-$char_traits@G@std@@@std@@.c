/*
 * XREFs of ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180390130
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x18038E578 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800F7820 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_1 @ 0x18022B0C0 (memcpy_s_1.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::concat_hstring(
        struct winrt::impl::shared_hstring_header **a1,
        __int64 a2,
        __int64 a3)
{
  winrt::impl *v6; // rcx
  struct winrt::impl::shared_hstring_header *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = (winrt::impl *)(unsigned int)(*(_DWORD *)(a2 + 8) + *(_DWORD *)(a3 + 8));
  if ( (_DWORD)v6 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap(v6);
    memcpy_s_1(*((void *const *)v7 + 2), 2LL * *(_QWORD *)(a2 + 8), *(const void *const *)a2, 2LL * *(_QWORD *)(a2 + 8));
    memcpy_s_1(
      (void *const)(*((_QWORD *)v7 + 2) + 2LL * *(_QWORD *)(a2 + 8)),
      2LL * *(_QWORD *)(a3 + 8),
      *(const void *const *)a3,
      2LL * *(_QWORD *)(a3 + 8));
    v12 = 0LL;
    *a1 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12, v8, v9, v10);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
