/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006ABC
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002D6A8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18004A9A8 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAT_HAM_STATE_CHANGE_FLAGS@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006814 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALL.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x180006974 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006BB4 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        int a2,
        union _RM_SID *a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        _OWORD *a8,
        _OWORD *a9,
        _DWORD *a10,
        struct _WNF_STATE_NAME **a11)
{
  struct _WNF_STATE_NAME *Heap; // rax
  unsigned int v16; // ebx
  struct _WNF_STATE_NAME *v17; // rdi
  int State; // esi

  Heap = (struct _WNF_STATE_NAME *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v16 = 0;
  v17 = Heap;
  if ( Heap )
  {
    HampClientInitialize(a1, a2, a5, a6, a7, a8, a9, a10, Heap);
    State = HampClientAllocateState(v17, a3, a4);
    if ( State < 0 )
    {
      HampClientDestroy((struct _HAM_CLIENT_CONTEXT *)v17);
      return (unsigned int)State;
    }
    else
    {
      HampClientInsert((struct _HAM_CLIENT_CONTEXT *)v17);
      *a11 = v17;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v16;
}
