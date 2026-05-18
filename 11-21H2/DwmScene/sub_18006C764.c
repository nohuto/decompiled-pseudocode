/*
 * XREFs of sub_18006C764 @ 0x18006C764
 * Callers:
 *     sub_18006C7FC @ 0x18006C7FC (sub_18006C7FC.c)
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180103E1E @ 0x180103E1E (sub_180103E1E.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18006C764(char **a1)
{
  char *v1; // rdx
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(__int64 **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = v3[5];
      v5 = (__int64 *)*v3;
      if ( v4 >= 8 )
        sub_180010884((char *)v3[2], 2 * v4 + 2);
      v3[4] = 0LL;
      v3[5] = 7LL;
      *((_WORD *)v3 + 8) = 0;
      sub_180010884((char *)v3, 0x30uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_180010884(*a1, 0x30uLL);
}
