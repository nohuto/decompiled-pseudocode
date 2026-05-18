/*
 * XREFs of _initp_eh_hooks @ 0x180002930
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040B04 @ 0x180040B04 (sub_180040B04.c)
 */

__int64 initp_eh_hooks()
{
  __int64 result; // rax

  result = sub_180040B04(&qword_1801F4C38);
  qword_1801F7FD0 = result;
  return result;
}
