/*
 * XREFs of ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180086F9C
 * Callers:
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x1800873B4 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x1800867A8 (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 *     ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18008710C (-RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SE.c)
 */

void __fastcall RmpCpuSetManagerPopulateScores(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        unsigned int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _KAFFINITY_EX *a5,
        struct _SYSTEM_CPU_SET_INFORMATION *a6,
        unsigned int a7)
{
  __int64 v9; // r12
  _DWORD *v12; // rdi
  unsigned __int64 *v13; // r11
  unsigned int v14; // r15d
  char v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // r11
  unsigned int v20; // ecx
  __int64 v21; // rax
  struct _KAFFINITY_EX *v22; // r10
  unsigned __int64 *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  memset_0(a2, 0, 16LL * a3);
  v12 = (_DWORD *)((char *)a4 + 268);
  if ( a6 )
  {
    RmpCpuSetManagerPopulateScoresFromCpuSetInformation(a1, a2, a3, a4, a6, a7);
  }
  else
  {
    v13 = (unsigned __int64 *)((char *)a1 + 344);
    v14 = 0;
    v15 = (*v12 & 2) != 0;
    do
    {
      v16 = *v13;
      while ( RmpCpuSetManagerGetNextCandidateIndex(&v28, v16, v15) )
      {
        v20 = v28;
        v16 = v17 & ~(1LL << v28);
        v21 = 2LL * v14++;
        *((_DWORD *)a2 + 2 * v21) = v18;
        *((_DWORD *)a2 + 2 * v21 + 1) = v20;
      }
      v13 = (unsigned __int64 *)(v19 + 8);
    }
    while ( (unsigned int)(v18 + 1) < 0x20 );
  }
  if ( a3 )
  {
    v22 = a5;
    v23 = (unsigned __int64 *)((char *)a2 + 8);
    do
    {
      v24 = *((_DWORD *)a4 + 66);
      if ( v24 )
      {
        if ( (v24 & 1) == 0
          || (v25 = *((_QWORD *)a4 + *((unsigned int *)v23 - 2) + 1), _bittest64(&v25, *((unsigned int *)v23 - 1))) )
        {
          *v23 |= 0x80000000uLL;
        }
      }
      v26 = *v23;
      *v23 |= 1uLL;
      if ( (*(_BYTE *)v12 & 1) != 0 && *(_WORD *)v22 && *((_DWORD *)v23 - 2) < (unsigned int)*(unsigned __int16 *)v22 )
      {
        v27 = *((_QWORD *)v22 + *((unsigned int *)v23 - 2) + 1);
        if ( _bittest64(&v27, *((unsigned int *)v23 - 1)) )
          *v23 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v23 += 2;
      --v9;
    }
    while ( v9 );
  }
}
