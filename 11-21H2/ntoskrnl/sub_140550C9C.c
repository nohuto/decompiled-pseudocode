/*
 * XREFs of sub_140550C9C @ 0x140550C9C
 * Callers:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 *     sub_140550E2C @ 0x140550E2C (sub_140550E2C.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140550C9C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 160);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
