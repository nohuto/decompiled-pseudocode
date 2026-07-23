/*
 * XREFs of sub_14065691C @ 0x14065691C
 * Callers:
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14065691C(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r11
  __int64 (__fastcall *v5)(); // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // r8
  char result; // al

  v4 = 8;
  if ( a2 )
  {
    if ( !a3 || a3 == 1 )
    {
      v5 = sub_140656B40;
      v6 = sub_1406568F0;
      goto LABEL_20;
    }
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
      {
        if ( a3 != 4 )
          return 0;
        v5 = sub_140656B10;
        v4 = 64;
        v6 = sub_1406568C0;
        goto LABEL_20;
      }
      v5 = sub_140656AE0;
      v6 = sub_140656890;
      goto LABEL_16;
    }
    v5 = sub_140656AB0;
    v6 = sub_140656860;
LABEL_18:
    v4 = 16;
    goto LABEL_20;
  }
  if ( a3 && a3 != 1 )
  {
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
        return 0;
      v5 = sub_140656A50;
      v6 = sub_140656800;
LABEL_16:
      v4 = 32;
      goto LABEL_20;
    }
    v5 = sub_140656A20;
    v6 = sub_1406567D0;
    goto LABEL_18;
  }
  v5 = sub_140656A80;
  v6 = sub_140656830;
LABEL_20:
  if ( ((a4 - 1) & a4) == 0 && a4 >= v4 && a4 <= 0x40u )
  {
    result = 1;
    *(_BYTE *)(a1 + 14) = a4 >> 3;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    return result;
  }
  return 0;
}
