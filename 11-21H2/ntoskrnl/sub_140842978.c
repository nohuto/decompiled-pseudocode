/*
 * XREFs of sub_140842978 @ 0x140842978
 * Callers:
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 *     sub_140842820 @ 0x140842820 (sub_140842820.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 */

__int64 __fastcall sub_140842978(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  const wchar_t *v7; // rcx
  bool v8; // zf
  int v10; // eax

  v4 = a2;
  if ( !a2 )
    return v4;
  while ( 1 )
  {
    v6 = sub_140792CCC(a1, v4, *((_WORD *)a3 + 6));
    if ( !v6 )
      break;
    v7 = (const wchar_t *)sub_140842A24(a1, v6);
    if ( !v7 )
      break;
    if ( (a3[5] & 1) != 0 )
    {
      v10 = wcsicmp(*((const wchar_t **)a3 + 4), v7);
      v8 = v10 == 0;
      if ( v10 < 0 )
        return 0LL;
    }
    else
    {
      v8 = wcsicmp(v7, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v8 )
    {
      v4 = sub_140842C30(a1, *a3, a3);
      if ( v4 )
        continue;
    }
    return v4;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbpFindMatchingName");
  return 0LL;
}
