/*
 * XREFs of ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007EC88
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1C00603B0 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ?ndisDeviceInternalIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C007EDB0 (-ndisDeviceInternalIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0068450 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceInternalDispatch(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  _DEVICE_OBJECT *NextDeviceObject; // rcx

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x35u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      a3);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a2->Header.Type == 17 )
  {
    NextDeviceObject = a2->NextDeviceObject;
    if ( !NextDeviceObject )
      goto LABEL_8;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v7 = IofCallDriver(NextDeviceObject, a3);
  }
  else
  {
    v7 = ndisDummyHandler(a1, &a2->Header, a3);
  }
  v6 = v7;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x36u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      a3);
  return v6;
}
