/*
 * XREFs of ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074A5C
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074DB0 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180072B40 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800741D4 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074C90 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800756C8 (-HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_DEPENDENCY_GROUP **a4)
{
  struct _HAM_DEPENDENCY_GROUP *Heap; // rax
  struct _HAM_DEPENDENCY_GROUP *v9; // rbx
  int v10; // edi
  DWORD CurrentThreadId; // eax

  Heap = (struct _HAM_DEPENDENCY_GROUP *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v9 = Heap;
  if ( Heap )
  {
    HampDepGroupInitialize(Heap);
    v10 = TpAllocWork((char *)v9 + 120, HampDepGroupStateWorker, v9, 0LL);
    if ( v10 >= 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)v9 + 12) <= 1 )
        __fastfail(0xEu);
      CurrentThreadId = GetCurrentThreadId();
      ++*((_QWORD *)v9 + 14);
      *((_DWORD *)v9 + 32) = CurrentThreadId;
      HampDepGroupAddHost(v9, a2);
      HampDepGroupAddHost(v9, a3);
      *((_QWORD *)v9 + 4) = a1;
      HampManagerAddDependencyGroup(a1, v9);
      v10 = 0;
      *a4 = v9;
    }
    else
    {
      HampDepGroupDereference(v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
