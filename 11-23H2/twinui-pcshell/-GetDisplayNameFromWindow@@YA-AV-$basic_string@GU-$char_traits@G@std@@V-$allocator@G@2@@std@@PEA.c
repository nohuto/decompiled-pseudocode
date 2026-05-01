/*
 * XREFs of ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180628004
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625900 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625BE0 (-GetWindowTitle@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNameFromWindow(__int64 a1, HWND a2)
{
  size_t v4; // rsi
  WCHAR *v5; // rdx
  size_t v6; // rdx
  WCHAR *v7; // rax

  v4 = GetWindowTextLengthW(a2) + 1;
  std::wstring::wstring(a1, v4, 0);
  v5 = (WCHAR *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v5 = *(WCHAR **)a1;
  GetWindowTextW(a2, v5, *(_DWORD *)(a1 + 24));
  v6 = v4 - 1;
  if ( v4 - 1 > *(_QWORD *)(a1 + 16) )
  {
    std::wstring::append((wchar_t *)a1, v6 - *(_QWORD *)(a1 + 16), 0);
  }
  else
  {
    v7 = (WCHAR *)a1;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v7 = *(WCHAR **)a1;
    *(_QWORD *)(a1 + 16) = v6;
    v7[v6] = 0;
  }
  return a1;
}
