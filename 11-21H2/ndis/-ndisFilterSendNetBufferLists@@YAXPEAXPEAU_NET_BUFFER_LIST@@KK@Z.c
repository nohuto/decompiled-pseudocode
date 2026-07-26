/*
 * XREFs of ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0060900
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025F38 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0034CCC (--$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NE.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0060468 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 */

void __fastcall ndisFilterSendNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v10; // rbx
  struct _NET_BUFFER_LIST *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a2;
  v6 = *((_QWORD *)a1 + 4);
  v8 = *((_QWORD *)a1 + 57);
  if ( *(_BYTE *)v8 == 5
    && (*(_DWORD *)(v8 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v8 + 336)
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v8, a2, a3, a4, &v11);
    a2 = v11;
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = *((_QWORD *)a1 + 53) + 96 * v4;
    if ( ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 16) )
      ndisIterativeDPAddNblsToTracker<0>((_QWORD *)v10, (__int64)v11, a4 | 1, a3);
    else
      ndisInvokeNextSendHandler(
        v11,
        a3,
        a4,
        *((struct _NDIS_FILTER_BLOCK **)a1 + 57),
        *((void **)a1 + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1 + 54));
  }
}
