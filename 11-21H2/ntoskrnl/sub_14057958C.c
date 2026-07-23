/*
 * XREFs of sub_14057958C @ 0x14057958C
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     sub_14057938C @ 0x14057938C (sub_14057938C.c)
 *     sub_140579780 @ 0x140579780 (sub_140579780.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 */

char __fastcall sub_14057958C(ULONG a1)
{
  dword_140C2A95C = a1;
  sub_1403D99B4((ULONG)&dword_140C2A95C, (PVOID)4);
  return sub_1403D99B4((ULONG)&dword_140C2AA00, (PVOID)0x4C);
}
