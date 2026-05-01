/*
 * XREFs of ??1?$implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@winrt@@UEAA@XZ @ 0x180591994
 * Callers:
 *     _SnapMigrationHandler::SnapMigrationHandler_::_1_::dtor$0 @ 0x18021B0D5 (_SnapMigrationHandler--SnapMigrationHandler_--_1_--dtor$0.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18015C94C (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::~implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v4 = *(_QWORD *)(a1 + 8);
  while ( v4 >= 0 )
  {
    a2 = v4 - 1;
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v4 - 1, v4);
    if ( v5 == v4 )
      return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v4), a2, a3, a4);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
}
