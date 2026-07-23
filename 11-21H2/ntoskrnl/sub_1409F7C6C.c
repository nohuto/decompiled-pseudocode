/*
 * XREFs of sub_1409F7C6C @ 0x1409F7C6C
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1407D6EC0 @ 0x1407D6EC0 (sub_1407D6EC0.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140990A90 @ 0x140990A90 (sub_140990A90.c)
 */

void sub_1409F7C6C()
{
  __int64 *i; // rbx

  sub_1407D6F54(1u);
  sub_140990A90();
  for ( i = (__int64 *)qword_140C15B40; i != &qword_140C15B40; i = (__int64 *)*i )
    sub_1407D6EC0(1, (__int64)(i - 260));
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
}
