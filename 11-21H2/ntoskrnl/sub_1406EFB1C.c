/*
 * XREFs of sub_1406EFB1C @ 0x1406EFB1C
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     sub_1406EFB84 @ 0x1406EFB84 (sub_1406EFB84.c)
 *     sub_140883718 @ 0x140883718 (sub_140883718.c)
 *     sub_1409E5988 @ 0x1409E5988 (sub_1409E5988.c)
 */

__int64 __fastcall sub_1406EFB1C(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // r11

  v4 = (_WORD *)sub_1406EFB84(a1, 3LL);
  if ( v4 )
  {
    v7 = sub_1409E5988(a2, v4 + 2, (unsigned __int16)(4 * *v4 - 4) >> 2);
    if ( v7 < 0 )
      return (unsigned int)v7;
    sub_1406EFB84(a1, 5LL);
  }
  v5 = sub_1406EFB84(a1, 7LL);
  if ( v8 )
  {
    if ( v5 )
      return (unsigned int)-1073741053;
  }
  else
  {
    if ( !v5 )
      return (unsigned int)v7;
    v8 = v5;
  }
  if ( 4 * *(_WORD *)v8 == 12 )
  {
    LOBYTE(v6) = v5 != 0;
    return (unsigned int)sub_140883718(a2, *(unsigned int *)(v8 + 4), *(unsigned int *)(v8 + 8), v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
