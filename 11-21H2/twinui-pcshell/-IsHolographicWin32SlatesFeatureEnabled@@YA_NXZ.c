/*
 * XREFs of ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800982E0
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180097FF0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009B320 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009CA90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7590 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1803D2BD8 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

char IsHolographicWin32SlatesFeatureEnabled(void)
{
  const char *v0; // r9
  int ValueW; // eax
  int LastError; // eax
  bool v4; // sf
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
         0,
         &fPending,
         0LL) )
  {
    if ( fPending )
    {
      pvData = 0;
      pcbData = 4;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
                 L"ClassicAppsEnabled",
                 0x20000018u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW > 0 )
        ValueW = (unsigned __int16)ValueW | 0x80070000;
      if ( ValueW < -2147024894 )
      {
        v4 = ValueW < 0;
      }
      else
      {
        if ( ValueW <= -2147024893 || ValueW == -2147023728 )
        {
          `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = 1;
LABEL_8:
          InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
          return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
        }
        v4 = ValueW < 0;
        if ( !ValueW )
        {
          `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = pvData == 1;
          goto LABEL_8;
        }
      }
      if ( v4 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
          (const char *)(unsigned int)ValueW,
          v6);
      goto LABEL_8;
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x243, (unsigned int)"wil", v0);
    if ( LastError < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
        (const char *)(unsigned int)LastError,
        v5);
  }
  return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
}
