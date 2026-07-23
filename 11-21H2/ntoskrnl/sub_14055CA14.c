/*
 * XREFs of sub_14055CA14 @ 0x14055CA14
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_14055C354 @ 0x14055C354 (sub_14055C354.c)
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 */

__int64 __fastcall sub_14055CA14(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( sub_1403D7FD4(MaxDataSize, 2288LL) )
  {
    sub_1403D99B4(MaxDataSize, (PVOID)0x8F0);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 56);
      v5 = *(_QWORD *)(MaxDataSize + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v8 = sub_140554800(v7, v6);
      if ( v8 )
        sub_1403D99B4(v7, (PVOID)v8);
    }
    v9 = (_QWORD *)(MaxDataSize + 1280);
    v10 = *(_QWORD **)(MaxDataSize + 1280);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !sub_1403D7FD4((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      sub_14055C8B4((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
