/*
 * XREFs of RtlReadThreadProfilingData @ 0x1800D7070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlReadThreadProfilingData(__int64 a1, int a2, __int64 a3)
{
  int v3; // r14d
  __int64 v6; // r8
  int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  int i; // ebp
  __int64 v12; // r10
  unsigned __int64 v13; // rax

  v3 = 0;
  if ( *(_WORD *)a3 != 288 )
    return 3221225990LL;
  if ( *(_BYTE *)(a3 + 2) != 1 )
    return 3221225713LL;
  if ( (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  do
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v3;
    v8 = __rdtsc();
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 56)
                         - *(_QWORD *)(a1 + 48)
                         + (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8);
    if ( (a2 & 1) != 0 )
    {
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a3 + 8) |= _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
    }
    if ( (a2 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        v10 = 0LL;
        for ( i = 1; (unsigned int)v10 < *(_DWORD *)(a1 + 12); v10 = (unsigned int)(v10 + 1) )
        {
          if ( (i & (unsigned int)v9) != 0 )
          {
            v12 = 2LL * (unsigned int)v10;
            *(_DWORD *)(a3 + 8 * v12 + 36) = 0;
            *(_DWORD *)(a3 + 16 * (v10 + 2)) = 0;
            v13 = __readpmc(*(_DWORD *)(a1 + 24 * v10 + 68));
            *(_QWORD *)(a3 + 8 * v12 + 40) = *(_QWORD *)(a1 + 24 * v10 + 80)
                                           + (unsigned int)(v13 - *(_DWORD *)(a1 + 24 * v10 + 72));
          }
          i *= 2;
        }
      }
      *(_BYTE *)(a3 + 3) = *(_BYTE *)(a1 + 12);
    }
    ++v3;
  }
  while ( v6 != *(_QWORD *)(a1 + 16) );
  *(_DWORD *)(a3 + 24) = v7;
  return 0LL;
}
