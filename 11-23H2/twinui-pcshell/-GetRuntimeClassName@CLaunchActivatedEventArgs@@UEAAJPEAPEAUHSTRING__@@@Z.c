/*
 * XREFs of ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801BD8C0
 * Callers:
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD3F0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD410 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBAA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD430 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBAA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD450 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD470 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WKA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD490 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WKA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WKI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD4B0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WKI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD4D0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD4F0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AD510 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::GetRuntimeClassName(CLaunchActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs", 0x3Cu, a2);
}
