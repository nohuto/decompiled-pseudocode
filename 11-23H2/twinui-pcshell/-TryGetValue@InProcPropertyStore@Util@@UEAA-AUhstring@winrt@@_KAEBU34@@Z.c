/*
 * XREFs of ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x1807193D0
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x18070CCA4 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180719990 (-TryOpenKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall Util::InProcPropertyStore::TryGetValue(
        __int64 a1,
        winrt::hstring *a2,
        __int64 a3,
        winrt::hstring *a4)
{
  HKEY v6; // rbx
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  unsigned __int16 *v9; // rdi
  LSTATUS ValueW; // eax
  DWORD pcbData; // [rsp+40h] [rbp-28h] BYREF
  DWORD pdwType; // [rsp+48h] [rbp-20h] BYREF
  HKEY hkey; // [rsp+50h] [rbp-18h] BYREF
  PVOID Block; // [rsp+58h] [rbp-10h] BYREF

  Util::TryOpenKeyForHwnd(&hkey, a3);
  v6 = hkey;
  if ( hkey )
  {
    pcbData = 0;
    v7 = winrt::hstring::c_str(a4);
    if ( !RegGetValueW(v6, 0LL, v7, 2u, &pdwType, 0LL, &pcbData) )
    {
      std::make_unique<unsigned short [0],0>(&Block, ++pcbData);
      v8 = winrt::hstring::c_str(a4);
      v9 = (unsigned __int16 *)Block;
      ValueW = RegGetValueW(v6, 0LL, v8, 2u, 0LL, Block, &pcbData);
      winrt::check_win32<long>(ValueW);
      v9[pcbData - 1] = 0;
      winrt::hstring::hstring(a2, v9);
      if ( v9 )
        operator delete[](v9);
      goto LABEL_7;
    }
  }
  winrt::hstring::hstring(a2, &LocaleName);
  if ( v6 )
LABEL_7:
    RegCloseKey(v6);
  return a2;
}
