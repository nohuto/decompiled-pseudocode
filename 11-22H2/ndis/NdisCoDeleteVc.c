/*
 * XREFs of NdisCoDeleteVc @ 0x1C00BFAC0
 * Callers:
 *     NdisMCmDeleteVc @ 0x1C00C03F0 (NdisMCmDeleteVc.c)
 * Callees:
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C6B0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E37C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9A0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLLqL @ 0x1C00C077C (WPP_RECORDER_SF_qLLqL.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r15
  NDIS_STATUS v5; // edi
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  PVOID v7; // rsi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  NDIS_HANDLE *v11; // rdx
  NDIS_HANDLE *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  NDIS_HANDLE *v15; // rdx
  NDIS_HANDLE *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  NDIS_HANDLE *v19; // rdx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  __int64 v24; // [rsp+28h] [rbp-50h]
  PVOID WnodeEventItem; // [rsp+80h] [rbp+8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v24) = HIDWORD(NdisVcHandle);
    WPP_RECORDER_SF_qLLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), **((_DWORD **)NdisVcHandle + 1));
  }
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v3 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  v4 = v2;
  if ( (*v3 & 3) != 0 )
  {
    v5 = 65539;
    goto LABEL_30;
  }
  if ( (*v3 & 4) != 0 )
  {
    v5 = -1073676286;
    goto LABEL_30;
  }
  *((_DWORD *)NdisVcHandle + 1) |= 0x80000000;
  if ( *((_DWORD *)NdisVcHandle + 22) && *((_QWORD *)NdisVcHandle + 27) )
    *v3 |= 8u;
  if ( *((_QWORD *)NdisVcHandle + 38) )
  {
    v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisVcHandle + 24);
    WnodeEventItem = 0LL;
    ndisSetupWmiNode(
      v6,
      (const struct _UNICODE_STRING *)((char *)NdisVcHandle + 296),
      0,
      (__int128 *)&GUID_NDIS_NOTIFY_VC_REMOVAL,
      (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
    v7 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v8 = IoWMIWriteEvent(WnodeEventItem);
      v10 = v8;
      if ( v8 < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = v8;
          WPP_RECORDER_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x12u,
            0x14u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
            v24);
        }
        if ( (byte_1C00F7641 & 0x10) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(
            v9,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4008LL),
            v10,
            1,
            0);
        ExFreePoolWithTag(v7, 0);
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 24) + 1344LL));
    v11 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v11[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v12 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v12 = v11;
    v11[1] = v12;
    --*(_WORD *)(*((_QWORD *)NdisVcHandle + 24) + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v13 = (KSPIN_LOCK *)(*((_QWORD *)NdisVcHandle + 24) + 1344LL);
    *((_QWORD *)NdisVcHandle + 38) = 0LL;
    *((_WORD *)NdisVcHandle + 149) = 0;
    *((_WORD *)NdisVcHandle + 148) = 0;
    KeReleaseSpinLockFromDpcLevel(v13);
  }
  v14 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v14 )
    v14(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v15 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v15[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v16 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v16 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v16 = v15;
  v15[1] = v16;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v17 = *((_QWORD *)NdisVcHandle + 17);
  if ( v17 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 232));
    v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v18[1] == (char *)NdisVcHandle + 152 )
    {
      v19 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v19 == (char *)NdisVcHandle + 152 )
      {
        *v19 = v18;
        v18[1] = v19;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 17) + 232LL));
        goto LABEL_29;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
LABEL_29:
  v5 = 0;
LABEL_30:
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v4);
  if ( !v5 )
    ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v20, v21, v22);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v5;
    WPP_RECORDER_SF_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x15u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v24);
  }
  return v5;
}
