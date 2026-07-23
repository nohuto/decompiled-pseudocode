/*
 * XREFs of sub_140989F5C @ 0x140989F5C
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140397BB4 @ 0x140397BB4 (sub_140397BB4.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 */

NTSTATUS sub_140989F5C()
{
  sub_140753094(1);
  sub_140397BB4(1, 0);
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  return KeWaitForSingleObject(&unk_140C03698, Executive, 0, 0, 0LL);
}
