/*
 * XREFs of sub_1408095C4 @ 0x1408095C4
 * Callers:
 *     sub_140808910 @ 0x140808910 (sub_140808910.c)
 *     sub_14080C690 @ 0x14080C690 (sub_14080C690.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14039ADE8 @ 0x14039ADE8 (sub_14039ADE8.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 */

struct _KTHREAD *__fastcall sub_1408095C4(unsigned int a1, int a2)
{
  __int64 v4; // rax

  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  v4 = sub_14039ADE8(a2);
  sub_140809838(a1, v4 & 0xFFFFFF);
  return sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
}
