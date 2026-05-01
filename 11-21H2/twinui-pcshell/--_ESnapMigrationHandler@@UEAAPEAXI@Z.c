/*
 * XREFs of ??_ESnapMigrationHandler@@UEAAPEAXI@Z @ 0x180592220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1800AA144 (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_1800AA144.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18015C94C (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

SnapMigrationHandler *__fastcall SnapMigrationHandler::`vector deleting destructor'(
        SnapMigrationHandler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 1);
  while ( v7 >= 0 )
  {
    v5 = v7 - 1;
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v7 - 1, v7);
    if ( v8 == v7 )
      goto LABEL_6;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v7), v4, v5, v6);
LABEL_6:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v4, v5, v6);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
