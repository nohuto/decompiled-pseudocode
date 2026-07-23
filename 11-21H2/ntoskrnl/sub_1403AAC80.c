/*
 * XREFs of sub_1403AAC80 @ 0x1403AAC80
 * Callers:
 *     sub_140A53828 @ 0x140A53828 (sub_140A53828.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 */

bool sub_1403AAC80()
{
  unsigned __int64 v0; // rax
  bool result; // al
  unsigned __int64 v2; // rax

  result = 0;
  if ( (unsigned __int8)sub_1403AAE50() == 2 )
  {
    v0 = __readmsr(0x179u);
    if ( (v0 & 0x8000000) != 0 )
    {
      v2 = __readmsr(0x3Au);
      if ( (v2 & 0x100001) == 0x100001 )
        return 1;
    }
  }
  return result;
}
