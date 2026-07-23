/*
 * XREFs of sub_140219B90 @ 0x140219B90
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     sub_140218C94 @ 0x140218C94 (sub_140218C94.c)
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_140219C44 @ 0x140219C44 (sub_140219C44.c)
 *     sub_14064A96C @ 0x14064A96C (sub_14064A96C.c)
 *     sub_14064ABF8 @ 0x14064ABF8 (sub_14064ABF8.c)
 *     sub_14064AD1C @ 0x14064AD1C (sub_14064AD1C.c)
 */

__int64 __fastcall sub_140219B90(char a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebp
  unsigned __int16 *v4; // r9
  bool v5; // zf
  unsigned int v9; // ebx
  unsigned __int16 v10; // r15
  __int64 v11; // rcx
  int v13; // ecx
  int v14; // eax
  int v15; // eax

  v3 = 0;
  v4 = (unsigned __int16 *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0;
  if ( !v5 )
    v4 = (unsigned __int16 *)a2;
  v9 = 0;
  v10 = *v4;
  if ( !(unsigned __int8)sub_140219C44(a2) )
    goto LABEL_4;
  if ( (unsigned __int8)a1 < 0x80u )
    return v9;
  if ( (unsigned __int8)a1 > 0x81u )
  {
    if ( (unsigned __int8)a1 > 0x85u )
    {
      if ( a1 == -122 )
      {
LABEL_11:
        v13 = 1;
        goto LABEL_12;
      }
      if ( a1 != -120 )
      {
        if ( a1 == -114 )
          goto LABEL_11;
        if ( a1 != -113 )
          return v9;
      }
      v13 = 2;
LABEL_12:
      v9 = sub_140218C94(v13, a2, a3);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      goto LABEL_5;
    }
    if ( !v10 )
      goto LABEL_4;
    if ( v10 <= 2u )
    {
      LOBYTE(v11) = a1;
      v14 = sub_14064ABF8(v11, a2);
      goto LABEL_28;
    }
    switch ( v10 )
    {
      case 3u:
        v15 = sub_140218F84(a1, a2, a3);
        break;
      case 4u:
        LOBYTE(v11) = a1;
        v15 = sub_14064A96C(v11, a2, a3);
        break;
      case 5u:
      case 0x10u:
        LOBYTE(v11) = a1;
        v14 = sub_14064AD1C(v11, a2);
LABEL_28:
        *a3 = v14;
        return v9;
      default:
LABEL_4:
        v9 = -1073741406;
LABEL_5:
        *a3 = -1;
        return v9;
    }
    v9 = v15;
    if ( v15 >= 0 )
      return v9;
    goto LABEL_5;
  }
  v9 = sub_140218C94(0, a2, a3);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_5;
  if ( a1 == -127 && *a3 != -1 )
  {
    LOBYTE(v3) = *a3 == 0;
    *a3 = v3;
  }
  return v9;
}
