/*
 * XREFs of sub_14055C354 @ 0x14055C354
 * Callers:
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_14055C600 @ 0x14055C600 (sub_14055C600.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055CBA8 @ 0x14055CBA8 (sub_14055CBA8.c)
 */

__int64 __fastcall sub_14055C354(ULONG a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  sub_14055CA14(a1);
  if ( sub_1403D7FD4(a2, 32LL) && *(_WORD *)a2 == 0x8001 )
  {
    sub_1403D99B4(a2, (PVOID)0x20);
    sub_14055C600(*(_QWORD *)(a2 + 8));
    sub_14055CBA8(*(_QWORD *)(a2 + 16));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
