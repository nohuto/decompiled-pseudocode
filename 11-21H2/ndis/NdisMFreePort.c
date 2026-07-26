/*
 * XREFs of NdisMFreePort @ 0x1C007C430
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005BB6C (WPP_RECORDER_SF_ql_ea_1C005BB6C.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007B084 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

NDIS_STATUS __stdcall NdisMFreePort(NDIS_HANDLE NdisMiniportHandle, NDIS_PORT_NUMBER PortNumber)
{
  NDIS_STATUS v2; // edi
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  unsigned int v6; // edx
  struct _NDIS_PORT_BLOCK *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  NDIS_PORT_NUMBER v11; // r9d
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rax
  KIRQL v14; // dl
  int v15; // edx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xCu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)NdisMiniportHandle,
      PortNumber);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, &NewIrql);
  PortByPortNumber = ndisFindPortByPortNumber((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, PortNumber);
  v7 = PortByPortNumber;
  if ( PortByPortNumber )
  {
    if ( PortByPortNumber->PortPnPState == NdisPortPnPStateAllocated )
    {
      v8 = *((_QWORD *)NdisMiniportHandle + 342);
      v9 = v6 >> 3;
      if ( v8
        && *((_DWORD *)NdisMiniportHandle + 686) >= (unsigned int)(v9 + 1)
        && (v10 = *(unsigned __int8 *)(v9 + v8), v11 = PortNumber & 7, _bittest(&v10, v11)) )
      {
        *(_BYTE *)(v9 + v8) = v10 & ~(1 << v11);
        Flink = v7->Link.Flink;
        if ( (struct _NDIS_PORT_BLOCK *)v7->Link.Flink->Blink != v7
          || (Blink = v7->Link.Blink, (struct _NDIS_PORT_BLOCK *)Blink->Flink != v7) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        --*((_DWORD *)NdisMiniportHandle + 687);
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v2 = -1073741811;
      }
    }
    else
    {
      v2 = -1071448018;
    }
  }
  else
  {
    v2 = -1071448019;
  }
  v14 = NewIrql;
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v14);
  if ( !v2 )
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      0x17u,
      0xDu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)NdisMiniportHandle,
      PortNumber,
      v2);
  return v2;
}
