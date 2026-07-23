/*
 * XREFs of sub_140394C30 @ 0x140394C30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140394C30(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r12d
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  LARGE_INTEGER v10; // rbx
  unsigned __int64 v11; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int i; // r14d
  KIRQL v14; // al
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdi
  int v17; // edi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40) & 3;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  v5 = 100;
  v6 = (KSPIN_LOCK *)(v3 + 768);
  v7 = v3 + 24LL * ((8 * v2) | (unsigned int)v4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 768));
  --*(_DWORD *)(v7 + 16);
  ++*(_DWORD *)(v7 + 20);
  v9 = v8;
  KeReleaseSpinLockFromDpcLevel(v6);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
LABEL_3:
  v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
  sub_14037D2EC(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v1 - 5), 0);
  v11 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v10.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v11 < v5 )
    v5 = v11;
  PerformanceCounter.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
LABEL_6:
    v14 = KeAcquireSpinLockRaiseToDpc(v6);
    v15 = *(_QWORD **)(v7 + 8);
    v16 = v14;
    if ( *v15 )
    {
      if ( v15 == (_QWORD *)v7 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v7;
        *(_QWORD *)v7 = **(_QWORD **)v7;
        if ( v1 == v15 )
        {
          *(_QWORD *)v7 = 0LL;
          *(_QWORD *)(v7 + 8) = v7;
        }
        else
        {
          --*v15;
        }
      }
      KeReleaseSpinLockFromDpcLevel(v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = *((_QWORD *)v29 + 4375);
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v23 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
            *(_DWORD *)(v30 + 20) &= v31;
            if ( v23 )
              sub_140418E4C(v29);
          }
        }
      }
      __writecr8(v16);
      goto LABEL_3;
    }
    if ( i )
      break;
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v23 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8(v16);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = 0;
    while ( *(_DWORD *)(v7 + 16) <= *(_DWORD *)(v7 + 20) )
    {
      if ( **(_QWORD **)(v7 + 8) )
        goto LABEL_6;
      if ( (++v17 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= (unsigned __int64)v5 )
      {
        break;
      }
      _mm_pause();
    }
  }
  --*(_DWORD *)(v7 + 20);
  KeReleaseSpinLockFromDpcLevel(v6);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v16 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v33 = *((_QWORD *)v32 + 4375);
        v23 = ((unsigned int)result & *(_DWORD *)(v33 + 20)) == 0;
        *(_DWORD *)(v33 + 20) &= result;
        if ( v23 )
          result = sub_140418E4C(v32);
      }
    }
  }
  __writecr8(v16);
  return result;
}
