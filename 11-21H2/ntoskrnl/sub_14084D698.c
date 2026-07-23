/*
 * XREFs of sub_14084D698 @ 0x14084D698
 * Callers:
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 *     sub_14053AF8C @ 0x14053AF8C (sub_14053AF8C.c)
 * Callees:
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 */

__int64 __fastcall sub_14084D698(__int64 *a1)
{
  __int64 result; // rax

  result = sub_140286210(*a1);
  if ( !result )
    ++dword_140C53DA0;
  return result;
}
