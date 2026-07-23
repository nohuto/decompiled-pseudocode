/*
 * XREFs of sub_14055C8B4 @ 0x14055C8B4
 * Callers:
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 */

__int64 __fastcall sub_14055C8B4(__int64 MaxDataSize, char a2)
{
  int v4; // r12d
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // esi
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // ebp
  int v11; // r15d
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r14

  v4 = 0;
  v5 = 0;
  if ( !sub_1403D7FD4(MaxDataSize, 208LL) )
    return (unsigned int)-1073741823;
  v6 = *(unsigned __int16 *)(MaxDataSize + 2);
  if ( (unsigned __int16)v6 > 0x800u
    || (v7 = *(char *)(MaxDataSize + 66), *(char *)(MaxDataSize + 66) > 64)
    || (v8 = (unsigned __int64)(v6 + 7) >> 3,
        v9 = *(unsigned __int16 *)(MaxDataSize + 2),
        !sub_1403D7FD4(MaxDataSize, 8 * v8)) )
  {
    sub_1403D99B4(MaxDataSize, (PVOID)0xD0);
    return (unsigned int)-1073741823;
  }
  sub_1403D99B4(MaxDataSize, (PVOID)(unsigned int)(8 * v8));
  if ( a2 == 1 )
  {
    v10 = 0;
    v11 = v7;
    if ( (char)v7 > 0 )
    {
      v12 = v9 + MaxDataSize;
      while ( MaxDataSize + 280 + 72LL * (char)v10 <= v12 )
      {
        v13 = *(_QWORD *)(MaxDataSize + 72LL * (char)v10 + 248);
        if ( v13 )
        {
          while ( 1 )
          {
            ++v4;
            if ( !sub_1403D7FD4(v13, 336LL) )
              break;
            v14 = *(_QWORD *)(v13 + 312);
            if ( !sub_1403D7FD4(v14, 112LL) )
              break;
            v13 = *(_QWORD *)(v14 + 48);
            if ( !v13 )
            {
              v5 = sub_14055C7C4(*(_QWORD *)(v14 + 40));
              goto LABEL_17;
            }
            if ( v4 >= 10 )
              goto LABEL_17;
          }
          v5 = -1073741823;
        }
LABEL_17:
        if ( ++v10 >= v11 )
          return v5;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v5;
}
