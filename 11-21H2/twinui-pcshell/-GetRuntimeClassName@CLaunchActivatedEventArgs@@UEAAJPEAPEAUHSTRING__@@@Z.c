/*
 * XREFs of ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180180330
 * Callers:
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1802108C0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802108E0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBAA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180210900 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBAA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180210920 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180210940 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WKA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180210960 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WKA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WKI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180210980 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WKI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802109A0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802109C0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802109E0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::GetRuntimeClassName(CLaunchActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs", 0x3Cu, a2);
}
