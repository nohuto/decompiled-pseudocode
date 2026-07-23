/*
 * XREFs of sub_140399424 @ 0x140399424
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     sub_14054F010 @ 0x14054F010 (sub_14054F010.c)
 */

__int64 sub_140399424()
{
  __int64 result; // rax

  result = qword_140D051A8;
  if ( qword_140D051A8 )
  {
    *(_DWORD *)qword_140D051A8 = -1;
    return sub_14054F010();
  }
  return result;
}
