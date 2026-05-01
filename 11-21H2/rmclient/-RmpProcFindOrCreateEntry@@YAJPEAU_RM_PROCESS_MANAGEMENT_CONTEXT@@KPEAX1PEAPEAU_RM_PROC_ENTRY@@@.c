/*
 * XREFs of ?RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180014CB8
 * Callers:
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CempRcTableFindUnsafe @ 0x180015450 (CempRcTableFindUnsafe.c)
 */

__int64 __fastcall RmpProcFindOrCreateEntry(
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1,
        unsigned int a2,
        HANDLE SourceHandle,
        void *a4,
        struct _RM_PROC_ENTRY **a5)
{
  __int64 Unsafe; // rax
  struct _RM_PROC_ENTRY *v10; // rbx
  int v11; // edi
  struct _RM_PROC_ENTRY *v13; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockShared((char *)a1 + 16);
  Unsafe = CempRcTableFindUnsafe(a1, a2);
  v10 = (struct _RM_PROC_ENTRY *)Unsafe;
  if ( Unsafe )
  {
    if ( *(_QWORD *)(Unsafe + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Unsafe + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 16);
  v13 = v10;
  if ( v10 )
  {
    if ( *((void **)v10 + 7) == a4 )
    {
      v11 = 0;
      *a5 = v10;
      return (unsigned int)v11;
    }
    v11 = -1073741583;
  }
  else
  {
    v11 = RmpProcContextEntryCreate(a1, a2, SourceHandle, a4, &v13);
    if ( v11 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v10 = 0LL;
      v11 = 0;
      *a5 = v13;
    }
  }
  if ( v10 )
    CemRcObjectDereference(v10);
  return (unsigned int)v11;
}
