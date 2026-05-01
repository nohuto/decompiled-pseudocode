/*
 * XREFs of ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800452D8
 * Callers:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180028758 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x18004536C (-HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180045704 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionCreate(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2, struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *Heap; // rax
  struct _HAM_SESSION *v7; // rdi
  int v8; // ebx

  Heap = (struct _HAM_SESSION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampSessionInitialize(a1, a2, Heap);
    v8 = HampSystemBamStart(a1, v7);
    if ( v8 < 0 )
    {
      CemRcObjectDereference(v7);
    }
    else
    {
      v8 = 0;
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
