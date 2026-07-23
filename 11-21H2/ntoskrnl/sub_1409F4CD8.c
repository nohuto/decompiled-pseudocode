/*
 * XREFs of sub_1409F4CD8 @ 0x1409F4CD8
 * Callers:
 *     sub_140796D80 @ 0x140796D80 (sub_140796D80.c)
 *     sub_14080855C @ 0x14080855C (sub_14080855C.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

char __fastcall sub_1409F4CD8(__int64 a1, _WORD *a2)
{
  unsigned __int16 *v3; // rcx
  unsigned int v5; // esi
  const wchar_t *v6; // rcx
  unsigned int v7; // esi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  unsigned __int16 v10; // bp
  unsigned int v11; // esi
  char v12; // bl

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 80) + 1472LL);
  if ( !v3 )
    return 1;
  v5 = *v3;
  v6 = (const wchar_t *)*((_QWORD *)v3 + 1);
  v7 = v5 >> 1;
  v8 = &v6[v7];
  while ( v8 != v6 )
  {
    v9 = v8--;
    if ( *v8 == 92 )
    {
      v8 = v9;
      break;
    }
  }
  v10 = 0;
  v11 = v7 - (v8 - v6);
  if ( !*a2 )
    return 0;
  v12 = 1;
  while ( (unsigned __int16)a2[8 * v10 + 4] != v11 || wcsnicmp(*(const wchar_t **)&a2[8 * v10 + 8], v8, v11) )
  {
    if ( ++v10 >= *a2 )
      return 0;
  }
  return v12;
}
