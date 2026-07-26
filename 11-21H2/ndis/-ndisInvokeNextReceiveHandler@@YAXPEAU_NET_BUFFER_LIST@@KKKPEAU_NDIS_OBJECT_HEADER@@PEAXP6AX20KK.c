/*
 * XREFs of ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034FB8
 * Callers:
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00607B0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AAEA0 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C4980 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ??$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034A28 (--$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KKK@Z@Z @ 0x1C0039472 (--$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0061328 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00CCC38 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *a6,
        void (*a7)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))
{
  int v11; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v13; // rcx

  if ( a5->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))a7)(a6, a1, a2, a3, a4);
  }
  else if ( (a4 & 2) == 0 && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    ndisInvokeIterativeDatapath<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
      (int)a1,
      a3,
      a2,
      a4,
      (__int64)a5,
      (__int64)a6,
      (__int64)a7);
  }
  else if ( (int)ndisExpandDataPathStack<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
                   (_DWORD)a1,
                   a2,
                   a3,
                   a4,
                   (__int64)a5,
                   (__int64)a6,
                   (__int64)a7) < 0 )
  {
    if ( byte_1C00EC210 && (*((_DWORD *)&a5->PktMonComp + 13) & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)a5 + 784, (_DWORD)a1, v11, 1, -1073741670, -536866813);
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
    else
    {
      LODWORD(Alignment) = 0;
    }
    _InterlockedExchangeAdd(&a5->DroppedReceiveNbls, (unsigned int)Alignment);
    if ( (a4 & 2) == 0 )
      ndisQueueStackExpansionFallbackNbls(a5, a1, 0);
  }
}
