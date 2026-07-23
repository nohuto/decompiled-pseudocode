/*
 * XREFs of sub_140841858 @ 0x140841858
 * Callers:
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140842D54 @ 0x140842D54 (sub_140842D54.c)
 *     sub_140851068 @ 0x140851068 (sub_140851068.c)
 *     sub_140A1467C @ 0x140A1467C (sub_140A1467C.c)
 *     sub_140A146C0 @ 0x140A146C0 (sub_140A146C0.c)
 */

__int64 __fastcall sub_140841858(_DWORD *a1, unsigned __int16 a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  bool v10; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 == 16414 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 == 16435 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 <= 0x5001u )
    goto LABEL_9;
  if ( a2 <= 0x5003u )
  {
    if ( a4 >= 8 )
    {
      v8 = sub_140A146C0(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_14;
    }
    goto LABEL_22;
  }
  if ( a2 != 20493 && a2 != 20486 )
  {
    if ( a2 > 0x5011u && a2 <= 0x5013u )
    {
      if ( a4 >= 8 )
      {
        v8 = sub_140A1467C(*a3, *(_QWORD *)(a5 + 16));
        goto LABEL_14;
      }
      goto LABEL_22;
    }
LABEL_9:
    v7 = a2 & 0xF000;
    switch ( v7 )
    {
      case 16384:
        if ( a4 < 4 )
          goto LABEL_22;
        v10 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
          goto LABEL_22;
        v10 = *a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 >= 2 )
        {
          v8 = sub_140851068(a3, *(_QWORD *)(a5 + 16));
LABEL_14:
          v5 = v8;
          goto LABEL_15;
        }
        goto LABEL_22;
      default:
LABEL_15:
        result = 1LL;
        *a1 = v5;
        return result;
    }
    LOBYTE(v5) = v10;
    goto LABEL_15;
  }
  if ( a4 >= 8 )
  {
    v8 = sub_140842D54(*a3, *(_QWORD *)(a5 + 16));
    goto LABEL_14;
  }
LABEL_22:
  sub_1406E0C3C(1LL, (__int64)"SdbpCheckAttribute");
  return 0LL;
}
