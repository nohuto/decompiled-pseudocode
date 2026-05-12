/*
 * XREFs of sub_1C00596F4 @ 0x1C00596F4
 * Callers:
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A3D0 @ 0x1C007A3D0 (sub_1C007A3D0.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 */

__int64 __fastcall sub_1C00596F4(__int64 a1, char a2, unsigned int a3, const void *a4, unsigned int *a5, _BYTE *a6)
{
  int v6; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  v6 = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( a3 && a4 )
  {
    *a5 = a3;
    memmove(a5 + 1, a4, a3);
  }
  else if ( a2 )
  {
    v6 = sub_1C007A484(a1, 1LL, v9);
    if ( v6 >= 0 )
    {
      v6 = sub_1C007A3D0(a1, v9, a5);
      if ( v6 < 0 )
        sub_1C0042880(a6, 32LL, (__int64)"TcglibGetMsid");
      sub_1C0079C54(a1, v9);
    }
    else
    {
      sub_1C0042880(a6, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v6;
}
