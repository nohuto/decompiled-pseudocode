/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E4A0
 * Callers:
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18012E2A0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x18012E3A0 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x18012E460 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  char v1; // bl
  bool v3; // di
  int v4; // eax
  int v5; // eax
  bool v7; // zf
  unsigned int pvData; // [rsp+70h] [rbp+30h] BYREF
  DWORD pdwType; // [rsp+78h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+40h] BYREF
  HKEY hkey; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 1025) || *((_BYTE *)this + 1026) )
    return 0;
  v3 = 0;
  v4 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\CloudExperienceHost",
         0,
         0x20019u,
         &hkey);
  if ( v4 > 0 )
    v4 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 < 0 )
    goto LABEL_6;
  pdwType = 0;
  pcbData = 4;
  if ( RegGetValueW(hkey, L"Fullscreen", L"FullscreenCXHRunning", 0x10000012u, &pdwType, &pvData, &pcbData) )
    goto LABEL_21;
  if ( pdwType == 4 )
  {
    v7 = pvData == 1;
    if ( pvData > 1 )
      goto LABEL_21;
LABEL_20:
    v3 = v7;
    goto LABEL_21;
  }
  if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
  {
    v7 = (_WORD)pvData == 49;
    goto LABEL_20;
  }
LABEL_21:
  RegCloseKey(hkey);
  if ( v3 )
    return 0;
LABEL_6:
  v5 = *((_DWORD *)this + 10);
  if ( v5 >= 4 && (v5 <= 5 || v5 > 6 && (v5 <= 10 || v5 > 11 && (v5 <= 14 || (unsigned int)(v5 - 21) <= 1))) )
    return 1;
  return v1;
}
