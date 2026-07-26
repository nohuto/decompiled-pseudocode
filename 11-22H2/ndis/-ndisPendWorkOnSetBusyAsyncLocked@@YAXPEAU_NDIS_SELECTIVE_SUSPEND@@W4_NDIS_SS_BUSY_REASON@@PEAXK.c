/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C003F176
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F9B4 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FC06 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z @ 0x1C003F2D2 (-ndisQueueSendNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1C00ACA1C (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 *     ?ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z @ 0x1C00ACDD8 (-ndisDequeueDirectOidsByRequestId@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AD698 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        __int64 a1,
        unsigned __int64 (*a2)(void *, struct _NET_BUFFER_LIST *),
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        struct _LIST_ENTRY *a6,
        _BYTE *a7)
{
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  struct _NET_BUFFER_LIST *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-20h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  *a5 = 0LL;
  *a7 = 0;
  a6->Blink = a6;
  a6->Flink = a6;
  if ( (_DWORD)a2 != 49 )
  {
    if ( (_DWORD)a2 == 51 )
    {
      ndisDequeueDirectOidsByRequestId((struct _NDIS_SELECTIVE_SUSPEND *)a1, (void *)a3, a6);
    }
    else if ( (_DWORD)a2 == 53 )
    {
      v10 = a1 + 544;
      v11 = *(struct _NET_BUFFER_LIST **)v10;
      if ( *(_QWORD *)v10 )
      {
        v12 = 0LL;
        v14[0] = 0LL;
        v13 = &v12;
        v14[1] = v14;
        NdisClassifyNblChain2(v11, a2, (void *)a3, (struct NBL_QUEUE_t *)&v12, (struct NBL_QUEUE_t *)v14);
        if ( *(_QWORD *)v10 != v12 )
        {
          if ( v12 )
          {
            *(_QWORD *)v10 = v12;
            *(_QWORD *)(v10 + 8) = v13;
          }
          else
          {
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = v10;
          }
        }
        *a5 = v14[0];
      }
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
        v8 = *(_QWORD **)(a1 + 592);
        v9 = (_QWORD *)(a3 + 72);
        if ( *v8 != a1 + 584 )
          __fastfail(3u);
        *v9 = a1 + 584;
        *(_QWORD *)(a3 + 80) = v8;
        *v8 = v9;
        *(_QWORD *)(a1 + 592) = v9;
        *(_DWORD *)(a1 + 632) = *(_DWORD *)(a3 + 32);
      }
      *a7 = 1;
    }
  }
}
