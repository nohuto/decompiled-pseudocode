/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLock @ 0x180480BE8
 * Callers:
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180202E1C (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804863A8 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180506E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1805075F0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x180480CF8 (CortanaHelpers--AllowCortanaAboveLockByEnterprisePolicy.c)
 */

char CortanaHelpers::AllowCortanaAboveLock()
{
  int v0; // ebx
  unsigned int ValueW; // eax
  char v2; // cl
  const char *v3; // r9
  bool v4; // zf
  bool v5; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( !IsPPIEdition() && (unsigned __int8)CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy() )
  {
    pcbData = 4;
    v0 = 0;
    pdwType = 0;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"VoiceActivationEnableAboveLockscreen",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    v2 = 1;
    v3 = (const char *)ValueW;
    if ( ValueW )
    {
      if ( ValueW != 234 )
      {
LABEL_11:
        v5 = (int)v3 < 0;
        if ( (int)v3 <= 0 )
          goto LABEL_13;
        goto LABEL_12;
      }
      LOWORD(v3) = 13;
    }
    else
    {
      LOWORD(v3) = 13;
      if ( pdwType == 4 )
      {
        if ( pvData <= 1 )
        {
          v3 = 0LL;
          v4 = pvData == 1;
LABEL_10:
          LOBYTE(v0) = v4;
          goto LABEL_11;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        v3 = 0LL;
        v4 = (_WORD)pvData == 49;
        goto LABEL_10;
      }
    }
LABEL_12:
    v3 = (const char *)((unsigned __int16)v3 | 0x80070000);
    v5 = (int)v3 < 0;
LABEL_13:
    if ( v5 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B,
        (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
        v3);
    }
    else if ( v0 )
    {
      return v2;
    }
    return 0;
  }
  return 0;
}
