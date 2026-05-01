/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180161510
 * Callers:
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x18006D840 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180161160 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x1801614D0 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  char v1; // bl
  bool v3; // si
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int pvData; // [rsp+70h] [rbp+30h] BYREF
  DWORD pdwType; // [rsp+78h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+40h] BYREF
  HKEY hkey; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 1017) || *((_BYTE *)this + 1018) || *((_BYTE *)this + 1025) )
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
  {
LABEL_7:
    v5 = *((_DWORD *)this + 10);
    if ( v5 > 10 )
    {
      v13 = v5 - 12;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v10 = v15 - 7;
            v9 = v10 == 0;
            goto LABEL_13;
          }
        }
      }
    }
    else if ( v5 != 10 )
    {
      v6 = v5 - 4;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 2;
          if ( v8 )
          {
            v10 = v8 - 1;
            v9 = v10 == 0;
LABEL_13:
            if ( !v9 && v10 != 1 )
              return v1;
          }
        }
      }
    }
    return 1;
  }
  pdwType = 0;
  pcbData = 4;
  if ( !RegGetValueW(hkey, L"Fullscreen", L"FullscreenCXHRunning", 0x10000012u, &pdwType, &pvData, &pcbData) )
  {
    if ( pdwType == 4 )
    {
      v12 = pvData == 1;
      if ( pvData > 1 )
        goto LABEL_26;
LABEL_25:
      v3 = v12;
      goto LABEL_26;
    }
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v12 = (_WORD)pvData == 49;
      goto LABEL_25;
    }
  }
LABEL_26:
  RegCloseKey(hkey);
  if ( !v3 )
    goto LABEL_7;
  return 0;
}
