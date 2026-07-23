/*
 * XREFs of sub_14036BFE0 @ 0x14036BFE0
 * Callers:
 *     sub_1407F0FC0 @ 0x1407F0FC0 (sub_1407F0FC0.c)
 *     sub_140854148 @ 0x140854148 (sub_140854148.c)
 *     sub_14085475C @ 0x14085475C (sub_14085475C.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14036BFE0(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  __int16 v10; // di
  unsigned __int64 v11; // r9
  __int64 v12; // rbx

  v4 = *a1;
  if ( (v4 & 1) != 0 )
    return (unsigned int)-1073741811;
  v5 = a1[1];
  if ( (v5 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int16)v4 > (unsigned __int16)v5 )
    return (unsigned int)-1073741811;
  if ( (_WORD)v5 == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = *((_QWORD *)a1 + 1);
  v7 = 0;
  if ( !v6 && ((_WORD)v4 || (_WORD)v5) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = v4 >> 1;
    v9 = 0x7FFFLL;
    v10 = 0;
    v11 = (v5 >> 1) - v8;
    if ( v5 >> 1 == v8 )
    {
LABEL_18:
      if ( *a2 )
        v7 = -2147483643;
    }
    else
    {
      v12 = 2 * v8 - (_QWORD)a2 + v6;
      while ( v9 )
      {
        if ( *a2 )
        {
          *(_WORD *)((char *)a2 + v12) = *a2;
          --v9;
          ++a2;
          ++v10;
          if ( --v11 )
            continue;
        }
        if ( v11 || !v9 )
          break;
        goto LABEL_18;
      }
    }
    *a1 = 2 * (v10 + v8);
  }
  return v7;
}
