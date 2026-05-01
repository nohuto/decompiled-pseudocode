/*
 * XREFs of ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x1804AE23C
 * Callers:
 *     ?_ReadGlyphButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGAEAUGlyphButtonMetrics@@@Z @ 0x1804AEEF8 (-_ReadGlyphButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGAEAUGlyphButtonMetric.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18008CF70 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1804AF240 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
        MultitaskingViewConfigHelpers *this,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int *v6; // r9
  unsigned __int16 v7[4]; // [rsp+20h] [rbp-28h] BYREF
  HKEY v8[4]; // [rsp+28h] [rbp-20h] BYREF

  memset(v8, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)v8,
              L"%s_%s",
              a2,
              a3) >= 0
    && MultitaskingViewConfigHelpers::_ReadRegistryValue(this, v8[0], v7, v6) >= 0 )
  {
    *a4 = *(_DWORD *)v7;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
}
