/*
 * XREFs of sub_140461882 @ 0x140461882
 * Callers:
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140461882(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10

  *a3 = 0LL;
  result = *((unsigned int *)a1 + 2);
  if ( (_DWORD)result )
  {
    v4 = *a1;
    v5 = (unsigned int)result;
    do
    {
      if ( a2 )
      {
        result = (unsigned __int64)*(unsigned int *)(v4 + 8) >> 29;
        if ( (*(_DWORD *)(v4 + 8) & *(_DWORD *)(a2 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          result = *(_QWORD *)v4;
          *a3 |= *(_QWORD *)v4;
        }
      }
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
