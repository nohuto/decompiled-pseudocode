/*
 * XREFs of sub_140A4DC40 @ 0x140A4DC40
 * Callers:
 *     sub_14038D050 @ 0x14038D050 (sub_14038D050.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140A4DC40(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax

  if ( _bittest64(&qword_140D068D8, 0x37u) )
  {
    result = __readmsr(0x1C4u);
    *a1 = result;
  }
  return result;
}
