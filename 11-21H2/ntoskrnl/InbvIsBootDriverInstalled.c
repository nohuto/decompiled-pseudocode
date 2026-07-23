/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403D8370
 * Callers:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 *     sub_1403D8300 @ 0x1403D8300 (sub_1403D8300.c)
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall InbvIsBootDriverInstalled(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 56) )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
