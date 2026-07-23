/*
 * XREFs of sub_14065461C @ 0x14065461C
 * Callers:
 *     sub_140AAA04C @ 0x140AAA04C (sub_140AAA04C.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void *__fastcall sub_14065461C(unsigned int a1, __int64 a2)
{
  void *result; // rax
  _QWORD *v3; // rcx

  if ( a1 < 4 )
  {
    result = &unk_140D04CF0;
    v3 = (_QWORD *)((char *)&unk_140D04CF0 + 40 * a1);
    if ( *v3 )
      return (void *)sub_14042A5E0(v3, a2);
  }
  return result;
}
