/*
 * XREFs of sub_140B01420 @ 0x140B01420
 * Callers:
 *     sub_140B01388 @ 0x140B01388 (sub_140B01388.c)
 * Callees:
 *     sub_1408271EC @ 0x1408271EC (sub_1408271EC.c)
 */

NTSTATUS sub_140B01420()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *v2; // r8
  NTSTATUS result; // eax

  xmmword_140C5ABA8 = 0LL;
  qword_140C5ABD8 = 0LL;
  v0 = -1LL;
  xmmword_140C5ABB8 = 0LL;
  xmmword_140C5ABC8 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = (char *)CurrentPrcb + 35216;
  do
    ++v0;
  while ( v2[v0] );
  result = sub_1408271EC(word_140CFFF10, 0x20Au, v2, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C5ABC8) = *((char *)CurrentPrcb + 64);
    LODWORD(xmmword_140C5ABC8) = *((unsigned __int8 *)CurrentPrcb + 67);
    *(_QWORD *)&xmmword_140C5ABA8 = word_140CFFF10;
  }
  return result;
}
