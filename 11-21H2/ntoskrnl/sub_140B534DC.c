/*
 * XREFs of sub_140B534DC @ 0x140B534DC
 * Callers:
 *     sub_140B2BF58 @ 0x140B2BF58 (sub_140B2BF58.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B534DC()
{
  unsigned int v0; // edx
  char *v1; // r8
  __int64 v2; // r9
  char *v3; // r8
  int v4; // edx
  char v5; // al

  v0 = *((unsigned __int16 *)qword_140D01440 + 18);
  if ( (_WORD)v0 )
  {
    v1 = (char *)qword_140D01440 + *((unsigned int *)qword_140D01440 + 10) + 60;
    qword_140D04970 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_140D04978;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_140D04978 = v4;
  }
  if ( *((_WORD *)qword_140D01440 + 19) )
    qword_140D04988 = (__int64)qword_140D01440 + *((unsigned int *)qword_140D01440 + 11) + 60;
  return 0LL;
}
