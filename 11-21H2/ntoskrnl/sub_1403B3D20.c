/*
 * XREFs of sub_1403B3D20 @ 0x1403B3D20
 * Callers:
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_14063499C @ 0x14063499C (sub_14063499C.c)
 *     sub_1409E91DC @ 0x1409E91DC (sub_1409E91DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B3D20(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // eax
  bool v9; // cf
  unsigned int v10; // eax

  *a3 = 0;
  v4 = *a1;
  v5 = a2;
  if ( !(_DWORD)v4 || a2 < 0x48 || a2 >= (unsigned __int64)(v4 - 4) )
    return 0LL;
  v6 = *(unsigned int *)((char *)a1 + a2);
  if ( (v6 & 0xFF000000) != 0x90000000 )
  {
    if ( (v6 & 0xFF000000) != 0xC0000000 )
      return 0LL;
    v7 = BYTE2(v6);
    if ( BYTE2(v6) <= 0xDu )
    {
      if ( BYTE2(v6) == 13 )
        goto LABEL_10;
      if ( !BYTE2(v6) )
        return 0LL;
      if ( BYTE2(v6) <= 2u )
      {
        if ( v5 >= v4 - 8 )
          return 0LL;
        v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
        v9 = v8 < 0x20;
      }
      else
      {
        if ( BYTE2(v6) > 4u )
        {
          if ( BYTE2(v6) <= 9u || BYTE2(v6) > 0xBu )
            return 0LL;
LABEL_28:
          v8 = (unsigned __int16)v6;
          v9 = (unsigned __int16)v6 < 0x30u;
          goto LABEL_11;
        }
        if ( v5 >= v4 - 8 )
          return 0LL;
        v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
        v9 = v8 < 0x18;
      }
    }
    else
    {
      if ( BYTE2(v6) < 0x10u )
        return 0LL;
      if ( BYTE2(v6) > 0x11u )
      {
        if ( BYTE2(v6) <= 0x13u )
        {
LABEL_10:
          v8 = (unsigned __int16)v6;
          v9 = (unsigned __int16)v6 < 0x50u;
          goto LABEL_11;
        }
        if ( BYTE2(v6) > 0x15u )
          return 0LL;
        goto LABEL_28;
      }
      if ( v5 >= v4 - 8 )
        return 0LL;
      v8 = *(unsigned __int16 *)((char *)a1 + v5 + 4);
      v9 = v8 < 0x10;
    }
LABEL_11:
    if ( v9 )
      return 0LL;
    goto LABEL_12;
  }
  v8 = (unsigned __int16)v6;
  v7 = 15;
  if ( (unsigned __int16)v6 < 8u )
    return 0LL;
LABEL_12:
  v10 = (v8 + 7) & 0xFFFFFFF8;
  if ( v10 < (unsigned int)v4 && v10 + (unsigned int)v5 <= (unsigned int)v4 )
  {
    *a3 = v10;
    return v7;
  }
  return 0LL;
}
