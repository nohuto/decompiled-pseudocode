/*
 * XREFs of sub_140A10AD0 @ 0x140A10AD0
 * Callers:
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 */

__int64 __fastcall sub_140A10AD0(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rbx
  int i; // esi
  wchar_t *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // r8
  __int64 v12; // rax
  const wchar_t *j; // rdx
  wchar_t v14; // ax
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_2;
  for ( i = *a1 != 0; ; ++i )
  {
    v8 = wcschr(a1, 0x3Bu);
    if ( !v8 )
      break;
    a1 = v8 + 1;
  }
  v10 = sub_14075B444(v9, 48LL * (unsigned int)(i - 1) + 56);
  v11 = v10;
  if ( !v10 )
  {
LABEL_2:
    sub_1406E0C3C(1LL, (__int64)"SdbpCreateSearchPathPartsFromPath");
    return 0LL;
  }
  *v10 = i;
  v12 = -1LL;
  do
    ++v12;
  while ( v3[v12] );
  for ( j = &v3[v12]; j >= v3; --j )
  {
    v14 = *j;
    if ( *j == 92 )
    {
      if ( !v5 )
        v5 = j;
LABEL_14:
      if ( v3 != j )
        continue;
      goto LABEL_15;
    }
    if ( v14 != 59 )
      goto LABEL_14;
LABEL_15:
    if ( v5 )
    {
      if ( v14 == 59 )
        ++j;
      v15 = 6LL * v4++;
      v11[2 * v15 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v11[2 * v15 + 2] = j;
    }
  }
  *a2 = v11;
  return 1LL;
}
