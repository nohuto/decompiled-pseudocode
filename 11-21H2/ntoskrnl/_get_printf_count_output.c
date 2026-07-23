/*
 * XREFs of _get_printf_count_output @ 0x1403E57CC
 * Callers:
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C0DB00 == (_security_cookie | 1);
}
