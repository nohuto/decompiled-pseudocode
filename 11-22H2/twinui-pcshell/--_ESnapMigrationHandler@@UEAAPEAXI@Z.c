/*
 * XREFs of ??_ESnapMigrationHandler@@UEAAPEAXI@Z @ 0x18065F970
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x18012B0FC (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_18012B0FC.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

SnapMigrationHandler *__fastcall SnapMigrationHandler::`vector deleting destructor'(
        SnapMigrationHandler *this,
        char a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 3);
  v4 = *((_QWORD *)this + 1);
  while ( v4 >= 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v4 - 1, v4);
    if ( v5 == v4 )
      goto LABEL_6;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v4));
LABEL_6:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
