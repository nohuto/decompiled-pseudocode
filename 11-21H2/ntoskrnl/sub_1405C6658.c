/*
 * XREFs of sub_1405C6658 @ 0x1405C6658
 * Callers:
 *     sub_14038DDD4 @ 0x14038DDD4 (sub_14038DDD4.c)
 *     sub_140553A48 @ 0x140553A48 (sub_140553A48.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_1405C68A8 @ 0x1405C68A8 (sub_1405C68A8.c)
 *     sub_1405D01F0 @ 0x1405D01F0 (sub_1405D01F0.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4BE04 @ 0x140A4BE04 (sub_140A4BE04.c)
 *     sub_140A4BEC4 @ 0x140A4BEC4 (sub_140A4BEC4.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1405C6710 @ 0x1405C6710 (sub_1405C6710.c)
 */

char __fastcall sub_1405C6658(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    sub_1403D99B4(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    sub_1405C6710(a3);
  sub_1403D99B4((ULONG)&MaxDataSize, (PVOID)0xD8);
  sub_1403D99B4((ULONG)&byte_140C227C0, (PVOID)0x1C8);
  if ( *(_QWORD *)&qword_140C227F8 )
    sub_1403D99B4(qword_140C227F8, (PVOID)0x1D8);
  if ( qword_140C22800 )
    sub_1403D99B4(qword_140C22800, (PVOID)0x1C8);
  return sub_1403D99B4((ULONG)&qword_140C229A0, (PVOID)0x218);
}
