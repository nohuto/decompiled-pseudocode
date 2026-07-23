/*
 * XREFs of sub_14057036C @ 0x14057036C
 * Callers:
 *     sub_140A69780 @ 0x140A69780 (sub_140A69780.c)
 * Callees:
 *     <none>
 */

bool sub_14057036C()
{
  return (_bittest64(&qword_140D06A68, 8u) & _bittest64(&qword_140D068D8, 0x17u)) != 0;
}
