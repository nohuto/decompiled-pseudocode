/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FD60
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF58 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z @ 0x18000EACC (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z.c)
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180010D00 (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x1800110C0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011224 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18003816C (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800385B4 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004BFA0 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        struct _HAM_APPLICATION *a4,
        char a5,
        struct _RM_ACTIVITY_HOST **a6)
{
  PVOID Heap; // rax
  __int64 v11; // rbx
  int State; // edi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  void *v15; // rdx

  Heap = HampAllocateHeap(0x5B8uLL);
  v11 = (__int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x5B8uLL);
    *(_QWORD *)(v11 + 48) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)(v11 + 56) = a2;
    RmpObjectHeaderInitialize(v11, *((_QWORD *)a3 + 68), 0);
    HampHostInitialize(a5, a3, a4, (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64));
    v13 = (_QWORD *)(v11 + 1136);
    v14 = 2LL;
    do
    {
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
      v13 += 3;
      --v14;
    }
    while ( v14 );
    State = RmpPartitionAddRemoveHost(a2, 1, *((_DWORD *)a3 + 133));
    if ( State < 0
      || (State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v11), State < 0)
      || (*(_DWORD *)(v11 + 1268) |= 0x180u,
          State = RmpSystemReferenceHostWithPsm(
                    (struct _RM_ACTIVITY_HOST *)v11,
                    2 * (a5 & 1u) + 1,
                    (void **)(v11 + 1224)),
          State < 0)
      || (State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64),
                    a5),
          State < 0) )
    {
      v15 = *(void **)(v11 + 1224);
      if ( v15 )
        RmpSystemDereferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v11, v15);
      HampFreeHeap((void *)v11);
    }
    else
    {
      State = 0;
      *a6 = (struct _RM_ACTIVITY_HOST *)v11;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
