/*
 * XREFs of IopInitializeMdlCache @ 0x140834C34
 * Callers:
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  qword_140C5D688 = 0LL;
  result = &qword_140C5D690;
  qword_140C5D6A8 = 0LL;
  qword_140C5D698 = (__int64)&qword_140C5D690;
  qword_140C5D690 = (__int64)&qword_140C5D690;
  IopMcData = 3148801;
  return result;
}
