/*
 * XREFs of ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ @ 0x1801BC128
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ?IsDeviceConvertible@TabletModeHelpers@@YA_NXZ @ 0x1805131F8 (-IsDeviceConvertible@TabletModeHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall TabletModeHelpers::HasConvertibleSlateModeChanged(TabletModeHelpers *this)
{
  LSTATUS ValueW; // eax
  signed int v2; // ecx
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
             L"ConvertibleSlateModeChanged",
             0x10000012u,
             &v7,
             &v6,
             &v8);
  v2 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v2) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_5:
      v3 = v6;
      return v2 >= 0 && v3 != 0;
    }
LABEL_4:
    v2 = (unsigned __int16)v2 | 0x80070000;
    goto LABEL_5;
  }
  LOWORD(v2) = 13;
  if ( v7 == 4 )
  {
    if ( v6 > 1 )
      goto LABEL_4;
    v2 = 0;
    v3 = 0;
    v4 = v6 == 1;
  }
  else
  {
    if ( v8 != 4 || (unsigned __int16)(v6 - 48) > 1u )
      goto LABEL_4;
    v2 = 0;
    v3 = 0;
    v4 = (_WORD)v6 == 49;
  }
  LOBYTE(v3) = v4;
  return v2 >= 0 && v3 != 0;
}
