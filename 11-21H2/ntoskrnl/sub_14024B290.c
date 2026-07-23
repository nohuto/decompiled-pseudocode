/*
 * XREFs of sub_14024B290 @ 0x14024B290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 sub_14024B290()
{
  unsigned __int64 result; // rax

  result = __readcr3();
  __writecr3(result);
  return result;
}
