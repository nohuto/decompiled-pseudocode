/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1800043E0
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x1800040D0 (CrmLogSrvActivityStopStop.c)
 * Callees:
 *     CreateNewEventEntry @ 0x180004840 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x180048EB0 (EnableFlushTimer.c)
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 *     DestroyEventEntry @ 0x18005717A (DestroyEventEntry.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        signed __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 a5)
{
  signed __int64 v5; // r13
  unsigned __int8 v6; // r14
  __int64 v7; // r12
  unsigned int v9; // ecx
  int v10; // eax
  unsigned __int8 v11; // dl
  int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // et2
  unsigned int v15; // eax
  unsigned __int8 *v16; // r10
  __int64 v17; // r11
  unsigned __int64 i; // rdx
  int v19; // ecx
  unsigned int v20; // ebp
  __int64 v21; // rdx
  volatile signed __int64 *j; // rbx
  volatile signed __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // r14
  int v26; // eax
  unsigned int v27; // ebx
  unsigned __int8 v28; // r14
  unsigned __int8 v29; // dl
  signed __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r10d
  volatile signed __int64 *v33; // r9
  unsigned int v34; // ebx
  unsigned int NewEventEntry; // eax
  unsigned int v36; // eax
  signed __int64 v38; // rax
  volatile signed __int64 v39; // rtt
  signed __int64 v40; // [rsp+70h] [rbp+8h] BYREF
  __int64 v41; // [rsp+78h] [rbp+10h]
  unsigned int v42; // [rsp+80h] [rbp+18h]

  LOBYTE(v42) = a3;
  v41 = a2;
  v40 = a1;
  v5 = 0LL;
  v6 = a5;
  v7 = qword_1800DB280;
  v9 = 1025 * a4[16];
  v10 = a4[17];
  v11 = a5 + 2;
  v40 = 0LL;
  v42 = 0;
  v12 = v10 + (v9 ^ (v9 >> 6));
  v13 = 1025
      * (a4[21]
       + ((1025
         * (a4[20]
          + ((1025
            * (a4[19]
             + ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) ^ ((1025
                                                                                         * (a4[18]
                                                                                          + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) >> 6)))) ^ ((1025 * (a4[19] + ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) ^ ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) >> 6)))) >> 6)))) ^ ((1025 * (a4[20] + ((1025 * (a4[19] + ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) ^ ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) >> 6)))) ^ ((1025 * (a4[19] + ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) ^ ((1025 * (a4[18] + ((1025 * v12) ^ ((unsigned int)(1025 * v12) >> 6)))) >> 6)))) >> 6)))) >> 6)));
  v14 = 1025 * (a4[22] + (v13 ^ (v13 >> 6)));
  v15 = ((1025 * (a4[23] + (v14 ^ (v14 >> 6)))) >> 6) ^ (1025 * (a4[23] + (v14 ^ (v14 >> 6))));
  if ( (unsigned __int8)(a5 + 2) < 0xDu )
  {
    v16 = &a4[16 * v11];
    v17 = (unsigned __int8)(13 - v11);
    do
    {
      for ( i = 0LL; i < *((unsigned int *)v16 + 2); v15 = ((1025 * (v15 + v19)) >> 6) ^ (1025 * (v15 + v19)) )
      {
        v19 = *(unsigned __int8 *)(i + *(_QWORD *)v16);
        ++i;
      }
      v16 += 16;
      --v17;
    }
    while ( v17 );
  }
  v20 = 32769 * ((9 * v15) ^ ((9 * v15) >> 11));
  AcquireSRWLockShared((PSRWLOCK)(qword_1800DB280 + 264));
  for ( j = (volatile signed __int64 *)(v7 + 8LL * (v20 & 0x1F));
        ;
        j = (volatile signed __int64 *)((((__int64)v26 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v23 + 32) )
  {
    if ( !*j )
    {
      if ( *(_DWORD *)(v7 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v7 + 300);
        v34 = 234;
        goto LABEL_29;
      }
      if ( !v5 )
      {
        NewEventEntry = CreateNewEventEntry(v41, v21, (_DWORD)a4, v6, v20, (__int64)&v40);
        v5 = v40;
        v42 = NewEventEntry;
        if ( !v40 )
        {
          v34 = NewEventEntry;
          if ( NewEventEntry == 8 )
            ++*(_DWORD *)(v7 + 304);
          else
            ++*(_DWORD *)(v7 + 308);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(j, v5, 0LL) )
      {
        v40 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v7 + 344), *(unsigned int *)(v7 + 352));
        v36 = *(_DWORD *)(v7 + 256);
        v5 = v40;
        v34 = v42;
        if ( *(_DWORD *)(v7 + 288) < v36 )
          *(_DWORD *)(v7 + 288) = v36;
        goto LABEL_29;
      }
      v5 = v40;
    }
    v23 = *j;
    v24 = *(_DWORD *)(*j + 40);
    if ( v20 != v24 )
    {
      v26 = v20 - v24;
      continue;
    }
    v25 = *(_QWORD *)(v23 + 16);
    v26 = memcmp_0(a4 + 16, (const void *)(v25 + 16), 8uLL);
    if ( !v26 )
      break;
LABEL_42:
    v6 = a5;
  }
  v27 = *(unsigned __int8 *)(v23 + 45) + 2;
  if ( v27 < 0xD )
  {
    do
    {
      v21 = v25 + 16LL * v27;
      v26 = *(_DWORD *)&a4[16 * v27 + 8] - *(_DWORD *)(v21 + 8);
      if ( v26 )
        goto LABEL_42;
      v26 = memcmp_0(*(const void **)&a4[16 * v27], *(const void **)v21, *(unsigned int *)&a4[16 * v27 + 8]);
      if ( v26 )
        goto LABEL_42;
    }
    while ( ++v27 < 0xD );
  }
  v28 = a5;
  if ( v23 )
  {
    v29 = 2;
    if ( a5 )
    {
      do
      {
        v30 = **(_QWORD **)&a4[16 * v29];
        v31 = *(_QWORD *)(v23 + 16);
        v32 = *(unsigned __int8 *)(v31 + 16LL * v29 + 13);
        v33 = *(volatile signed __int64 **)(v31 + 16LL * v29);
        if ( v32 == 113 )
        {
          _InterlockedExchangeAdd64(v33, v30);
        }
        else if ( v32 == 114 || v32 == 115 )
        {
          do
          {
            v38 = *v33;
            if ( v32 == 114 )
            {
              if ( v30 >= v38 )
                break;
            }
            else if ( v30 <= v38 )
            {
              break;
            }
            v39 = *v33;
          }
          while ( v39 != _InterlockedCompareExchange64(v33, v30, v38) );
        }
        ++v29;
      }
      while ( v29 < (unsigned int)v28 + 2 );
      v5 = v40;
    }
  }
  v34 = v42;
LABEL_29:
  ReleaseSRWLockShared((PSRWLOCK)(v7 + 264));
  if ( v5 )
    DestroyEventEntry(v5);
  return v34;
}
