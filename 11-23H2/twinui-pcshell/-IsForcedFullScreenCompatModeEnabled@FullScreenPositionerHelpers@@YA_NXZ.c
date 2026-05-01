/*
 * XREFs of ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x180044B5C
 * Callers:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(FullScreenPositionerHelpers *this)
{
  int v1; // ecx
  LSTATUS ValueW; // eax
  int v3; // edx
  unsigned int v4; // ecx
  bool v5; // sf
  bool v7; // zf
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  DWORD v9; // [rsp+58h] [rbp+10h] BYREF
  DWORD v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_180990650;
  if ( !dword_180990650 )
  {
    v9 = 0;
    v10 = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
               L"IsForcedCompatModeEnabled",
               0x10000012u,
               &v9,
               &v8,
               &v10);
    v3 = ValueW;
    if ( ValueW )
    {
      v4 = v8;
      if ( ValueW != 234 )
        goto LABEL_4;
LABEL_5:
      v5 = 1;
LABEL_6:
      if ( v5 )
      {
        v1 = dword_180990650;
      }
      else
      {
        v1 = (v4 ^ 1) + 1;
        dword_180990650 = v1;
      }
      return v1 == 1;
    }
    if ( v9 == 4 )
    {
      if ( v8 <= 1 )
      {
        v3 = 0;
        v4 = 0;
        v7 = v8 == 1;
LABEL_12:
        LOBYTE(v4) = v7;
LABEL_4:
        v5 = v3 < 0;
        if ( v3 <= 0 )
          goto LABEL_6;
        goto LABEL_5;
      }
    }
    else if ( v10 == 4 && (unsigned __int16)(v8 - 48) <= 1u )
    {
      v3 = 0;
      v4 = 0;
      v7 = (_WORD)v8 == 49;
      goto LABEL_12;
    }
    v4 = v8;
    goto LABEL_5;
  }
  return v1 == 1;
}
