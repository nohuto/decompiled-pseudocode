/*
 * XREFs of sub_1403CD4E0 @ 0x1403CD4E0
 * Callers:
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     sub_1403CD570 @ 0x1403CD570 (sub_1403CD570.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     sub_1405153A4 @ 0x1405153A4 (sub_1405153A4.c)
 */

__int64 __fastcall sub_1403CD4E0(__int64 a1, __int64 *a2)
{
  char v4; // bp
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v8; // rdx

  v4 = 0;
  if ( (unsigned int)sub_14023A8D0(a1) == 3 && !*(_QWORD *)(a1 + 504) )
  {
    if ( (unsigned __int64)a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v5 = *a2;
      if ( v5 && (unsigned __int8)sub_1405153A4(a1, v5) )
      {
        v6 = sub_1403B2A28(v5);
        if ( v6 < 0 )
          goto LABEL_12;
        goto LABEL_6;
      }
      v6 = -1073741811;
    }
    else
    {
      v5 = sub_1403CD570(a1);
      if ( v5 )
      {
        v6 = 0;
LABEL_6:
        *(_QWORD *)(a1 + 504) = v5;
        v4 = 1;
        if ( !*(_DWORD *)(v5 + 48) )
          return (unsigned int)v6;
        v6 = sub_14042A5E0(*(_QWORD *)(v5 + 40), *(_QWORD *)(a1 + 536));
        if ( v6 >= 0 )
        {
          if ( *(_DWORD *)(v5 + 48) != 3 )
            return (unsigned int)v6;
          v6 = sub_14042A5E0(*(_QWORD *)(v5 + 40), *(unsigned int *)(a1 + 244));
          if ( v6 >= 0 )
            return (unsigned int)v6;
          sub_14042A5E0(*(_QWORD *)(a1 + 536), v8);
          *(_QWORD *)(a1 + 504) = 0LL;
          goto LABEL_13;
        }
LABEL_12:
        *(_QWORD *)(a1 + 504) = 0LL;
        if ( !v4 )
          return (unsigned int)v6;
LABEL_13:
        sub_140514E28(v5);
        return (unsigned int)v6;
      }
      v6 = -1073741670;
    }
    *(_QWORD *)(a1 + 504) = 0LL;
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
