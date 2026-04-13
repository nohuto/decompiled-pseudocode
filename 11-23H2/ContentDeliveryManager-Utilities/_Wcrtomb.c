/*
 * XREFs of _Wcrtomb @ 0x1800061E0
 * Callers:
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180019970 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001BCA0 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?_Donarrow@?$ctype@_W@std@@IEBAD_WD@Z @ 0x180060660 (-_Donarrow@-$ctype@_W@std@@IEBAD_WD@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x180071ED0 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x180072140 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl Wcrtomb(char *lpMultiByteStr, wchar_t a2, mbstate_t *a3, const _Cvtvec *a4)
{
  bool v4; // zf
  int result; // eax
  WCHAR WideCharStr; // [rsp+40h] [rbp-18h] BYREF
  WINBOOL UsedDefaultChar[4]; // [rsp+48h] [rbp-10h] BYREF

  v4 = *(_DWORD *)a4->_Isleadbyte == 0;
  WideCharStr = a2;
  if ( !v4 )
  {
    if ( a2 <= 0xFFu )
    {
      *lpMultiByteStr = a2;
      return 1;
    }
    goto LABEL_6;
  }
  UsedDefaultChar[0] = 0;
  result = WideCharToMultiByte(a4->_Mbcurmax, 0, &WideCharStr, 1, lpMultiByteStr, a4->_Isclocale, 0LL, UsedDefaultChar);
  if ( !result || UsedDefaultChar[0] )
  {
LABEL_6:
    *_errno() = 42;
    return -1;
  }
  return result;
}
