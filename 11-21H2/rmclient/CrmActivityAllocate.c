/*
 * XREFs of CrmActivityAllocate @ 0x180004EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004DC0 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     ?CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PEAGPEAKP6AXPEAX5W4_CRM_NOTIFICATION_TYPE@@55@Z5@Z @ 0x180004F90 (-CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall CrmActivityAllocate(
        struct _CRMP_ACTIVITY_CONTEXT **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _CRMP_ACTIVITY_CONTEXT *Heap; // rax
  struct _CRMP_ACTIVITY_CONTEXT *v12; // rbx
  int v13; // esi

  Heap = (struct _CRMP_ACTIVITY_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 0x68uLL);
  *(_DWORD *)v12 = 1101;
  *((_QWORD *)v12 + 1) = -1LL;
  v13 = CrmpActivityContextStart(v12, a2, a3, a4, a5, a6, a7);
  if ( v13 < 0 )
  {
    CrmpActivityContextCleanup(v12);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    return (unsigned int)v13;
  }
  else
  {
    *a1 = v12;
    return 0LL;
  }
}
