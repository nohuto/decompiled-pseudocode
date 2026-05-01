/*
 * XREFs of ?IsLockWidgetCanvasDisabledByUser@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023F474
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByUser(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool v1; // bl
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  bool v4; // zf
  _BOOL8 result; // rax
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v6 = this;
  v8 = 4;
  v7 = 0;
  v1 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Lock Screen",
             L"LockScreenWidgetsEnabled",
             0x10000012u,
             &v7,
             &v6,
             &v8);
  v3 = ValueW;
  if ( ValueW )
  {
    if ( ValueW != 234 )
    {
LABEL_9:
      if ( v3 <= 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    LOWORD(v3) = 13;
  }
  else
  {
    LOWORD(v3) = 13;
    if ( v7 == 4 )
    {
      v4 = (_DWORD)v6 == 1;
      if ( (unsigned int)v6 <= 1 )
        goto LABEL_8;
    }
    else if ( v8 == 4 && (unsigned __int16)((_WORD)v6 - 48) <= 1u )
    {
      v4 = (_WORD)v6 == 49;
LABEL_8:
      v3 = 0;
      v1 = v4;
      goto LABEL_9;
    }
  }
LABEL_10:
  v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_11:
  result = v1;
  if ( v3 < 0 )
    return 0LL;
  return result;
}
