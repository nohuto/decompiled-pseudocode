/*
 * XREFs of sub_180027D00 @ 0x180027D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180026C48 @ 0x180026C48 (sub_180026C48.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 */

char **__fastcall sub_180027D00(char **lpMem, char a2)
{
  char **v2; // rbx

  v2 = lpMem + 3;
  sub_180026C48((__int64)(lpMem + 3), (__int64)(lpMem + 3), *((char **)lpMem[3] + 1));
  sub_180010884(*v2, 0x40uLL);
  sub_1800FC250(lpMem + 1);
  *lpMem = (char *)&Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
