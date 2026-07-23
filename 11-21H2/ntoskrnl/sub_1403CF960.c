/*
 * XREFs of sub_1403CF960 @ 0x1403CF960
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1403CF960()
{
  if ( byte_140C54D68 == 1 )
  {
    if ( qword_140C54D60 )
    {
      ExFreePoolWithTag(qword_140C54D60, 0);
      qword_140C54D60 = 0LL;
    }
    byte_140C54D68 = 0;
  }
  return 0LL;
}
