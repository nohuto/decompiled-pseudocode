/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C00B8C60
 * Callers:
 *     NdisClCloseCall @ 0x1C00B8830 (NdisClCloseCall.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B763C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C00B91F0 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B98C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // dl
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, __int64, __int64); // r12
  KSPIN_LOCK *v12; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, (_DWORD)NdisPartyHandle, 15);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v7 = *((_QWORD *)NdisVcHandle + 3);
  v8 = *((_DWORD *)NdisVcHandle + 1) & 0xFFFFFF9F;
  *((_DWORD *)NdisVcHandle + 1) = v8;
  if ( NdisPartyHandle )
    v9 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v9 = 0LL;
  v10 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 296);
  else
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 144);
  v12 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v12, v6);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v8 & 0xFFFFFFF7;
    KeReleaseSpinLock(v12, v6);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisVcHandle + 8));
    if ( (v8 & 8) != 0 )
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  }
  ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  v11((unsigned int)Status, v7, v9);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x10u,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
      NdisVcHandle);
}
