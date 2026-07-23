/*
 * XREFs of sub_140292F10 @ 0x140292F10
 * Callers:
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall sub_140292F10(char *a1, char *a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // cx
  unsigned __int16 result; // ax
  __int64 v6; // r10
  signed __int64 v7; // r11
  __int64 v8; // rcx

  v4 = *((_WORD *)a1 + 1);
  if ( a3 > v4 )
    a3 = v4;
  *(_WORD *)a1 = a3;
  result = 0;
  if ( a3 )
  {
    v6 = a3;
    v7 = a1 - a2;
    result = a3;
    do
    {
      *(_QWORD *)&a2[v7 + 8] = *(_QWORD *)a2;
      a2 += 8;
      --v6;
    }
    while ( v6 );
    v4 = *((_WORD *)a1 + 1);
  }
  if ( result < v4 )
  {
    do
    {
      v8 = result++;
      *(_QWORD *)&a1[8 * v8 + 8] = 0LL;
    }
    while ( result < *((_WORD *)a1 + 1) );
  }
  return result;
}
