/*
 * XREFs of sub_1C0042880 @ 0x1C0042880
 * Callers:
 *     sub_1C0041CE0 @ 0x1C0041CE0 (sub_1C0041CE0.c)
 *     sub_1C0051E04 @ 0x1C0051E04 (sub_1C0051E04.c)
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0042880(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  _BYTE *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
