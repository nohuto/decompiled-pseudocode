/*
 * XREFs of sub_1409D083C @ 0x1409D083C
 * Callers:
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 * Callees:
 *     sub_1409D1048 @ 0x1409D1048 (sub_1409D1048.c)
 */

char __fastcall sub_1409D083C(wchar_t *a1, _DWORD *a2)
{
  wchar_t v2; // ax
  char v4; // di
  unsigned int v5; // eax
  wchar_t *v6; // rax
  __int64 v7; // rcx

  v2 = *a1;
  *a2 = 0;
  v4 = 0;
  switch ( v2 )
  {
    case '(':
      v4 = -2;
LABEL_7:
      *a2 = 1;
      return v4;
    case '{':
      goto LABEL_7;
    case ')':
      v4 = -1;
      goto LABEL_7;
    case '}':
      goto LABEL_7;
  }
  v5 = sub_1409D1048(a1);
  if ( v5 != -1 )
  {
    v4 = *((_BYTE *)&off_14000A990 + 24 * v5 + 8);
    v6 = (&off_14000A990)[3 * v5];
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    *a2 = v7;
  }
  return v4;
}
