/*
 * XREFs of sub_14055C464 @ 0x14055C464
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 */

__int64 __fastcall sub_14055C464(ULONG a1, __int64 a2, ULONG a3)
{
  int v5; // r15d
  unsigned int v6; // edi
  _QWORD **v7; // r14
  _QWORD *i; // rsi
  _QWORD **v9; // r14
  int v10; // r15d
  _QWORD *v11; // rsi

  v5 = 0;
  v6 = 0;
  sub_14055C6BC(a1);
  sub_14055C8B4(a3);
  if ( sub_1403D7FD4(a2, 40LL) && *(_WORD *)a2 == 0x8000 )
  {
    sub_1403D99B4(a2, (PVOID)0x28);
    v7 = *(_QWORD ***)(a2 + 8);
    if ( v7 )
    {
      if ( sub_1403D7FD4(*(_QWORD *)(a2 + 8), 16LL) )
      {
        sub_1403D99B4((ULONG)v7, (PVOID)0x10);
        for ( i = *v7; i && i != *(_QWORD **)(a2 + 8) && v5 < 10; i = (_QWORD *)*i )
        {
          ++v5;
          if ( !sub_1403D7FD4((__int64)i, 32LL) )
            goto LABEL_14;
          sub_1403D99B4((ULONG)i, (PVOID)0x20);
          if ( (_QWORD **)i[1] != v7 )
            goto LABEL_14;
          sub_14055C8B4(i[2]);
          sub_14055C6BC(i[3]);
          v7 = (_QWORD **)i;
        }
      }
      else
      {
LABEL_14:
        v6 = -1073741823;
      }
    }
    v9 = *(_QWORD ***)(a2 + 16);
    if ( v9 )
    {
      v10 = 0;
      if ( sub_1403D7FD4(*(_QWORD *)(a2 + 16), 16LL) )
      {
        sub_1403D99B4((ULONG)v9, (PVOID)0x10);
        v11 = *v9;
        if ( *v9 )
        {
          while ( v11 != *(_QWORD **)(a2 + 16) && v10 < 10 )
          {
            ++v10;
            if ( !sub_1403D7FD4((__int64)v11, 24LL) )
              goto LABEL_24;
            sub_1403D99B4((ULONG)v11, (PVOID)0x18);
            if ( (_QWORD **)v11[1] != v9 )
              goto LABEL_24;
            v9 = (_QWORD **)v11;
            v6 = sub_14055CA14(v11[2]);
            v11 = (_QWORD *)*v11;
            if ( !v11 )
              break;
          }
        }
      }
      else
      {
LABEL_24:
        v6 = -1073741823;
      }
    }
    sub_14055CBA8(*(_QWORD *)(a2 + 24));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
