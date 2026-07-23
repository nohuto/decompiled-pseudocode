/*
 * XREFs of sub_1406CD9E0 @ 0x1406CD9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407B67A0 @ 0x1407B67A0 (sub_1407B67A0.c)
 */

__int64 sub_1406CD9E0()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&dword_140C1BEA0);
    v1 = dword_140C1BEA0 & 0xFFFFFFFC;
    if ( (_InterlockedAnd(&dword_140C1BEA0, 0xFFFFFFFC) & 1) != 0 )
    {
      v0 = 1;
      LOBYTE(v1) = 0;
    }
    else
    {
      LOBYTE(v1) = 1;
    }
    sub_1407B67A0(v1);
    result = (unsigned int)_InterlockedCompareExchange(&dword_140C1BEA0, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
    dword_140C095CC = 7;
  return result;
}
