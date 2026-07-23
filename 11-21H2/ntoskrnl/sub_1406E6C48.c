/*
 * XREFs of sub_1406E6C48 @ 0x1406E6C48
 * Callers:
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E6C48(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r8
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    v5 = 0;
    if ( dword_140C16E40 )
    {
      while ( 1 )
      {
        v6 = qword_140C16C40[v5];
        v7 = *a1 - *(_QWORD *)v6;
        if ( *a1 == *(_QWORD *)v6 )
          v7 = a1[1] - *(_QWORD *)(v6 + 8);
        if ( !v7 && a2 == *(_WORD *)(v6 + 16) )
          break;
        if ( ++v5 >= (unsigned int)dword_140C16E40 )
          return v2;
      }
      return qword_140C16C40[v5];
    }
  }
  return v2;
}
