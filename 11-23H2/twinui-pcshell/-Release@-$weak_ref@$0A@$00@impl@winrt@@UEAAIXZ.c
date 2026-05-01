/*
 * XREFs of ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x1804F7C30
 * Callers:
 *     ?decrement_strong@?$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ @ 0x1801A0B2C (-decrement_strong@-$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1804F8538 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(Block + 7);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)Block);
  }
  return v2;
}
