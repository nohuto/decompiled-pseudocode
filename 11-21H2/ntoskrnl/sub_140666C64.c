/*
 * XREFs of sub_140666C64 @ 0x140666C64
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 * Callees:
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AA950 @ 0x1407AA950 (sub_1407AA950.c)
 */

__int64 __fastcall sub_140666C64(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return sub_1407AA950();
  if ( *(_QWORD *)(v1 + 32) )
    return sub_1407A9A80();
  return sub_1407A6CE4();
}
