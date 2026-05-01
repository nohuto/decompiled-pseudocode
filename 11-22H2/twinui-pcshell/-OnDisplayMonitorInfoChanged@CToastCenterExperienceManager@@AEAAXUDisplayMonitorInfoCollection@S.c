/*
 * XREFs of ?OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@3456@@Z @ 0x180437850
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0808 (-OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@X.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChanged(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  char v5; // [rsp+48h] [rbp+20h] BYREF

  CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(a1, &v5);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
