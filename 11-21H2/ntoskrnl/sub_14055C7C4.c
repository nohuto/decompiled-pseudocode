/*
 * XREFs of sub_14055C7C4 @ 0x14055C7C4
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_14055C3BC @ 0x14055C3BC (sub_14055C3BC.c)
 *     sub_14055C600 @ 0x14055C600 (sub_14055C600.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C8B4 @ 0x14055C8B4 (sub_14055C8B4.c)
 *     sub_14055CB14 @ 0x14055CB14 (sub_14055CB14.c)
 */

__int64 __fastcall sub_14055C7C4(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !sub_1403D7FD4(MaxDataSize, 88LL) )
      break;
    sub_1403D99B4(MaxDataSize, (PVOID)0x58);
    v8 = *(_OWORD *)(MaxDataSize + 40);
    sub_14055CB14(&v8);
    v8 = *(_OWORD *)(MaxDataSize + 56);
    sub_14055CB14(&v8);
    v4 = *(_QWORD *)(MaxDataSize + 72);
    if ( v4 )
      sub_14055C8B4(v4);
    v5 = *(_QWORD *)(MaxDataSize + 80);
    if ( v5 )
    {
      if ( sub_1403D7FD4(*(_QWORD *)(MaxDataSize + 80), 56LL) )
      {
        sub_1403D99B4(v5, (PVOID)0x38);
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
          sub_14055C8B4(v6);
      }
    }
    sub_14055C6BC(*(_QWORD *)(MaxDataSize + 32));
    MaxDataSize = *(_QWORD *)(MaxDataSize + 16);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
