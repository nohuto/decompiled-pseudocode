/*
 * XREFs of ??1?$com_array@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x1806798E0
 * Callers:
 *     _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$2 @ 0x18067AA31 (_SnapFlyoutHost--GetSuggestedWindowPositions_--_1_--dtor$2.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ??_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x1802EA000 (--_GRegistrationData@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void __fastcall winrt::com_array<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::~com_array<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v1; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v3; // rsi

  v1 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v1 + 8 * *(unsigned int *)(a1 + 8));
    while ( v1 != v3 )
    {
      winrt::Windows::Internal::Shell::RegistrationData::`scalar deleting destructor'(v1);
      v1 = (winrt::Windows::Internal::Shell::RegistrationData *)((char *)v1 + 8);
    }
    CoTaskMemFree_0(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
