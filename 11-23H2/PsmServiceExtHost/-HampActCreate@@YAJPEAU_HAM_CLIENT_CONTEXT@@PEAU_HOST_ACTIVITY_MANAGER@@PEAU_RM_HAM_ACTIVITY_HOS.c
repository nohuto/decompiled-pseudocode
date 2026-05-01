/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000241C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F140 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003CEA8 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18007187C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071A2C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180014880 (-HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180015AD4 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180031230 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActCreate(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        unsigned int a5,
        unsigned __int64 a6,
        struct _HAM_ACTIVITY **a7)
{
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v12; // rdi
  int State; // ebx

  Heap = (struct _HAM_ACTIVITY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
  v12 = Heap;
  if ( Heap )
  {
    HampActInitialize(a2, a4, a3, a6, Heap);
    *((_QWORD *)v12 + 8) = a1;
    State = HampActAllocateState(v12, a5);
    if ( State < 0 || (State = HampActInsert(v12), State < 0) )
    {
      CemRcObjectDereference(v12);
    }
    else
    {
      State = 0;
      *a7 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
