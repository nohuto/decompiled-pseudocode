/*
 * XREFs of ??1?$com_ptr@USnapMigrationHandler@@@winrt@@QEAA@XZ @ 0x1805A842C
 * Callers:
 *     __lambda_688536045750b024e9c980c09e4232a8_::operator()_winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2_const_&_winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs_const_&__::_1_::dtor$0 @ 0x1805A818C (__lambda_688536045750b024e9c980c09e4232a8_--operator()_winrt--Windows--Internal--Shell--WindowMa.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ @ 0x1805A8DC0 (-unconditional_release_ref@-$com_ptr@USnapMigrationHandler@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<SnapMigrationHandler>::~com_ptr<SnapMigrationHandler>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<SnapMigrationHandler>::unconditional_release_ref(a1);
  return result;
}
