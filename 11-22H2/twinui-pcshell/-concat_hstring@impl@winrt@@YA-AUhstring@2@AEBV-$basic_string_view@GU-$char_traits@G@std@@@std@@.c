/*
 * XREFs of ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800B5630
 * Callers:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18070EFA4 (--Hwinrt@@YA-AUhstring@0@AEBU10@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18072840C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     memcpy_s @ 0x1800B56CC (memcpy_s.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800D214C (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::concat_hstring(
        struct winrt::impl::shared_hstring_header **a1,
        __int64 a2,
        __int64 a3)
{
  winrt::impl *v6; // rcx
  struct winrt::impl::shared_hstring_header *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v6 = (winrt::impl *)(unsigned int)(*(_DWORD *)(a2 + 8) + *(_DWORD *)(a3 + 8));
  if ( (_DWORD)v6 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap(v6, a2);
    memcpy_s(*((void *const *)v7 + 2), 2LL * *(_QWORD *)(a2 + 8), *(const void *const *)a2, 2LL * *(_QWORD *)(a2 + 8));
    memcpy_s(
      (void *const)(*((_QWORD *)v7 + 2) + 2LL * *(_QWORD *)(a2 + 8)),
      2LL * *(_QWORD *)(a3 + 8),
      *(const void *const *)a3,
      2LL * *(_QWORD *)(a3 + 8));
    v9 = 0LL;
    *a1 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
