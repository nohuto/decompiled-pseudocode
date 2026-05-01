/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x1800F1854
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5DBC (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0DD4 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F1018 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1802EB0D0 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F18C8 (-IsUserOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // edi
  LSTATUS ValueW; // eax
  int v4; // ecx
  bool v5; // zf
  bool v6; // sf
  DWORD pcbData[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int pvData; // [rsp+80h] [rbp+28h] BYREF
  int v9; // [rsp+88h] [rbp+30h] BYREF
  int v10; // [rsp+90h] [rbp+38h] BYREF
  DWORD pdwType; // [rsp+98h] [rbp+40h] BYREF

  v0 = 0;
  v9 = 0;
  if ( IsUserOOBE() || v9 || (unsigned int)OOBEComplete(&v9) && !v9 )
    return 1;
  v10 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  if ( v10 != 10 )
    return v0;
  pdwType = 0;
  pcbData[0] = 4;
  v2 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
             L"Completed",
             0x10000012u,
             &pdwType,
             &pvData,
             pcbData);
  v4 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      goto LABEL_17;
  }
  else
  {
    if ( pdwType == 4 )
    {
      v5 = pvData == 1;
      if ( pvData > 1 )
        goto LABEL_17;
    }
    else
    {
      if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_17;
      v5 = (_WORD)pvData == 49;
    }
    v4 = 0;
    LOBYTE(v2) = v5;
  }
  v6 = v4 < 0;
  if ( v4 > 0 )
LABEL_17:
    v6 = 1;
  if ( v6 || !v2 )
    return 1;
  return v0;
}
