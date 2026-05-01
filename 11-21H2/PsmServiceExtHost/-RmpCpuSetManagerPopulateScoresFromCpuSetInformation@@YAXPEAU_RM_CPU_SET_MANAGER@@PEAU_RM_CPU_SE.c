/*
 * XREFs of ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x1800897D4
 * Callers:
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180089670 (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x180088E88 (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 */

void __fastcall RmpCpuSetManagerPopulateScoresFromCpuSetInformation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _SYSTEM_CPU_SET_INFORMATION *a5,
        unsigned int a6)
{
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  char *v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r10
  char v20; // bl
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // r10
  int v26; // r11d
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned int v29[4]; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v30[32]; // [rsp+30h] [rbp-138h] BYREF

  memset_0(v30, 0, sizeof(v30));
  v10 = 0;
  v11 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      v12 = (char *)a5 + v11;
      if ( !*((_DWORD *)v12 + 1) )
      {
        v13 = (unsigned __int8)v12[8];
        v14 = (unsigned int)(*((_DWORD *)v12 + 2) - 256) >> 16;
        v29[0] = (unsigned __int8)v12[8];
        v15 = *((_QWORD *)a1 + v14 + 43);
        if ( _bittest64(&v15, v13) )
        {
          v16 = 2LL * v10;
          v30[v14] |= 1LL << v13;
          v17 = *((_QWORD *)a2 + 2 * v10 + 1) & 0xFFFFFFFFFFFFFE01uLL;
          *((_DWORD *)a2 + 2 * v16) = v14;
          *((_DWORD *)a2 + 2 * v16 + 1) = v13;
          v18 = (*((_BYTE *)a4 + 268) & 4) != 0 ? v17 | (2LL * (unsigned __int8)v12[20]) : v17;
          ++v10;
          *((_QWORD *)a2 + v16 + 1) = v18;
          if ( v10 == a3 )
            break;
        }
      }
      v11 += *(_DWORD *)v12;
      if ( v11 >= a6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v10 != a3 )
    {
      v19 = v30;
      v20 = (*((_DWORD *)a4 + 67) & 2) != 0;
      v21 = a1 - (struct _RM_CPU_SET_MANAGER *)v30;
      do
      {
        v22 = ~*v19 & *(_QWORD *)((char *)v19 + v21 + 344);
        while ( RmpCpuSetManagerGetNextCandidateIndex(v29, v22, v20) )
        {
          v27 = v29[0];
          v22 = v23 & ~(1LL << SLOBYTE(v29[0]));
          v28 = 2LL * v24;
          *((_DWORD *)a2 + 2 * v28) = v26;
          *((_DWORD *)a2 + 2 * v28 + 1) = v27;
        }
        v19 = (_QWORD *)(v25 + 8);
      }
      while ( (unsigned int)(v26 + 1) < 0x20 );
    }
  }
}
