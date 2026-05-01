/*
 * XREFs of ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18004C2EC
 * Callers:
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x18004C170 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18004C214 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x180006260 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002FB98 (RmpWnfCreateStateNameForClient.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x1800880D0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmpActivatorRegister(
        struct _RM_SERVICE_GLOBALS *a1,
        union _RM_SID *a2,
        ULONG a3,
        struct _WNF_STATE_NAME **a4)
{
  struct _RM_SERVICE_GLOBALS *v5; // r15
  struct _WNF_STATE_NAME *Heap; // rax
  unsigned int v9; // edi
  struct _WNF_STATE_NAME *v10; // rbx
  int StateNameForClient; // esi

  v5 = RmSvcGlobals;
  Heap = (struct _WNF_STATE_NAME *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = 0;
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    *v10 = (struct _WNF_STATE_NAME)v5;
    v10[7].Data[0] = a3;
    v10[6] = 0LL;
    StateNameForClient = RmpWnfCreateStateNameForClient(a2, 0x400u, 0, v10 + 3);
    if ( StateNameForClient < 0
      || (StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList(&v10[4]), StateNameForClient < 0) )
    {
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)v10);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return (unsigned int)StateNameForClient;
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
