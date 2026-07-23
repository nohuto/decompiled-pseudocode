/*
 * XREFs of sub_140719180 @ 0x140719180
 * Callers:
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140419F54 @ 0x140419F54 (sub_140419F54.c)
 *     sub_140719250 @ 0x140719250 (sub_140719250.c)
 */

char __fastcall sub_140719180(__int64 a1, const void *a2, int a3, _DWORD *a4, int **a5)
{
  size_t v8; // rbp
  __int64 v9; // rcx
  int v10; // r15d
  _QWORD **v11; // r14
  _QWORD *i; // rdi
  int *v13; // rbx
  int v14; // esi

  v8 = (unsigned int)sub_140419F54();
  v10 = sub_140719250(v8, v9);
  v11 = (_QWORD **)(16LL * (v10 & 0x3F) + a1 + 1896);
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      return 0;
    v13 = (int *)(i - 1);
    if ( *((_DWORD *)i - 1) == v10 )
    {
      v14 = *v13;
      if ( a3 == (unsigned int)*v13 >> 31 && (_DWORD)v8 == v13[6] && !memcmp(a2, v13 + 8, v8) )
        break;
    }
  }
  *a4 = v14;
  if ( a5 )
    *a5 = v13;
  return 1;
}
