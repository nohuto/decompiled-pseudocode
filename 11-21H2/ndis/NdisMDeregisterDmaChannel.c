/*
 * XREFs of NdisMDeregisterDmaChannel @ 0x1C0148670
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __stdcall NdisMDeregisterDmaChannel(NDIS_HANDLE MiniportDmaHandle)
{
  __int64 v1; // rsi
  KIRQL v3; // di

  v1 = *((_QWORD *)MiniportDmaHandle + 5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x27u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 48LL))();
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceDmaAdapter(*(struct _NDIS_SG_DMA_BLOCK **)(v1 + 504));
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  ExFreePoolWithTag(MiniportDmaHandle, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x28u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
}
