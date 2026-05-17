/*
 * XREFs of RtlpAddSystemPath @ 0x1800EA9A0
 * Callers:
 *     RtlpAddForwarderPath @ 0x1800EA960 (RtlpAddForwarderPath.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

char *__fastcall RtlpAddSystemPath(void *Src, unsigned __int64 a2, char *a3)
{
  char *v6; // rbx
  char *result; // rax

  memmove(a3, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs - 2LL);
  v6 = &a3[2 * ((unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1) - 2];
  memmove(v6, Src, a2 - 2);
  result = &v6[2 * (a2 >> 1)];
  *((_WORD *)result - 1) = 59;
  return result;
}
