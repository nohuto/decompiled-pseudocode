/*
 * XREFs of PfSnCheckActionsNeeded @ 0x1407DD3D0
 * Callers:
 *     PfSnBeginScenario @ 0x1407DCF7C (PfSnBeginScenario.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     MmQueryTransitionPagesMadeColdCount @ 0x1403606A8 (MmQueryTransitionPagesMadeColdCount.c)
 *     MmQueryMemoryListInformation @ 0x140360AC0 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1407DD6F0 (PfSnPrefetchCacheEntryGet.c)
 *     PfpGetPageListCount @ 0x1407E0884 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int DefaultPagePriority; // eax
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // edx
  unsigned __int8 *v14; // r9
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // eax
  bool v26; // cf
  int v27; // eax
  int v28; // edx
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  unsigned __int8 *v33; // [rsp+48h] [rbp-B8h]
  int *v34; // [rsp+50h] [rbp-B0h]
  int *v35; // [rsp+58h] [rbp-A8h]
  _OWORD v36[11]; // [rsp+60h] [rbp-A0h] BYREF

  v33 = a1;
  v35 = a5;
  v34 = a4;
  memset(v36, 0, sizeof(v36));
  v30 = 0LL;
  v31 = 0;
  v7 = 3;
  v8 = 23;
  v9 = 3;
  if ( (dword_140C544F0 & 8) != 0 )
  {
    v8 = 22;
    v7 = 22;
    goto LABEL_20;
  }
  PsGetPagePriorityThread(a3);
  DefaultPagePriority = MmGetDefaultPagePriority();
  v11 = DefaultPagePriority;
  v12 = DefaultPagePriority - 1;
  if ( v13 <= DefaultPagePriority - 1 || DefaultPagePriority <= v12 )
  {
    v7 = 2;
    v8 = 2;
    goto LABEL_20;
  }
  if ( (dword_140C54790 & 0x10) != 0 && !a2 )
  {
    v9 = 1;
    v8 = 14;
  }
  v14 = v33;
  v15 = 314159LL;
  v16 = 8LL;
  do
  {
    v17 = *v14;
    v14 += 8;
    v15 = *(v14 - 1)
        + 37
        * (*(v14 - 2)
         + 37
         * (*(v14 - 3)
          + 37 * (*(v14 - 4) + 37 * (*(v14 - 5) + 37 * (*(v14 - 6) + 37 * (*(v14 - 7) + 37 * (v17 + 37 * v15)))))));
    --v16;
  }
  while ( v16 );
  v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v36, 0xB0u, (__int64)v14, &v30);
  v18 = (unsigned __int64)(PfpGetPageListCount((char *)&v36[6] + 8, 0LL) << 12) >> 18;
  v19 = (unsigned __int64)(PfpGetPageListCount((char *)&v36[6] + 8, v11) << 12) >> 18;
  v20 = (unsigned __int64)(PfpGetPageListCount((char *)&v36[6] + 8, v12) << 12) >> 18;
  LODWORD(v30) = MmQueryTransitionPagesMadeColdCount(&v31);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140C54720, 1u);
  v22 = PfSnPrefetchCacheEntryGet(&unk_140C546F8, v33, v15, (char *)&v30 + 4);
  v23 = (_DWORD *)v22;
  if ( !v22 )
  {
    v8 = 3;
    goto LABEL_19;
  }
  if ( HIDWORD(v30) )
  {
    v7 = 13;
    if ( v9 >= 2 )
      v8 = 13;
  }
  else
  {
    v24 = v32 - *(_DWORD *)(v22 + 112);
    v25 = *(_DWORD *)(v22 + 116);
    v26 = v24 < v25;
    if ( v24 < v25 )
    {
      v9 &= ~1u;
      v26 = v24 < v25;
    }
    v7 = v26 + 4;
    if ( v9 >= 2 )
    {
      v8 = 4;
      if ( (dword_140C544F0 & 2) == 0 )
      {
        if ( v24 >= 0x1B7740 )
        {
          if ( v24 >= 0x36EE80 )
            v27 = v18 - v23[26];
          else
            v27 = v20 - v23[25];
        }
        else
        {
          v27 = v19 - v23[24];
        }
        v28 = v30;
        if ( !v27 && (!v31 || (unsigned int)(v30 - v23[27]) < 0x100) )
        {
          v9 &= ~2u;
          v8 = 7;
        }
        goto LABEL_18;
      }
    }
  }
  v28 = v30;
LABEL_18:
  v23[28] = v32;
  v23[24] = v19;
  v23[25] = v20;
  v23[26] = v18;
  v23[27] = v28;
LABEL_19:
  ExReleaseResourceLite(&stru_140C54720);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_20:
  *v34 = v7;
  *v35 = v8;
  return v9;
}
