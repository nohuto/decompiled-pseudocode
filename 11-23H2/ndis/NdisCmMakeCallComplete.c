/*
 * XREFs of NdisCmMakeCallComplete @ 0x1C00BE070
 * Callers:
 *     NdisClMakeCall @ 0x1C00BDBA0 (NdisClMakeCall.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC70C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C00BE2F0 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BEC80 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

void __stdcall NdisCmMakeCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  bool v9; // bp
  unsigned int *v10; // rdi
  __int64 v11; // r14
  KIRQL v12; // al
  unsigned int v13; // ecx
  KIRQL v14; // al
  _QWORD *v15; // rcx
  KIRQL v16; // r9
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx

  v9 = 0;
  v10 = (unsigned int *)((char *)NdisVcHandle + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, *((_QWORD *)NdisVcHandle + 9), 10);
  v11 = *((_QWORD *)NdisVcHandle + 8);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v13 = *v10 & 0xFFFFFFEF;
  *v10 = v13;
  if ( Status )
    v9 = (v13 & 0x40) != 0;
  else
    *v10 = v13 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v12);
  if ( Status )
  {
    if ( !v9 )
    {
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
      ndisDereferenceAf((KSPIN_LOCK *)v11);
      if ( NdisPartyHandle )
      {
        ExFreePoolWithTag(NdisPartyHandle, 0);
        NdisPartyHandle = 0LL;
      }
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xBu,
        (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
        Status);
  }
  else
  {
    if ( NdisPartyHandle )
    {
      *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
      ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v11 + 368) + 232LL));
    v15 = (char *)NdisVcHandle + 32;
    v16 = v14;
    v17 = *((_QWORD *)NdisVcHandle + 4);
    if ( *(NDIS_HANDLE *)(v17 + 8) != (char *)NdisVcHandle + 32
      || (v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 5), (_QWORD *)*v18 != v15)
      || (*v18 = v17,
          *(_QWORD *)(v17 + 8) = v18,
          v19 = *(_QWORD *)(v11 + 368) + 1096LL,
          v20 = *(_QWORD *)v19,
          *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19) )
    {
      __fastfail(3u);
    }
    *v15 = v20;
    *((_QWORD *)NdisVcHandle + 5) = v19;
    *(_QWORD *)(v20 + 8) = v15;
    *(_QWORD *)v19 = v15;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v11 + 368) + 232LL), v16);
  }
  v21 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v11 + 280))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters);
  else
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v11 + 128))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids);
}
