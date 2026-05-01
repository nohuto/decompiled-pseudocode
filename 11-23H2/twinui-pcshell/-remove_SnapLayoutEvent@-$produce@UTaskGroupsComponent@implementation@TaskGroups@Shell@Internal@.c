/*
 * XREFs of ?remove_SnapLayoutEvent@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18064A530
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EDF4 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::remove_SnapLayoutEvent(
        __int64 a1,
        void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx

  v4 = a1 + 112;
  if ( !a1 )
    v4 = 128LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 504;
  if ( !a1 )
    v5 = 520LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    v5,
    a2);
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  return 0LL;
}
