/*
 * XREFs of ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x18009922C
 * Callers:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180099154 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(FullScreenPositionerHelpers *this)
{
  int v1; // eax
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  unsigned int v4; // eax
  bool v6; // zf
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1807B5A04;
  if ( !dword_1807B5A04 )
  {
    v8 = 0;
    v9 = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
               L"IsForcedCompatModeEnabled",
               0x10000012u,
               &v8,
               &v7,
               &v9);
    v3 = ValueW;
    if ( ValueW )
    {
      if ( ValueW == 234 )
      {
        LOWORD(v3) = 13;
      }
      else if ( ValueW <= 0 )
      {
LABEL_6:
        v4 = v7;
        goto LABEL_7;
      }
LABEL_5:
      v3 = (unsigned __int16)v3 | 0x80070000;
      goto LABEL_6;
    }
    LOWORD(v3) = 13;
    if ( v8 == 4 )
    {
      if ( v7 > 1 )
        goto LABEL_5;
      v3 = 0;
      v4 = 0;
      v6 = v7 == 1;
    }
    else
    {
      if ( v9 != 4 || (unsigned __int16)(v7 - 48) > 1u )
        goto LABEL_5;
      v3 = 0;
      v4 = 0;
      v6 = (_WORD)v7 == 49;
    }
    LOBYTE(v4) = v6;
LABEL_7:
    if ( v3 >= 0 )
    {
      v1 = (v4 ^ 1) + 1;
      dword_1807B5A04 = v1;
    }
    else
    {
      v1 = dword_1807B5A04;
    }
  }
  return v1 == 1;
}
