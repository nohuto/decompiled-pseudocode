/*
 * XREFs of ?SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z @ 0x180718C00
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180710218 (-CreateKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6A.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Util::InProcPropertyStore::SetValue(
        Util::InProcPropertyStore *this,
        __int64 a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  const WCHAR *v6; // rax
  const BYTE *lpData; // rdx
  DWORD cbData; // r8d
  LSTATUS v9; // eax
  const WCHAR *v10; // rax
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  Util::CreateKeyForHwnd(&hKey);
  if ( *(_QWORD *)a4 )
  {
    winrt::hstring::c_str(a4);
    v6 = winrt::hstring::c_str(a3);
    v9 = RegSetValueExW(hKey, v6, 0, 1u, lpData, cbData);
  }
  else
  {
    v10 = winrt::hstring::c_str(a3);
    v9 = RegDeleteValueW(hKey, v10);
    if ( (v9 & 0xFFFFFFFD) == 0 )
      goto LABEL_5;
  }
  winrt::check_win32<long>(v9);
LABEL_5:
  if ( hKey )
    RegCloseKey(hKey);
}
