/*
 * XREFs of ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003D8E6
 * Callers:
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00655E0 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00B0FDC (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C9AA8 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003D6AC (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C0064798 (--$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006629C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 */

void __fastcall ndisInvokeNextSendCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_FILTER_BLOCK *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int))
{
  unsigned int v8; // ebx

  v8 = a2;
  if ( a4->Header.Type == 17 )
    goto LABEL_8;
  if ( (a2 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    ndisInvokeIterativeDatapath<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
      (int)a1,
      a2,
      (int)a3,
      v8,
      a4,
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
                   a4,
                   (__int64)a5,
                   (void (__fastcall *)(__int64, __int64, _QWORD))a6) < 0 )
  {
    ndisQueueStackExpansionFallbackNbls(a3, a1, 1u);
  }
}
