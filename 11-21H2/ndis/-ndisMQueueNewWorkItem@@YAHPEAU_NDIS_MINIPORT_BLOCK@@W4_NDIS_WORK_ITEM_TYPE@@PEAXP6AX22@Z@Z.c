/*
 * XREFs of ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C0067A8C
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x1C0069E50 (NdisIMQueueMiniportCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001EAF4 (WPP_RECORDER_SF_qdq_ea_1C001EAF4.c)
 */

__int64 __fastcall ndisMQueueNewWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        void *a3,
        void (*a4)(void *, void *))
{
  __int64 Pool2; // rax
  int v8; // edx
  _SINGLE_LIST_ENTRY *v9; // rbx
  unsigned int v10; // ebx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Du,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      a3);
  Pool2 = ExAllocatePool2(64LL, (((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64) & 8) + 24, 1769423950);
  v9 = (_SINGLE_LIST_ENTRY *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a3;
    *(_DWORD *)(Pool2 + 8) = 6;
    if ( a4 )
      *(_QWORD *)(Pool2 + 24) = a4;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        0xCu,
        0x2Fu,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        Pool2,
        6,
        a3);
    v9->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[6];
    a1->WorkQueue[6].Next = v9;
    v10 = 0;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xCu,
        0x2Eu,
        (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
        a1);
    v10 = -1073741823;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v10 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x30u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      a3);
  return v10;
}
