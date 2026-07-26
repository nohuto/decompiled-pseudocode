/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C006EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F1C4 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C002455C (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v1; // rbp
  __int64 Pool2; // rax
  _QWORD *v4; // rbx
  char v5; // al
  _DEVICE_OBJECT *v6; // rsi
  PIO_WORKITEM v7; // rax
  __int64 v8; // rcx
  PIO_WORKITEM v9; // rax
  __int64 v10; // rdx
  PIO_WORKITEM v11; // rax
  PIO_WORKITEM v12; // rax
  __int64 v13; // rdx
  PIO_WORKITEM WorkItem; // rax
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 48LL, 1769423950);
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return v4;
  *(_DWORD *)Pool2 = 3146000;
  *(_QWORD *)(Pool2 + 8) = NdisObjectHandle;
  v5 = *(_BYTE *)NdisObjectHandle;
  if ( *(_BYTE *)NdisObjectHandle == 2 )
  {
    v16 = 0;
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      goto LABEL_29;
    v1 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v1);
    v4[2] = WorkItem;
    if ( !WorkItem )
    {
      ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)NdisObjectHandle, 0, 3u);
      goto LABEL_26;
    }
  }
  else
  {
    if ( v5 != 4 )
    {
      if ( v5 != 9 )
      {
        if ( v5 != 17 || ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u) != 1 )
          goto LABEL_29;
        v6 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 478);
        v7 = IoAllocateWorkItem(v6);
        v4[2] = v7;
        if ( !v7 )
        {
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u);
LABEL_17:
          ExFreePoolWithTag(v4, 0);
          v4 = 0LL;
          goto LABEL_18;
        }
        goto LABEL_18;
      }
      v8 = *((_QWORD *)NdisObjectHandle + 3);
      if ( *(_BYTE *)v8 != 2 )
      {
        if ( *(_BYTE *)v8 != 4 )
          goto LABEL_29;
        v16 = 0;
        if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v8 + 72), 2u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
          goto LABEL_29;
        v6 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v9 = IoAllocateWorkItem(v6);
        v4[2] = v9;
        if ( !v9 )
        {
          ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3), v10, 2u);
          goto LABEL_17;
        }
LABEL_18:
        if ( v6 )
          return v4;
        goto LABEL_27;
      }
      v16 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)(v8 + 392), 4u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      {
        v6 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v11 = IoAllocateWorkItem(v6);
        v4[2] = v11;
        if ( v11 )
          goto LABEL_18;
        ndisDereferenceDriver(*((struct _NDIS_M_DRIVER_BLOCK **)NdisObjectHandle + 3), 0, 4u);
        goto LABEL_17;
      }
LABEL_29:
      ExFreePoolWithTag(v4, 0);
      return 0LL;
    }
    v16 = 0;
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      goto LABEL_29;
    v1 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v12 = IoAllocateWorkItem(v1);
    v4[2] = v12;
    if ( !v12 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle, v13, 1u);
LABEL_26:
      ExFreePoolWithTag(v4, 0);
      v4 = 0LL;
    }
  }
LABEL_27:
  if ( !v1 && v4 )
    goto LABEL_29;
  return v4;
}
