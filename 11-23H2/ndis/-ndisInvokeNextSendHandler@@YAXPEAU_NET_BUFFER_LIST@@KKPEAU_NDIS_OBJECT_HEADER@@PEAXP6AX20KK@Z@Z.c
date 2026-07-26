/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025150
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C00055A0 (NdisFSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0037280 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00658A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x1C0023890 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0036C64 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00662BC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3238 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_FILTER_BLOCK *a4,
        void *a5,
        void (*a6)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))
{
  __int64 v10; // r8
  int v11; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v13; // rcx

  if ( a4->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( (a3 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    ndisInvokeIterativeDatapath<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
      (int)a1,
      a2,
      a2,
      a3,
      a4,
      (__int64)a5,
      (__int64)a6);
  }
  else if ( (int)ndisExpandDataPathStack<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
                   (__int64)a1,
                   a2,
                   v10,
                   a3,
                   a4,
                   (__int64)a5,
                   (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))a6) < 0 )
  {
    if ( byte_1C00F5390 && (*((_DWORD *)&a4->PktMonComp + 14) & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)a4 + 784, (_DWORD)a1, v11, 2, -1073741670, -536866812);
    Alignment = a1;
    if ( a1 )
    {
      do
      {
        Alignment->Status = -1073741670;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v13 = a1;
      do
      {
        v13 = (struct _NET_BUFFER_LIST *)v13->Link.Alignment;
        LODWORD(Alignment) = (_DWORD)Alignment + 1;
      }
      while ( v13 );
    }
    _InterlockedExchangeAdd(&a4->DroppedSendNbls, (unsigned int)Alignment);
    ndisQueueStackExpansionFallbackNbls(a4, a1, 1u);
  }
}
