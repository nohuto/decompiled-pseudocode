/*
 * XREFs of sub_180027AB0 @ 0x180027AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

_QWORD *__fastcall sub_180027AB0(__int64 a1, _QWORD *a2, int a3)
{
  const char *v4; // rax

  v4 = std::_Syserror_map(a3);
  sub_180010DD0(a2, (__int64)v4);
  return a2;
}
