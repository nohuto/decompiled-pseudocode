/*
 * XREFs of sub_140B27838 @ 0x140B27838
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     sub_140859AD4 @ 0x140859AD4 (sub_140859AD4.c)
 *     sub_140859BF8 @ 0x140859BF8 (sub_140859BF8.c)
 */

__int64 sub_140B27838()
{
  void *v0; // rcx

  sub_140859BF8();
  qword_140C468E8 = 0LL;
  qword_140C468F8 = (__int64)&qword_140C468F0;
  qword_140C468F0 = (__int64)&qword_140C468F0;
  KeInitializeQueue(&stru_140C46900, (unsigned __int8)byte_140C097C5);
  return sub_140859AD4(v0);
}
