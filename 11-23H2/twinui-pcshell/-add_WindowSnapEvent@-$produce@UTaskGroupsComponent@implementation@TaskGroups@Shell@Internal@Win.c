/*
 * XREFs of ?add_WindowSnapEvent@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18018C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18018C52C (-add@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows_ea_18018C52C.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::add_WindowSnapEvent(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h]

  v9 = a2;
  v5 = a1 + 112;
  if ( !a1 )
    v5 = 128LL;
  AcquireSRWLockExclusive((PSRWLOCK)v5);
  v10 = v5;
  v6 = a1 + 456;
  if ( !a1 )
    v6 = 472LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>::add(
    v6,
    &v8,
    &v9);
  if ( v5 )
    ReleaseSRWLockExclusive((PSRWLOCK)v5);
  *a3 = v8;
  return 0LL;
}
