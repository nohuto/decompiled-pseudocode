/*
 * XREFs of ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x18041E580
 * Callers:
 *     ?subtract_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1800F7ED8 (-subtract_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHo.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180423740 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::Release(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v5; // edi

  v5 = _InterlockedDecrement(a1 + 7);
  if ( !v5 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
    operator delete((void *)a1);
  }
  return v5;
}
