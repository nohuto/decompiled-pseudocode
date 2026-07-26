/*
 * XREFs of ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0037280
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025150 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0065400 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 */

void __fastcall ndisSendNBLToFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  _NDIS_OBJECT_HEADER *SendNetBufferListsObject; // rcx
  struct _NET_BUFFER_LIST *v8; // rsi
  struct _NDIS_MINIPORT_BLOCK *SendNetBufferListsContext; // r15
  KIRQL v10; // di
  char v11; // r14
  _BYTE v12[12]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+3Ch] [rbp-3Ch]
  struct _NET_BUFFER_LIST *v14; // [rsp+80h] [rbp+8h] BYREF

  v14 = a2;
  SendNetBufferListsObject = a1->Next.SendNetBufferListsObject;
  v8 = a2;
  if ( SendNetBufferListsObject->Type == 5
    && (*(_DWORD *)&SendNetBufferListsObject[14] & 0x8000) != 0
    && !*(_DWORD *)&SendNetBufferListsObject[84]
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)SendNetBufferListsObject, a2, a3, a4, &v14);
    v8 = v14;
  }
  if ( v8 )
  {
    SendNetBufferListsContext = (struct _NDIS_MINIPORT_BLOCK *)a1->Next.SendNetBufferListsContext;
    v10 = 2;
    v11 = 0;
    NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v12, a1);
    if ( SendNetBufferListsContext == a1 && v13 < 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v10 = KfRaiseIrql(2u);
        v11 = 1;
      }
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 7u);
    }
    ndisInvokeNextSendHandler(
      v8,
      a3,
      a4,
      (struct _NDIS_FILTER_BLOCK *)a1->Next.SendNetBufferListsObject,
      a1->Next.SendNetBufferListsContext,
      (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))a1->Next.SendNetBufferListsHandler);
    if ( SendNetBufferListsContext == a1 )
    {
      if ( v13 < 0 )
        ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 7u, 0x14uLL);
      if ( v11 )
      {
        if ( v10 != 2 )
          KeLowerIrql(v10);
      }
    }
  }
}
