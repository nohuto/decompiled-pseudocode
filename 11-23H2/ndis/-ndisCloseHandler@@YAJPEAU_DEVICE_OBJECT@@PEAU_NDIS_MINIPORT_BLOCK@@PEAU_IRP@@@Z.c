/*
 * XREFs of ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0068208
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C0060310 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C0068108 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0068450 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisCloseHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdx

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( a2->Header.Type == 17 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x19u,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(a2, FsContext);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Au,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        a3);
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x18u,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        a3);
    return ndisDummyHandler(a1, &a2->Header, a3);
  }
}
