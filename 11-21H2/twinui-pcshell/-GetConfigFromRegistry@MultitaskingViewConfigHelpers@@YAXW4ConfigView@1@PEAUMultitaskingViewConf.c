/*
 * XREFs of ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804AE39C
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@@Z @ 0x1804A1E70 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1804A4A10 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1804A5EE0 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18008CF70 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804AE5B0 (-GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804AED58 (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804AEF4C (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804AF430 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 */

void __fastcall MultitaskingViewConfigHelpers::GetConfigFromRegistry(__int64 a1, _OWORD *a2)
{
  int v3; // r10d
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  const wchar_t *v7; // r8
  int v8; // eax
  struct GridMetrics *v9; // r8
  struct VirtualDesktopMetrics *v10; // r8
  struct FrameMetrics *v11; // r8
  HKEY v12; // rcx
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  HKEY hKey; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct HKEY__ v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+1D8h] [rbp+D8h]
  struct HKEY__ v31; // [rsp+258h] [rbp+158h] BYREF
  __int64 v32; // [rsp+278h] [rbp+178h]
  __int64 v33; // [rsp+2F0h] [rbp+1F0h]
  struct HKEY__ v34; // [rsp+300h] [rbp+200h] BYREF
  __int64 v35; // [rsp+3B8h] [rbp+2B8h]
  __int64 v36; // [rsp+470h] [rbp+370h]
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  MultitaskingViewConfigHelpers::GetDefaultConfig(a1, v25);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = L"AltTabViewHost";
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = L"SnapAssistView";
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = L"PPIAllUpView";
      goto LABEL_11;
    }
    if ( v6 == 1 )
    {
      v7 = L"TestHost";
      goto LABEL_11;
    }
  }
  v7 = L"AllUpView";
LABEL_11:
  memset(lpSubKey, 0, sizeof(lpSubKey));
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)lpSubKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\%s",
         v7);
  if ( v8 >= 0 )
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey[0], 0, 0x20019u, &hKey) )
    {
      MultitaskingViewConfigHelpers::_ReadGridMetrics((MultitaskingViewConfigHelpers *)hKey, &v26, v9);
      MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics((MultitaskingViewConfigHelpers *)hKey, &v34, v10);
      MultitaskingViewConfigHelpers::_ReadFrameMetrics((MultitaskingViewConfigHelpers *)hKey, &v31, v11);
    }
    v12 = hKey;
    hKey = 0LL;
    if ( v12 )
      RegCloseKey(v12);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\config.cpp",
      (const char *)(unsigned int)v8);
  }
  v13 = 9LL;
  v14 = v25;
  do
  {
    v15 = v14[1];
    *a2 = *v14;
    v16 = v14[2];
    a2[1] = v15;
    v17 = v14[3];
    a2[2] = v16;
    v18 = v14[4];
    a2[3] = v17;
    v19 = v14[5];
    a2[4] = v18;
    v20 = v14[6];
    a2[5] = v19;
    v21 = v14[7];
    v14 += 8;
    a2[6] = v20;
    a2 += 8;
    *(a2 - 1) = v21;
    --v13;
  }
  while ( v13 );
  v22 = v14[1];
  *a2 = *v14;
  a2[1] = v22;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
}
