/*
 * XREFs of VidSchiCreateNode @ 0x1C00AF488
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00AE220 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchiCreateNode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 Pool2; // rax
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r8
  BOOL v14; // eax
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // edx
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  int *v26; // rcx
  int v27; // eax
  __int64 result; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 224 * *(_DWORD *)(a1 + 2620) + 11264;
  if ( v8 < 0x2CE0 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v29, 0x40000LL);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, v8, 828467542LL);
  v10 = 0;
  v11 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  *(_DWORD *)Pool2 = 828467542;
  v12 = 32LL;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_WORD *)(Pool2 + 4) = v6;
  *(_WORD *)(Pool2 + 6) = v5;
  *(_WORD *)(Pool2 + 8) = v7;
  *(_QWORD *)(Pool2 + 1736) = 0LL;
  *(_QWORD *)(Pool2 + 1744) = 0LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    *(_DWORD *)(Pool2 + 12) |= 0x10u;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_DWORD *)(a1 + 80) == 1
       || *(_WORD *)(344LL * (unsigned __int16)v5 + *(_QWORD *)(v13 + 2680) + 2) == (unsigned __int16)v7;
    v15 = *(_QWORD *)(v13 + 2680);
    v16 = 0;
    v17 = 344LL * (unsigned __int16)v5;
    if ( (*(_DWORD *)(v17 + v15 + 16) & 0x20) != 0 )
      LOBYTE(v16) = *(_DWORD *)(v17 + v15 + 24) == (unsigned __int16)v7;
    v18 = (4 * v16) | v14 & 0xFFFFFFFB | *(_DWORD *)(v11 + 12) & 0xFFFFFFFA;
    v19 = *(_QWORD *)(344 * v5 + v15 + 32);
    if ( v19 )
      v20 = 2 * (*(_BYTE *)(74 * v7 + v19 + 68) & 1);
    else
      v20 = 0;
    v21 = v20 | v18 & 0xFFFFFFFD;
    *(_DWORD *)(v11 + 12) = v21;
    if ( (v21 & 2) != 0 )
    {
      v30 = v19 ? 4 * (*(_BYTE *)(74 * v7 + v19 + 68) & 2) : 0;
      v21 = v30 | v21 & 0xFFFFFFF7;
      *(_DWORD *)(v11 + 12) = v21;
      if ( (v21 & 2) != 0 )
      {
        if ( v19 )
          v31 = *(unsigned __int16 *)(74 * v7 + v19 + 70);
        else
          v31 = 0;
        *(_WORD *)(a1 + 56) = 257;
        if ( !v31 )
          v31 = 0xFFFF;
        *(_DWORD *)(v11 + 1724) = v31;
      }
    }
    if ( (v21 & 1) != 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v21 & 2) != 0) != *(_BYTE *)(a1 + 55) || ((v21 & 8) != 0) != *(_BYTE *)(a1 + 58) )
        {
          WdLogSingleEntry5(0LL, 281LL, 20480LL, v5, 0LL, 0LL);
          __debugbreak();
          JUMPOUT(0x1C00D2470LL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 55) = (v21 & 2) != 0;
        *(_BYTE *)(a1 + 58) = (v21 & 8) != 0;
      }
    }
  }
  KeInitializeEvent((PRKEVENT)(v11 + 11216), SynchronizationEvent, 0);
  v22 = (_QWORD *)(v11 + 2056);
  do
  {
    v22[1] = v22;
    *v22 = v22;
    v22 += 2;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)(v11 + 2576) = v11 + 2568;
  v23 = v11 + 240;
  *(_QWORD *)(v11 + 2568) = v11 + 2568;
  v24 = 3LL;
  *(_QWORD *)(v11 + 2592) = v11 + 2584;
  *(_QWORD *)(v11 + 2584) = v11 + 2584;
  *(_QWORD *)(v11 + 2608) = v11 + 2600;
  *(_QWORD *)(v11 + 2600) = v11 + 2600;
  *(_QWORD *)(v11 + 2624) = v11 + 2616;
  *(_QWORD *)(v11 + 2616) = v11 + 2616;
  *(_QWORD *)(v11 + 2640) = v11 + 2632;
  *(_QWORD *)(v11 + 2632) = v11 + 2632;
  do
  {
    *(_OWORD *)v23 = 0LL;
    *(_OWORD *)(v23 + 16) = 0LL;
    *(_OWORD *)(v23 + 32) = 0LL;
    *(_QWORD *)(v23 + 48) = 0LL;
    KeInitializeEvent((PRKEVENT)v23, SynchronizationEvent, 0);
    v23 += 56LL;
    --v24;
  }
  while ( v24 );
  *(_QWORD *)(v11 + 416) = v11 + 408;
  *(_QWORD *)(v11 + 408) = v11 + 408;
  *(_QWORD *)(v11 + 432) = v11 + 424;
  *(_QWORD *)(v11 + 424) = v11 + 424;
  *(_QWORD *)(v11 + 1704) = v11 + 1696;
  *(_QWORD *)(v11 + 1696) = v11 + 1696;
  *(_QWORD *)(v11 + 11256) = v11 + 11248;
  *(_QWORD *)(v11 + 11248) = v11 + 11248;
  if ( *(_DWORD *)(a1 + 2620) )
  {
    do
    {
      v25 = 224LL * v10;
      *(_DWORD *)(v25 + v11 + 11264) = 912353622;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1736), v11 + 11248, (_QWORD *)(v25 + v11 + 11280), 0LL);
      ++v10;
    }
    while ( v10 < *(_DWORD *)(a1 + 2620) );
  }
  v26 = *(int **)(a1 + 2568);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 2608) )
    v26 += v6;
  v27 = *v26;
  *(_DWORD *)(v11 + 11240) = -1;
  *(_DWORD *)(v11 + 2880) = v27;
  result = v11;
  *(_BYTE *)(v11 + 11244) = 1;
  return result;
}
