/*
 * XREFs of ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0155C00
 * Callers:
 *     NdisTerminateWrapper @ 0x1C00C6DF0 (NdisTerminateWrapper.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0024EA4 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisMUnload(struct _DRIVER_OBJECT *a1)
{
  char v2; // bp
  _WORD *DriverObjectExtension; // rax
  __int16 v4; // cx
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rdi
  void (__fastcall *UnloadHandler)(_DRIVER_OBJECT *); // rax
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x20u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  while ( 1 )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(a1, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(a1, (PVOID)0x4E494944);
      if ( !DriverObjectExtension )
        goto LABEL_9;
      v2 = 1;
    }
    v4 = DriverObjectExtension[13];
    if ( (v4 & 0x10) == 0 )
      DriverObjectExtension[13] = v4 | 8;
LABEL_9:
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( i = ndisMiniDriverList; i && (i->DriverObject != a1 || v2 && (i->Flags & 1) == 0); i = i->NextDriver )
      ;
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    if ( !i )
      break;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x21u,
        (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
        i);
    i->Flags |= 0x8000u;
    ndisCloseRef(&i->Ref.SpinLock);
    UnloadHandler = i->UnloadHandler;
    if ( UnloadHandler )
      UnloadHandler(a1);
    AssociatedProtocol = i->AssociatedProtocol;
    if ( AssociatedProtocol )
    {
      AssociatedProtocol->AssociatedMiniDriver = 0LL;
      i->AssociatedProtocol = 0LL;
    }
    ndisDereferenceDriver(i, 0, 0xFFu);
    ndisWaitForKernelObject(&i->MiniportsRemovedEvent);
    KeClearEvent(&i->MiniportsRemovedEvent);
    if ( i == ndisDriverTrackAlloc )
      ndisDriverTrackAlloc = 0LL;
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x22u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1,
      0LL);
}
