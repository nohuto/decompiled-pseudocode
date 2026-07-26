/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C0069A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0019104 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001DD6C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022EB8 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  char v4; // al
  _DEVICE_OBJECT *v5; // rbp
  PIO_WORKITEM v6; // rax
  __int64 v7; // rcx
  PIO_WORKITEM v8; // rax
  __int64 v9; // rdx
  PIO_WORKITEM v10; // rax
  _DEVICE_OBJECT *v11; // rsi
  PIO_WORKITEM v12; // rax
  __int64 v13; // rdx
  PIO_WORKITEM WorkItem; // rax
  int v16; // [rsp+38h] [rbp+10h] BYREF

  Pool2 = ExAllocatePool2(64LL, 48LL, 1769423950);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return v3;
  *(_DWORD *)Pool2 = 3146000;
  *(_QWORD *)(Pool2 + 8) = NdisObjectHandle;
  v4 = *(_BYTE *)NdisObjectHandle;
  if ( *(_BYTE *)NdisObjectHandle == 2 )
  {
    v16 = 0;
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      goto LABEL_29;
    v11 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v11);
    v3[2] = WorkItem;
    if ( !WorkItem )
    {
      ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)NdisObjectHandle, 0, 3u);
      goto LABEL_26;
    }
  }
  else
  {
    if ( v4 != 4 )
    {
      if ( v4 != 9 )
      {
        if ( v4 != 17 || ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u) != 1 )
          goto LABEL_29;
        v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 478);
        v6 = IoAllocateWorkItem(v5);
        v3[2] = v6;
        if ( !v6 )
        {
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisObjectHandle, 0x63u);
LABEL_17:
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          goto LABEL_18;
        }
        goto LABEL_18;
      }
      v7 = *((_QWORD *)NdisObjectHandle + 3);
      if ( *(_BYTE *)v7 != 2 )
      {
        if ( *(_BYTE *)v7 != 4 )
          goto LABEL_29;
        v16 = 0;
        if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v7 + 72), 2u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
          goto LABEL_29;
        v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v8 = IoAllocateWorkItem(v5);
        v3[2] = v8;
        if ( !v8 )
        {
          ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3), v9, 2u);
          goto LABEL_17;
        }
LABEL_18:
        v11 = 0LL;
        if ( v5 )
          return v3;
        goto LABEL_27;
      }
      v16 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)(v7 + 392), 4u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      {
        v5 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v10 = IoAllocateWorkItem(v5);
        v3[2] = v10;
        if ( v10 )
          goto LABEL_18;
        ndisDereferenceDriver(*((struct _NDIS_M_DRIVER_BLOCK **)NdisObjectHandle + 3), 0, 4u);
        goto LABEL_17;
      }
LABEL_29:
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
    v16 = 0;
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v16) )
      goto LABEL_29;
    v11 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v12 = IoAllocateWorkItem(v11);
    v3[2] = v12;
    if ( !v12 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle, v13, 1u);
LABEL_26:
      ExFreePoolWithTag(v3, 0);
      v3 = 0LL;
    }
  }
LABEL_27:
  if ( !v11 && v3 )
    goto LABEL_29;
  return v3;
}
