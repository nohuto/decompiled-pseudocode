/*
 * XREFs of sub_1406E3A88 @ 0x1406E3A88
 * Callers:
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140811574 @ 0x140811574 (sub_140811574.c)
 *     sub_1409583B0 @ 0x1409583B0 (sub_1409583B0.c)
 *     sub_14095846C @ 0x14095846C (sub_14095846C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E3A88(unsigned int *a1, unsigned int a2, _QWORD *a3, _DWORD *a4, int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rdx

  v5 = 0;
  if ( a1 )
  {
    if ( a2 >= *a1 )
    {
      return (unsigned int)-1073741684;
    }
    else
    {
      v6 = 3LL * a2;
      *a3 = *(_QWORD *)&a1[2 * v6 + 4];
      if ( a4 )
        *a4 = a1[2 * v6 + 6];
      if ( a5 )
        *a5 = a1[2 * v6 + 8] & 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
