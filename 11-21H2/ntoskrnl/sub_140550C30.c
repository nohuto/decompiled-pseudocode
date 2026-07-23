/*
 * XREFs of sub_140550C30 @ 0x140550C30
 * Callers:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140550C30(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 128) )
    return sub_14042A5E0(a1, a2);
  else
    return 0LL;
}
