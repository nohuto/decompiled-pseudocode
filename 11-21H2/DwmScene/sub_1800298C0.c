/*
 * XREFs of sub_1800298C0 @ 0x1800298C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_1800298C0(__int64 a1, __int64 *a2, int a3)
{
  char *v4; // rax
  size_t v5; // r8

  v4 = (char *)std::_Syserror_map(a3);
  a2[3] = 15LL;
  a2[2] = 0LL;
  v5 = -1LL;
  *(_BYTE *)a2 = 0;
  do
    ++v5;
  while ( v4[v5] );
  sub_180012190(a2, v4, v5);
  return a2;
}
