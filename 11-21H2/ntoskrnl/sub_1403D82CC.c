/*
 * XREFs of sub_1403D82CC @ 0x1403D82CC
 * Callers:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403D82CC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 168);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
