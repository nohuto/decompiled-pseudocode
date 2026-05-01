/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180085D24
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x1800833C8 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087D30 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004626C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_SCORE@@K@Z @ 0x180085E70 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180085EF0 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x1800861A0 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800867C4 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086948 (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008729C (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x1800873B4 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_MANAGER **a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        unsigned int a3,
        struct _RM_CPU_SET_ALLOCATION **a4)
{
  int ObjectsForAllocation; // ebx
  struct _RM_CPU_SET_MANAGER *v8; // rbp
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax
  struct _RM_CPU_SET_ALLOCATION *v10; // rdi
  unsigned int v11; // r8d
  unsigned int v13; // [rsp+28h] [rbp-30h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = 0LL;
  if ( (unsigned int)(*(_DWORD *)a2 - 1) > 0x1FF )
  {
    ObjectsForAllocation = -1073741584;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 1) & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1073741584;
    v8 = *a1;
    ObjectsForAllocation = RmpCpuSetManagerCheckRequestSatisfiability(*a1, a2, a3);
    if ( ObjectsForAllocation < 0 )
      return (unsigned int)ObjectsForAllocation;
    ObjectsForAllocation = RmpCpuSetManagerRankCpuSets(v8, a2, (struct _RM_CPU_SET_SCORE **)&P, &v14);
    if ( ObjectsForAllocation >= 0 )
    {
      Heap = (struct _RM_CPU_SET_ALLOCATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x170uLL);
      v10 = Heap;
      if ( Heap )
      {
        RmpCpuSetManagerInitializeAllocation(v8, a2, Heap);
        ObjectsForAllocation = RmpCpuSetManagerAllocateObjectsForAllocation(v10);
        if ( ObjectsForAllocation < 0 )
        {
          RmpObjectRelease(v10);
        }
        else
        {
          RmpCpuSetManagerAcquireSetsForAllocation(v8, v10, v11, a2, (struct _RM_CPU_SET_SCORE *)P, v13);
          RmpCpuSetManagerInsertAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, v10);
          RmpCpuSetManagerApplyAllPolicyChanges(v8);
          RmpCpuSetManagerPublishAllocationState(v10);
          ObjectsForAllocation = 0;
          *a4 = v10;
        }
      }
      else
      {
        ObjectsForAllocation = -1073741801;
      }
    }
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)ObjectsForAllocation;
}
