/*
 * XREFs of sub_14095BE50 @ 0x14095BE50
 * Callers:
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 */

__int64 sub_14095BE50()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)qword_140C445B0; i != &qword_140C445B0 && sub_14094C428(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
