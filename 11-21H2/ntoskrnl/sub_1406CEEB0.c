/*
 * XREFs of sub_1406CEEB0 @ 0x1406CEEB0
 * Callers:
 *     sub_1406CED44 @ 0x1406CED44 (sub_1406CED44.c)
 *     sub_1409F5224 @ 0x1409F5224 (sub_1409F5224.c)
 * Callees:
 *     sub_1406CEFB0 @ 0x1406CEFB0 (sub_1406CEFB0.c)
 *     sub_1409F45F0 @ 0x1409F45F0 (sub_1409F45F0.c)
 *     sub_1409F49A4 @ 0x1409F49A4 (sub_1409F49A4.c)
 *     sub_1409F4A30 @ 0x1409F4A30 (sub_1409F4A30.c)
 */

__int64 __fastcall sub_1406CEEB0(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 v11; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _WORD *v17; // rax

  v4 = 0;
  switch ( a1 )
  {
    case -2147483640:
      v15 = a3;
      return (unsigned int)sub_1409F4A30(a2, v15);
    case -2147483632:
      v15 = a3 + 8;
      return (unsigned int)sub_1409F4A30(a2, v15);
    case -2147483616:
      v15 = a3 + 16;
      return (unsigned int)sub_1409F4A30(a2, v15);
    case -2147450880:
      v15 = a3 + 24;
      return (unsigned int)sub_1409F4A30(a2, v15);
    case -2147479552:
      v6 = *a2;
      v16 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v16 - 6) <= 0x3FA )
      {
        v8 = *(unsigned __int16 *)(v6 + 2);
        if ( v16 == 2 * v8 + 4 )
        {
          v9 = 1LL;
          if ( (unsigned __int16)(v8 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v6 + 2) )
            {
              v17 = (_WORD *)(v6 + 4);
              while ( *v17 != 0xFFFF )
              {
                ++v4;
                ++v17;
                if ( v4 >= (unsigned int)v8 )
                  goto LABEL_36;
              }
              return (unsigned int)-1073741811;
            }
LABEL_36:
            v11 = a3 + 40;
LABEL_15:
            LOBYTE(v9) = *(_BYTE *)v6;
            return (unsigned int)sub_1406CEFB0(v9, v6 + 4, (unsigned __int16)v8, v11);
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147483136:
      v6 = *a2;
      v7 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v7 - 6) <= 0x3FA )
      {
        v8 = *(unsigned __int16 *)(v6 + 2);
        if ( v7 == 2 * v8 + 4 )
        {
          v9 = 1LL;
          if ( (unsigned __int16)(v8 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v6 + 2) )
            {
              v10 = (_WORD *)(v6 + 4);
              while ( *v10 != 0xFFFF )
              {
                ++v4;
                ++v10;
                if ( v4 >= (unsigned int)v8 )
                  goto LABEL_14;
              }
              return (unsigned int)-1073741811;
            }
LABEL_14:
            v11 = a3 + 32;
            goto LABEL_15;
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147482624:
      v14 = a3 + 48;
      return (unsigned int)sub_1409F45F0(a2, v14);
    case -2147475456:
      v14 = a3 + 56;
      return (unsigned int)sub_1409F45F0(a2, v14);
  }
  if ( a1 != -2147483392 )
    return v4;
  if ( a4 )
    return (unsigned int)sub_1409F49A4(a4, a2, a3 + 72);
  return 3221225485LL;
}
