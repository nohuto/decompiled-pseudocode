/*
 * XREFs of sub_1405DBCD4 @ 0x1405DBCD4
 * Callers:
 *     sub_140398BE0 @ 0x140398BE0 (sub_140398BE0.c)
 *     sub_1405DBE28 @ 0x1405DBE28 (sub_1405DBE28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405DBCD4(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned __int64 *i; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v5 = 0LL;
    for ( i = a5; ; ++i )
    {
      if ( a1 >= *i )
      {
        result = (unsigned int)(v5 + 1);
        if ( a1 < a5[result] )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a2 )
        return result;
    }
    ++*(_DWORD *)(a3 + 4 * v5);
    if ( a4 )
      *(_QWORD *)(a4 + 8 * v5) += a1;
  }
  return result;
}
