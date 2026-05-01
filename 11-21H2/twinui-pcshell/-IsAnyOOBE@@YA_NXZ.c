/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x1800BCF18
 * Callers:
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC7F0 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BCA90 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800E3F08 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E1028 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800BCF8C (-IsUserOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // edi
  LSTATUS ValueW; // eax
  signed int v4; // ecx
  bool v5; // zf
  DWORD pcbData[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int pvData; // [rsp+80h] [rbp+28h] BYREF
  int v8; // [rsp+88h] [rbp+30h] BYREF
  int v9; // [rsp+90h] [rbp+38h] BYREF
  DWORD pdwType; // [rsp+98h] [rbp+40h] BYREF

  v0 = 0;
  v8 = 0;
  if ( IsUserOOBE() || v8 || (unsigned int)OOBEComplete(&v8) && !v8 )
    return 1;
  v9 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v9, 0LL);
  if ( v9 != 10 )
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
    {
      LOWORD(v4) = 13;
    }
    else if ( ValueW <= 0 )
    {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  LOWORD(v4) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData[0] == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v5 = (_WORD)pvData == 49;
      goto LABEL_11;
    }
LABEL_18:
    v4 = (unsigned __int16)v4 | 0x80070000;
    goto LABEL_19;
  }
  v5 = pvData == 1;
  if ( pvData > 1 )
    goto LABEL_18;
LABEL_11:
  v4 = 0;
  LOBYTE(v2) = v5;
LABEL_19:
  if ( v4 < 0 || !v2 )
    return 1;
  return v0;
}
