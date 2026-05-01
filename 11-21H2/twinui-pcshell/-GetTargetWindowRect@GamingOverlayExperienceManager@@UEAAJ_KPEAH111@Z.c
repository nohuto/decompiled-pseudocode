/*
 * XREFs of ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x180332300
 * Callers:
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x18032FEF0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x18033197C (-GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetTargetWindowRect(
        GamingOverlayExperienceManager *this,
        HWND a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 v8; // rdx
  HRESULT WindowAttribute; // ebx
  HWND ParentIfCoreWindow; // rax
  __int128 pvAttribute; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a3 )
  {
    v8 = 1438LL;
LABEL_3:
    WindowAttribute = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return (unsigned int)WindowAttribute;
  }
  if ( !a4 )
  {
    v8 = 1439LL;
    goto LABEL_3;
  }
  if ( !a5 )
  {
    v8 = 1440LL;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v8 = 1441LL;
    goto LABEL_3;
  }
  *((_QWORD *)this + 146) = a2;
  ParentIfCoreWindow = GamingOverlayExperienceManager::GetParentIfCoreWindow(this, a2);
  pvAttribute = 0LL;
  WindowAttribute = DwmGetWindowAttribute(ParentIfCoreWindow, 9u, &pvAttribute, 0x10u);
  if ( WindowAttribute < 0 )
  {
    v8 = 1451LL;
    goto LABEL_4;
  }
  *a3 = pvAttribute;
  *a4 = DWORD1(pvAttribute);
  *a5 = DWORD2(pvAttribute);
  *a6 = HIDWORD(pvAttribute);
  return 0LL;
}
