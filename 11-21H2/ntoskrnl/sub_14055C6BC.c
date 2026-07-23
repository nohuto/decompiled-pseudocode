/*
 * XREFs of sub_14055C6BC @ 0x14055C6BC
 * Callers:
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C464 @ 0x14055C464 (sub_14055C464.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055CB14 @ 0x14055CB14 (sub_14055CB14.c)
 */

__int64 __fastcall sub_14055C6BC(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !sub_1403D7FD4(MaxDataSize, 336LL) )
      break;
    v4 = *(unsigned __int16 *)(MaxDataSize + 2);
    if ( (unsigned __int16)v4 <= 0x3000u && (v5 = v4 + 7, sub_1403D7FD4(MaxDataSize, (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL)) )
      v6 = v5 & 0xFFFFFFF8;
    else
      v6 = 336;
    sub_1403D99B4(MaxDataSize, (PVOID)v6);
    v7 = *(_QWORD *)(MaxDataSize + 312);
    if ( sub_1403D7FD4(v7, 112LL) )
      sub_1403D99B4(v7, (PVOID)0x70);
    v8 = *(_QWORD *)(MaxDataSize + 8);
    if ( sub_1403D7FD4(v8, 336LL) )
    {
      sub_1403D99B4(v8, (PVOID)0x150);
      v10 = *(_OWORD *)(v8 + 56);
      sub_14055CB14(&v10);
    }
    MaxDataSize = *(_QWORD *)(MaxDataSize + 24);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
