/*
 * XREFs of ?OnArrangedWindowResizeStarted@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@4567@UArrangedWindowResizeStartedEventArgs@94567@@Z @ 0x18058AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnArrangedWindowResizeStarted(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  signed int v5; // eax
  signed int v6; // eax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a3 + 80LL))(*(_QWORD *)a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a3 + 88LL))(*(_QWORD *)a3, v7 | 2u);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
