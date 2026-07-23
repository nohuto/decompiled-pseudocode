/*
 * XREFs of sub_14055C3BC @ 0x14055C3BC
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C600 @ 0x14055C600 (sub_14055C600.c)
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 */

__int64 __fastcall sub_14055C3BC(_QWORD *MaxDataSize, ULONG a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = 0;
  sub_14055CA14(a2);
  if ( sub_1403D7FD4((__int64)MaxDataSize, 80LL) )
  {
    sub_1403D99B4((ULONG)MaxDataSize, (PVOID)0x50);
    sub_14055C600(MaxDataSize[5]);
    sub_14055CBA8(MaxDataSize[6]);
    v4 = MaxDataSize[2];
    if ( v4 )
      sub_14055CA14(v4);
    v5 = MaxDataSize[3];
    if ( v5 )
      sub_14055CA14(v5);
    v6 = MaxDataSize[4];
    if ( v6 )
      sub_14055CA14(v6);
    v7 = MaxDataSize[8];
    if ( v7 )
      sub_14055C6BC(v7);
    v8 = MaxDataSize[7];
    if ( v8 )
      sub_14055C7C4(v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
