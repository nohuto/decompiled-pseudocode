/*
 * XREFs of ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180074B64
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A60 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180074A10 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepLinkInitialize@@YAX_K0PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18007BA7C (-HampDepLinkInitialize@@YAX_K0PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 */

__int64 __fastcall HampDepGroupCreateLink(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_LINK_ID *a2,
        struct _HAM_DEPENDENCY_LINK **a3)
{
  struct _HAM_DEPENDENCY_LINK *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_DEPENDENCY_LINK *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // ebp
  unsigned __int64 v13; // rax

  Heap = (struct _HAM_DEPENDENCY_LINK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampDepLinkInitialize(*(_QWORD *)a2, *((_QWORD *)a2 + 1), a1, Heap);
    HampDepGroupAcquireLockExclusive(a1, v9);
    v11 = *((_QWORD *)a1 + 9);
    if ( (*((_BYTE *)a1 + 80) & 1) != 0 )
    {
      if ( v11 )
        v11 ^= (unsigned __int64)a1 + 72;
      else
        v11 = 0LL;
    }
    LOBYTE(v10) = 0;
    v12 = *((_BYTE *)a1 + 80) & 1;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( (int)HampDepGroupCompareDependencyLinkForRbTree((unsigned __int64 *)a2, (struct _RTL_BALANCED_NODE *)v11) < 0 )
        {
          v13 = *(_QWORD *)v11;
          if ( v12 )
          {
            if ( !v13 )
              goto LABEL_19;
            v13 ^= v11;
          }
          if ( !v13 )
          {
LABEL_19:
            LOBYTE(v10) = 0;
            break;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            if ( !v13 )
              goto LABEL_13;
            v13 ^= v11;
          }
          if ( !v13 )
          {
LABEL_13:
            LOBYTE(v10) = 1;
            break;
          }
        }
        v11 = v13;
      }
    }
    RtlRbInsertNodeEx((char *)a1 + 72, v11, v10, v8);
    HampDepGroupReleaseLockExclusive(a1);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
