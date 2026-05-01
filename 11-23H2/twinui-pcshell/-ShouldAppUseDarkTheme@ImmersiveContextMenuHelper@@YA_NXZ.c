/*
 * XREFs of ?ShouldAppUseDarkTheme@ImmersiveContextMenuHelper@@YA_NXZ @ 0x18074D9A4
 * Callers:
 *     ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x18074DA8C (-ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ImmersiveContextMenuHelper::ShouldAppUseDarkTheme(ImmersiveContextMenuHelper *this)
{
  LSTATUS ValueW; // eax
  int v2; // ecx
  bool v3; // r8
  bool v4; // zf
  bool v5; // sf
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"AppsUseLightTheme",
             0x10000012u,
             &v7,
             &v9,
             &v8);
  v2 = ValueW;
  if ( !ValueW )
  {
    v2 = 13;
    if ( v7 == 4 )
    {
      if ( !v9 || (v3 = 1, v9 == 1) )
      {
        v2 = 0;
        v4 = v9 == 1;
LABEL_10:
        v3 = !v4;
      }
    }
    else
    {
      v3 = 1;
      if ( v8 == 4 )
      {
        if ( (_WORD)v9 == 48 || (v3 = 1, (_WORD)v9 == 49) )
        {
          v2 = 0;
          v4 = (_WORD)v9 == 49;
          goto LABEL_10;
        }
      }
    }
LABEL_11:
    v5 = v2 < 0;
    if ( v2 <= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v3 = 1;
  if ( ValueW != 234 )
    goto LABEL_11;
LABEL_12:
  v5 = 1;
LABEL_13:
  if ( v5 )
    return 1;
  return v3;
}
