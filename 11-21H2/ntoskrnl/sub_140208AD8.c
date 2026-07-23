/*
 * XREFs of sub_140208AD8 @ 0x140208AD8
 * Callers:
 *     sub_14036C2F0 @ 0x14036C2F0 (sub_14036C2F0.c)
 *     sub_1405DFAC4 @ 0x1405DFAC4 (sub_1405DFAC4.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_1407F1F60 @ 0x1407F1F60 (sub_1407F1F60.c)
 *     sub_140853DB0 @ 0x140853DB0 (sub_140853DB0.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 *     sub_1409709F4 @ 0x1409709F4 (sub_1409709F4.c)
 *     sub_140989650 @ 0x140989650 (sub_140989650.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 * Callees:
 *     sub_140208BA0 @ 0x140208BA0 (sub_140208BA0.c)
 *     sub_140208BE0 @ 0x140208BE0 (sub_140208BE0.c)
 */

__int64 __fastcall sub_140208AD8(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // bx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // eax
  _WORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int16 v12; // r10
  __int64 v13; // r11
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v5 = sub_140208BA0(a1, &v16, &v15);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = sub_140208BE0(a2, v6, (unsigned int)v5);
    v7 = v8;
    if ( v8 >= 0 && a2 )
    {
      v9 = (_WORD *)*((_QWORD *)a2 + 1);
      v10 = (unsigned __int64)*a2 >> 1;
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 < 0 )
      {
LABEL_12:
        *a1 = 2 * v3;
        return v7;
      }
    }
    v11 = v15;
    v7 = 0;
    v12 = 0;
    if ( v15 )
    {
      v13 = v16 - (_QWORD)v9;
      while ( v10 )
      {
        --v10;
        *(_WORD *)((char *)v9 + v13) = *v9;
        ++v12;
        ++v9;
        if ( !--v11 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( v10 )
        v7 = -2147483643;
    }
    v3 = v12;
    goto LABEL_12;
  }
  return v7;
}
