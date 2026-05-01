/*
 * XREFs of ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18003D108
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C984 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepLinkInitialize@@YAX_K0PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18003D234 (-HampDepLinkInitialize@@YAX_K0PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D54C (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall HampDepGroupCreateLink(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_LINK_ID *a2,
        struct _HAM_DEPENDENCY_LINK **a3)
{
  struct _HAM_DEPENDENCY_LINK *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_DEPENDENCY_LINK *v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ebp
  unsigned __int64 v12; // rax

  Heap = (struct _HAM_DEPENDENCY_LINK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampDepLinkInitialize(*(_QWORD *)a2, *((_QWORD *)a2 + 1), a1, Heap);
    HampDepGroupAcquireLockExclusive(a1);
    v10 = *((_QWORD *)a1 + 9);
    if ( (*((_BYTE *)a1 + 80) & 1) != 0 && v10 )
      v10 ^= (unsigned __int64)a1 + 72;
    LOBYTE(v9) = 0;
    v11 = *((_BYTE *)a1 + 80) & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)HampDepGroupCompareDependencyLinkForRbTree(a2, (struct _RTL_BALANCED_NODE *)v10) < 0 )
        {
          v12 = *(_QWORD *)v10;
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_14;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_14:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_15;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_15:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v10 = v12;
      }
    }
    RtlRbInsertNodeEx((char *)a1 + 72, v10, v9, v8);
    HampDepGroupReleaseLockExclusive(a1);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
