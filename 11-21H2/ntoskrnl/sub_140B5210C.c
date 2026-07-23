/*
 * XREFs of sub_140B5210C @ 0x140B5210C
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 * Callees:
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 */

__int64 sub_140B5210C()
{
  PVOID v0; // rbx
  struct _KTHREAD *v2; // rdi
  unsigned int v3; // ebx

  v0 = qword_140E01850;
  if ( (xmmword_140D06920 & 0x20000000000LL) == 0 )
    return 0LL;
  v2 = sub_1406F5B50();
  v3 = sub_140970C6C((__int64)v0);
  sub_1406F5AF0((__int64)v2);
  return v3;
}
