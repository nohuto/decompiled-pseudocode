/*
 * XREFs of ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180017024
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z @ 0x180017160 (-HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z.c)
 *     ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017204 (-HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800172AC (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800172E4 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18001731C (-HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextFindOrCreate(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        unsigned __int64 a2,
        void *a3,
        struct _CEM_RC_OBJECT **a4)
{
  struct _HAM_HOST_WAKE_CONTEXT *Heap; // rdi
  unsigned int v9; // r15d
  int State; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-88h] BYREF
  struct _CEM_RC_OBJECT *v13; // [rsp+38h] [rbp-80h]
  unsigned __int64 v14; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-70h]
  _BYTE JobInformation[32]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+70h] [rbp-48h]

  Heap = (struct _HAM_HOST_WAKE_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &ReturnLength);
  v9 = v17;
  HampWakeContextInitialize(a1, a2, v17, Heap);
  State = HampWakeContextAllocateState(Heap, a3);
  if ( State < 0 )
    goto LABEL_11;
  HampWakeManagerAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
  {
    State = -1073741077;
    HampWakeManagerReleaseLockShared(a1);
    goto LABEL_11;
  }
  v14 = a2;
  v15 = v9;
  CemRcTableFindOrInsertEx(
    (_DWORD)a1 + 32,
    (unsigned int)&v14,
    (unsigned int)HampWakeContextTreeCompareByHostId,
    (_DWORD)Heap);
  HampWakeManagerReleaseLockShared(a1);
  if ( v13 != Heap )
  {
    *a4 = v13;
    State = 0;
    goto LABEL_11;
  }
  State = HampWakeContextStart(Heap);
  if ( State < 0 )
  {
LABEL_11:
    CemRcObjectDereference(Heap);
    return (unsigned int)State;
  }
  *a4 = Heap;
  return 0;
}
