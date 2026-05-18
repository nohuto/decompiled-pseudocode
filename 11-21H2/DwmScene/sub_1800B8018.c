/*
 * XREFs of sub_1800B8018 @ 0x1800B8018
 * Callers:
 *     sub_180107C35 @ 0x180107C35 (sub_180107C35.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800B8018(char **a1)
{
  char **v1; // rdx
  char *v3; // rcx
  char *v4; // rbx

  v1 = (char **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = *(char **)v3;
      sub_180010884(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180010884(*a1, 0x38uLL);
}
