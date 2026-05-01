/*
 * XREFs of ?_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUHWND__@@@Z @ 0x18074DFA8
 * Callers:
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18074D5E0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

HANDLE __fastcall ImmersiveContextMenuHelper::_RetrieveParentArrayFromWindow(HWND hWnd)
{
  HANDLE PropW; // rbx
  LPCWSTR lpString[5]; // [rsp+20h] [rbp-28h] BYREF

  PropW = 0LL;
  memset(lpString, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              lpString,
              (__int64)L"ImmersiveContextMenuArray_%lu",
              0xFFFFFFFFLL) >= 0 )
    PropW = GetPropW(hWnd, lpString[0]);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString);
  return PropW;
}
