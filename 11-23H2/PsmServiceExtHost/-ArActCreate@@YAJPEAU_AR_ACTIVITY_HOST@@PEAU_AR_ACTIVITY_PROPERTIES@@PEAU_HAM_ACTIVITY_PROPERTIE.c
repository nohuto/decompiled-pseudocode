/*
 * XREFs of ?ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAXPEAPEAU_AR_ACTIVITY@@@Z @ 0x18000331C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 * Callees:
 *     ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z @ 0x1800035AC (-ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18000370C (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

__int64 __fastcall ArActCreate(
        struct _AR_ACTIVITY_HOST *a1,
        struct _AR_ACTIVITY_PROPERTIES *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        union _HAM_RESTART_PROPERTIES *a4,
        void *a5,
        struct _AR_ACTIVITY **a6)
{
  _OWORD *Heap; // rax
  unsigned int v11; // edi
  _OWORD *v12; // rbx
  char v13; // al
  int State; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v11 = 0;
  v12 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    *((_QWORD *)Heap + 4) = 0LL;
    v13 = *(_BYTE *)a2;
    *((_QWORD *)v12 + 1) = -1LL;
    *((_BYTE *)v12 + 24) = v13;
    *(_QWORD *)v12 = 1LL;
    *((_DWORD *)v12 + 7) = *(_DWORD *)a4;
    *((_QWORD *)v12 + 2) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    State = ArActAllocateState((struct _AR_ACTIVITY *)v12, a3, a5);
    if ( State < 0 )
    {
      ArActDereference(v12);
      return (unsigned int)State;
    }
    else
    {
      *a6 = (struct _AR_ACTIVITY *)v12;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
