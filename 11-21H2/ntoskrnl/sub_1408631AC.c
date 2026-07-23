/*
 * XREFs of sub_1408631AC @ 0x1408631AC
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 */

__int64 *sub_1408631AC()
{
  __int64 *result; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int128 *v3; // r9
  __int64 v4; // r11
  int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r10
  const char *v9; // rcx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax

  stru_140C49300.Parameter = 0LL;
  stru_140C49300.List.Flink = 0LL;
  stru_140C49300.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407C0D40;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&stru_140C49340);
  result = &qword_140C49320;
  qword_140C49328 = (__int64)&qword_140C49320;
  qword_140C49320 = (__int64)&qword_140C49320;
  _mm_lfence();
  if ( !qword_140C4EDE0 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0x5A4LL;
    if ( !v2 )
      v2 = 1LL;
    qword_140C4EDE0 = v2;
    v3 = &xmmword_140E018C0;
    v4 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5A4LL;
    qword_140C4EDE8 = v4;
    _mm_prefetch((const char *)&xmmword_140E018C0, 0);
    v5 = 64;
    v6 = v2;
    v7 = 8LL;
    do
    {
      v6 = __ROR8__(v6 - *(_QWORD *)v3, v4);
      v3 = (__int128 *)((char *)v3 + 8);
      v5 -= 8;
      --v7;
    }
    while ( v7 );
    for ( ; v5; --v5 )
    {
      v18 = *(unsigned __int8 *)v3;
      v3 = (__int128 *)((char *)v3 + 1);
      v6 = __ROR8__(v6 - v18, v4);
    }
    v8 = (_QWORD *)xmmword_140E018C0;
    v9 = (const char *)xmmword_140E018C0;
    qword_140C4EDF8 = v6;
    v10 = 4 * xmmword_140E018D0;
    v11 = xmmword_140E018C0 + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)xmmword_140E018C0 < v11 )
    {
      do
      {
        _mm_prefetch(v9, 0);
        v9 += 64;
      }
      while ( (unsigned __int64)v9 < v11 );
    }
    v12 = v2;
    if ( v10 >= 8 )
    {
      v13 = (unsigned __int64)v10 >> 3;
      do
      {
        v12 = __ROR8__(v12 - *v8++, v4);
        v10 -= 8;
        --v13;
      }
      while ( v13 );
    }
    for ( ; v10; --v10 )
    {
      v14 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      v12 = __ROR8__(v12 - v14, v4);
    }
    qword_140C4EE00 = v12;
    v15 = xmmword_140D06F80;
    _mm_prefetch((const char *)xmmword_140D06F80, 0);
    v16 = 4LL;
    v17 = 32;
    do
    {
      v2 = __ROR8__(v2 - *(_QWORD *)v15, v4);
      v15 = (__int128 *)((char *)v15 + 8);
      v17 -= 8;
      --v16;
    }
    while ( v16 );
    for ( ; v17; --v17 )
    {
      v19 = *(unsigned __int8 *)v15;
      v15 = (__int128 *)((char *)v15 + 1);
      v2 = __ROR8__(v2 - v19, v4);
    }
    qword_140C4EE08 = v2;
    result = (__int64 *)(sub_1402F5718() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL);
    qword_140C4EDF0 = (__int64)result;
  }
  return result;
}
