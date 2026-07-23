/*
 * XREFs of sub_140B29088 @ 0x140B29088
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 */

char __fastcall sub_140B29088(__int64 a1)
{
  dword_140C15C70 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&xmmword_140C15C60 = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140C15C78 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return sub_1403D99B4((ULONG)&xmmword_140C15C60, (PVOID)0x20);
}
