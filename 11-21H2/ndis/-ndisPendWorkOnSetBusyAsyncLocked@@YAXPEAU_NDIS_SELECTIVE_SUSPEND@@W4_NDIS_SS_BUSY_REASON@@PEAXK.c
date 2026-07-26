/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00A7030
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A9394 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A9988 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0039F74 (-ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1C00A641C (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A6930 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A7438 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        __int64 a3,
        unsigned int a4,
        struct _NDIS_SELECTIVE_SUSPEND *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-20h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  *a7 = 0;
  if ( (_DWORD)a2 != 49 )
  {
    if ( (_DWORD)a2 == 51 )
    {
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)a1, (_LIST_ENTRY *)a3, a6);
    }
    else if ( (_DWORD)a2 == 53 )
    {
      v12 = 0LL;
      v14[0] = 0LL;
      v13 = &v12;
      v11 = (_QWORD *)(a1 + 544);
      v14[1] = v14;
      NdisClassifyNblChain2(
        *(struct _NET_BUFFER_LIST **)(a1 + 544),
        a2,
        (void *)a3,
        (struct NBL_QUEUE_t *)&v12,
        (struct NBL_QUEUE_t *)v14);
      if ( *v11 != v12 )
      {
        if ( v12 )
        {
          *v11 = v12;
          v11[1] = v13;
        }
        else
        {
          *v11 = 0LL;
          v11[1] = v11;
        }
      }
      *(_QWORD *)a5 = v14[0];
    }
    else if ( (_DWORD)a2 == 54 )
    {
      ndisQueueReceiveNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3);
    }
    else
    {
      if ( (_DWORD)a2 == 52 )
      {
        ndisQueueSendNblsOnMiniport((struct _NDIS_SELECTIVE_SUSPEND *)a1, (struct _NET_BUFFER_LIST *)a3, a4);
        *(_DWORD *)(a1 + 632) = 0;
      }
      else if ( (_DWORD)a2 == 50 )
      {
        v8 = a1 + 584;
        v9 = *(_QWORD **)(a1 + 592);
        v10 = (_QWORD *)(a3 + 72);
        if ( *v9 != a1 + 584 )
          __fastfail(3u);
        *v10 = v8;
        *(_QWORD *)(a3 + 80) = v9;
        *v9 = v10;
        *(_QWORD *)(a1 + 592) = v10;
        *(_DWORD *)(a1 + 632) = *(_DWORD *)(a3 + 32);
      }
      *a7 = 1;
    }
  }
}
