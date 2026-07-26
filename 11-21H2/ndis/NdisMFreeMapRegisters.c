/*
 * XREFs of NdisMFreeMapRegisters @ 0x1C0148780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 */

void __stdcall NdisMFreeMapRegisters(NDIS_HANDLE MiniportAdapterHandle)
{
  struct _NDIS_SG_DMA_BLOCK *v1; // rbx
  unsigned int v3; // esi
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // r15
  unsigned int v5; // r14d
  KIRQL v6; // bp

  v1 = (struct _NDIS_SG_DMA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 63);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Du,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      MiniportAdapterHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) != 0 && v1->MapRegisters )
  {
    v3 = (v1->MaximumPhysicalMapping - 2) >> 12;
    FreeMapRegisters = v1->DmaAdapterObject->DmaOperations->FreeMapRegisters;
    v5 = 0;
    v6 = KfRaiseIrql(2u);
    while ( v5 < v1->BaseMapRegistersNeeded )
      FreeMapRegisters(v1->DmaAdapterObject, v1->MapRegisters[v5++].MapRegister, v3 + 2);
    if ( v6 != 2 )
      KeLowerIrql(v6);
    ExFreePoolWithTag(v1->MapRegisters, 0);
    v1->MapRegisters = 0LL;
    ndisDereferenceDmaAdapter(v1);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Eu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      MiniportAdapterHandle);
}
