/*
 * XREFs of ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800EE020
 * Callers:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18006ED68 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EF0A0 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18009AF94 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Release(__int64 a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  }
  return v2;
}
