/*
 * XREFs of ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003957C
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C0007F50 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0060660 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB5B0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C4E68 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003933C (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C005F818 (--$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 */

void __fastcall ndisInvokeNextSendCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int))
{
  unsigned int v8; // ebx

  v8 = a2;
  if ( a4->Type == 17 )
    goto LABEL_8;
  if ( (a2 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    ndisInvokeIterativeDatapath<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
      (_DWORD)a1,
      a2,
      (_DWORD)a3,
      v8,
      (__int64)a4,
      (__int64)a5,
      (__int64)a6);
    return;
  }
  if ( a3->Header.Type != 5 )
  {
LABEL_8:
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, v8);
  }
  else if ( (int)ndisExpandDataPathStack<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                   (__int64)a1,
                   a2,
                   (__int64)a3,
                   v8,
                   (__int64)a4,
                   (__int64)a5,
                   (void (__fastcall *)(__int64, __int64, _QWORD))a6) < 0 )
  {
    ndisQueueStackExpansionFallbackNbls(a3, a1, 1u);
  }
}
