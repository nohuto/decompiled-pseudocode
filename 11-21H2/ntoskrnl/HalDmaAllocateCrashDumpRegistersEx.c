/*
 * XREFs of HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeMapRegisters @ 0x14045746C (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140512C04 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 */

__int64 __fastcall HalDmaAllocateCrashDumpRegistersEx(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  unsigned int *v8; // r15
  __int64 v9; // rdi
  __int64 *i; // rdx
  __int64 result; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // ebp
  __int64 MapRegisters; // rax
  __int64 v16; // rbp
  int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  _QWORD *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int128 v32; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h]
  unsigned int v34; // [rsp+90h] [rbp+8h] BYREF

  v5 = a2;
  LODWORD(v33) = 0;
  v32 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 || (unsigned int)a3 > 1 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 432) && *(_BYTE *)(a1 + 437) )
  {
    *(_QWORD *)a4 = 0LL;
    *v8 = a2;
    v9 = a3;
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_DWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 8LL * a3 + 248) = 0LL;
    *(_DWORD *)(a1 + 4LL * a3 + 264) = 0;
    goto LABEL_9;
  }
  v9 = a3;
  v14 = *(_DWORD *)(a1 + 4LL * a3 + 264);
  if ( a2 <= v14 )
  {
    *a5 = a2;
    *(_QWORD *)a4 = *(_QWORD *)(a1 + 8LL * a3 + 248);
    goto LABEL_9;
  }
  if ( a2 > *(_DWORD *)(a1 + 224) )
    return 3221225485LL;
  if ( !KeGetCurrentIrql() )
  {
    MapRegisters = HalpDmaAllocateMapRegisters(a1, a2);
    v16 = MapRegisters;
    if ( MapRegisters )
    {
      *(_QWORD *)(a1 + 8 * v9 + 248) = MapRegisters;
      *(_DWORD *)(a1 + 4 * v9 + 264) = v5;
      if ( *(_DWORD *)(a1 + 512) == 3 )
      {
        v17 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))qword_140C4BDF0)(
                *(_QWORD *)(*(_QWORD *)(a1 + 504) + 40LL),
                v5 << 12,
                0LL,
                0LL,
                0LL,
                MapRegisters + 24);
        if ( v17 < 0 )
          goto LABEL_34;
        if ( HalpIsHvPresent() )
        {
          LODWORD(v32) = 2;
          v33 = v5;
          v19 = HalpMmAllocCtxAlloc(v18, 8 * v5);
          v20 = v19;
          if ( v19 )
          {
            *((_QWORD *)&v32 + 1) = v19;
            v21 = (_QWORD *)v16;
            v22 = 0LL;
            do
            {
              *(_QWORD *)(v20 + 8 * v22) = *v21 >> 12;
              v22 = (unsigned int)(v22 + 1);
              v21 = (_QWORD *)v21[1];
            }
            while ( v21 );
            v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int128 *, __int64))qword_140C4BE00)(
                    *(_QWORD *)(v16 + 24),
                    0LL,
                    3LL,
                    &v32,
                    v16 + 24);
            HalpMmAllocCtxFree(v23, v20);
            if ( v17 >= 0 )
            {
              *(_BYTE *)(v16 + 64) = 1;
              goto LABEL_31;
            }
          }
LABEL_34:
          HalpDmaFreeMapRegisters(a1, v16, (unsigned int)v5);
          return (unsigned int)v17;
        }
      }
LABEL_31:
      *v8 = v5;
      *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v9 + 248);
      goto LABEL_9;
    }
    return 3221225626LL;
  }
  if ( a1 != -264 && !*(_BYTE *)(a1 + 434) )
  {
    result = 3221225626LL;
LABEL_40:
    *(_QWORD *)a4 = 0LL;
    *v8 = *(_DWORD *)(a1 + 4LL * a3 + 264);
    return result;
  }
  if ( HalpDmaHibernateRegisterPhase == 1 )
  {
    result = 3221225659LL;
    goto LABEL_40;
  }
  v34 = a2 - v14;
  v25 = HalpDmaAllocateMapRegistersAtHighLevel(a1, &v34);
  v26 = v25;
  if ( !v25 )
  {
    *(_QWORD *)a4 = 0LL;
    *v8 = v14;
    return 3221225626LL;
  }
  v27 = v34;
  if ( v34 != (_DWORD)v5 - v14 )
  {
    v24 = v34 + v14;
    *(_QWORD *)a4 = 0LL;
    *v8 = v24;
    HalpDmaFreeMapRegisters(a1, v26, v27);
    return 3221225626LL;
  }
  if ( *(_QWORD *)(a1 + 8 * v9 + 248) )
  {
    _mm_lfence();
    v28 = *(_DWORD *)(a1 + 4 * v9 + 264);
    v29 = *(_QWORD *)(a1 + 8 * v9 + 248);
    if ( v28 > 1 )
    {
      v30 = v28 - 1;
      do
      {
        v29 = *(_QWORD *)(v29 + 8);
        --v30;
      }
      while ( v30 );
    }
    v31 = v34;
    *(_QWORD *)(v29 + 8) = v26;
    *(_DWORD *)(a1 + 4 * v9 + 264) += v31;
    *(_DWORD *)(a1 + 240) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v25;
    *(_DWORD *)(a1 + 240) = v5;
    *(_QWORD *)(a1 + 8 * v9 + 248) = v25;
    *(_DWORD *)(a1 + 4 * v9 + 264) = v5;
  }
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v9 + 248);
  *v8 = v5;
LABEL_9:
  if ( *(_QWORD *)a4 )
    *(_QWORD *)(*(_QWORD *)a4 + 56LL) = *(_QWORD *)a4;
  ++*(_DWORD *)(a1 + 4 * v9 + 272);
  for ( i = (__int64 *)HalpDmaHibernateAdapters; i != &HalpDmaHibernateAdapters; i = (__int64 *)*i )
  {
    if ( i - 35 == (__int64 *)a1 )
      return 0LL;
  }
  v12 = (_QWORD *)qword_140C4E278;
  v13 = (_QWORD *)(a1 + 280);
  if ( *(__int64 **)qword_140C4E278 != &HalpDmaHibernateAdapters )
    __fastfail(3u);
  *v13 = &HalpDmaHibernateAdapters;
  v13[1] = v12;
  *v12 = v13;
  qword_140C4E278 = (__int64)v13;
  return 0LL;
}
