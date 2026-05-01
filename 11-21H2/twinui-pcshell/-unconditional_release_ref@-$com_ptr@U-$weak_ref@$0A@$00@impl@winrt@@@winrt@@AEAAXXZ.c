/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180423740
 * Callers:
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800FAFF4 (-make_weak_ref@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::weak_ref<0,1>>::unconditional_release_ref(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v5; // rcx

  v5 = *a1;
  *a1 = 0LL;
  return winrt::impl::weak_ref<0,1>::Release(v5, a2, a3, a4);
}
