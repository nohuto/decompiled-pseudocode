/*
 * XREFs of ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18005C358
 * Callers:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180052EC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x180162060 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x1805DDD20 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1805F72B0 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
        const WCHAR **a1,
        const WCHAR *a2,
        int a3)
{
  const WCHAR *v3; // r10
  __int64 v5; // rax
  int v6; // r11d
  const WCHAR *v8; // rcx

  v3 = &LocaleName;
  v5 = (__int64)a1[1];
  v6 = a2 != 0LL ? a3 : 0;
  if ( !a2 )
    a2 = &LocaleName;
  if ( v5 == -1 )
  {
    v8 = *a1;
    if ( v8 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v8[v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  if ( *a1 )
    v3 = *a1;
  return CompareStringOrdinal(v3, v5, a2, v6, 0);
}
