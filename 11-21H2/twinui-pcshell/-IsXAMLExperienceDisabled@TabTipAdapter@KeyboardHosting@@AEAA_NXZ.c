/*
 * XREFs of ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180471FBC
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled(KeyboardHosting::TabTipAdapter *this)
{
  KeyboardHosting::TabTipAdapter *pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  pvData = this;
  if ( !byte_1807B68C5 )
  {
    LODWORD(pvData) = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"DisableNewKeyboardExperience",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
    {
      if ( (_DWORD)pvData == 1 )
      {
LABEL_8:
        byte_1807B68C4 = 1;
        goto LABEL_9;
      }
      if ( !(_DWORD)pvData )
      {
        byte_1807B68C4 = 0;
LABEL_9:
        byte_1807B68C5 = 1;
        return byte_1807B68C4;
      }
    }
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"DisableNewKeyboardExperience",
           0x10u,
           0LL,
           &pvData,
           &pcbData)
      || (_DWORD)pvData != 1 )
    {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  return byte_1807B68C4;
}
