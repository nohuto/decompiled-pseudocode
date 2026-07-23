/*
 * XREFs of sub_140A4D310 @ 0x140A4D310
 * Callers:
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 * Callees:
 *     sub_140222368 @ 0x140222368 (sub_140222368.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140A4CD50 @ 0x140A4CD50 (sub_140A4CD50.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 */

unsigned __int64 __fastcall sub_140A4D310(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // r14d
  unsigned __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  int v15; // edx

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      sub_140A4D92C();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *a2;
    v10 = *(_DWORD *)(a1 + 40) - v8;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      if ( v9 >= *(_DWORD *)(a1 + 32) - (int)v8 )
        v9 = *(_DWORD *)(a1 + 32) - v8;
      *a2 = v9;
    }
    if ( v9 <= v10 )
    {
      if ( !v9 )
        goto LABEL_10;
      v11 = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      v12 = sub_140A4CD50(*(_DWORD *)a1 + (unsigned int)(v8 % *(unsigned int *)(a1 + 8)), v9, a5);
      v9 = v12;
      if ( v12 <= v10 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      if ( !*((_DWORD *)KeGetCurrentPrcb() + 9) && (++dword_140C548A0 & 0x3F) == 0 )
      {
        sub_140222368();
        KeQueryPerformanceCounter(0LL);
      }
      v15 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v9 >= *(_DWORD *)(a1 + 32) - v15 )
        v9 = *(_DWORD *)(a1 + 32) - v15;
    }
    while ( v9 > *(_DWORD *)(a1 + 40) - v15 && *(_QWORD *)(a1 + 48) == v8 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        sub_140A4D92C();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v12;
  if ( v12 )
  {
    v13 = v12;
    result = v11;
    *(_QWORD *)(a1 + 48) += v13;
    goto LABEL_8;
  }
LABEL_10:
  result = 0LL;
LABEL_8:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
