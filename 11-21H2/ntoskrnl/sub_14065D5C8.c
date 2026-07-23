/*
 * XREFs of sub_14065D5C8 @ 0x14065D5C8
 * Callers:
 *     sub_14065D410 @ 0x14065D410 (sub_14065D410.c)
 *     sub_14065D4F8 @ 0x14065D4F8 (sub_14065D4F8.c)
 * Callees:
 *     sub_140658008 @ 0x140658008 (sub_140658008.c)
 *     sub_1406580D0 @ 0x1406580D0 (sub_1406580D0.c)
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D320 @ 0x14065D320 (sub_14065D320.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_14065DC44 @ 0x14065DC44 (sub_14065DC44.c)
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_14065E1EC @ 0x14065E1EC (sub_14065E1EC.c)
 *     sub_14065E690 @ 0x14065E690 (sub_14065E690.c)
 *     sub_14065E730 @ 0x14065E730 (sub_14065E730.c)
 *     sub_14069EF78 @ 0x14069EF78 (sub_14069EF78.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 *     sub_140923C08 @ 0x140923C08 (sub_140923C08.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 *     sub_1409242A4 @ 0x1409242A4 (sub_1409242A4.c)
 */

__int64 __fastcall sub_14065D5C8(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v5; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v5 = a3;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 <= 7 )
  {
    if ( v8 == 7 )
    {
      if ( !(_DWORD)a3 )
      {
LABEL_26:
        v10 = sub_14065E690(a1);
        goto LABEL_43;
      }
LABEL_13:
      if ( v5 == 1 )
        sub_14065E730(a1, a2);
      goto LABEL_47;
    }
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        if ( v8 == 2 )
        {
          if ( !(_DWORD)a3 )
          {
            v10 = sub_140923D00(a1, a4);
            goto LABEL_43;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))sub_14069EF78)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v13);
          sub_1409237B4(a1, a2, a4);
        }
        else if ( v8 != 3 )
        {
          if ( v8 > 3 )
          {
            if ( v8 > 5 )
            {
              if ( !(_DWORD)a3 )
              {
                v9 = sub_14065D114(a1, (__int64)a2, a3, a4);
                if ( (v9 & 0x80000000) != 0 )
                  return v9;
                goto LABEL_26;
              }
              sub_14065D320(a1, a2, (__int64)a4);
              ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))sub_14069EF78)(
                *(_QWORD *)(a1 + 48),
                0LL,
                4LL,
                v13);
              goto LABEL_13;
            }
            if ( !(_DWORD)a3 )
            {
              v10 = sub_14065D7C4(a1, a2);
              goto LABEL_43;
            }
            sub_14065DC44(a1, a2, a4);
            v11 = 4LL;
            goto LABEL_46;
          }
          return (unsigned int)-1073741811;
        }
      }
LABEL_47:
      v9 = 0;
      sub_140719010(v13);
      return v9;
    }
    if ( !(_DWORD)a3 )
    {
      v10 = sub_14065DF64(a1, a2);
      goto LABEL_43;
    }
    sub_14065E1EC(a1, a2);
    goto LABEL_24;
  }
  if ( v8 == 8 )
    goto LABEL_47;
  if ( v8 == 9 )
  {
    if ( (_DWORD)a3 )
    {
      sub_140923C08(a1, a2);
      v11 = 10LL;
      goto LABEL_46;
    }
    v10 = sub_1409242A4(a1, a2);
  }
  else
  {
    if ( v8 <= 11 )
      goto LABEL_47;
    switch ( v8 )
    {
      case 12:
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
            sub_1409239EC(a1, a2, a4);
          goto LABEL_47;
        }
        v10 = sub_140923ED0(a1, a2);
        break;
      case 13:
        goto LABEL_47;
      case 14:
        if ( (_DWORD)a3 )
        {
          sub_140658008(a1, a2, (__int64)a4);
LABEL_24:
          v11 = 1LL;
LABEL_46:
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))sub_14069EF78)(*(_QWORD *)(a1 + 48), 0LL, v11, v13);
          goto LABEL_47;
        }
        v10 = sub_1406580D0(a1);
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
LABEL_43:
  v9 = v10;
  if ( v10 >= 0 )
    goto LABEL_47;
  return v9;
}
