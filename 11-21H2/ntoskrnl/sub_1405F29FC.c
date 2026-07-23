/*
 * XREFs of sub_1405F29FC @ 0x1405F29FC
 * Callers:
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1405F29FC(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = off_140C09078;
  v2 = 0LL;
  while ( v1 != (_DWORD *)&off_140C09078 )
  {
    if ( v1[4] == a1 )
      return (char *)(v1 + 6);
    v1 = *(_DWORD **)v1;
  }
  return (char *)v2;
}
