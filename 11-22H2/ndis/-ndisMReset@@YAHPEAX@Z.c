/*
 * XREFs of ?ndisMReset@@YAHPEAX@Z @ 0x1C006D390
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F534 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C874 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006CFEC (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E8F4 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMResetComplete @ 0x1C006F980 (NdisMResetComplete.c)
 */

__int64 __fastcall ndisMReset(_SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int v3; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  KIRQL v7; // dl
  KIRQL v8; // dl
  __int64 v9; // rcx
  KIRQL v10; // r14
  KIRQL v11; // dl
  KIRQL NewIrql; // [rsp+48h] [rbp-59h] BYREF
  BOOLEAN AddressingReset[15]; // [rsp+49h] [rbp-58h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  Next = a1[2].Next;
  NewIrql = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x47u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      Next);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  if ( (HIDWORD(Next[15].Next) & 0x80000) != 0 )
  {
    v3 = -2147418111;
LABEL_28:
    v11 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v11);
    goto LABEL_29;
  }
  v4 = (int)Next[15].Next;
  v3 = -1073676275;
  if ( (v4 & 0x40000) != 0 )
    v5 = (v4 & 0x200000) == 0;
  else
    v5 = (unsigned int)ndisMQueueWorkItem((struct _NDIS_MINIPORT_BLOCK *)Next, NdisWorkItemResetRequested, a1) == 0;
  if ( !v5 )
    goto LABEL_28;
  v3 = -2147418111;
  if ( LOBYTE(Next[4].Next) >= 6u || !Next[470].Next[24].Next )
    goto LABEL_28;
  ndisMReferenceOpen((__int64)a1, 8u);
  v6 = (int)Next[15].Next;
  Next[49].Next = a1;
  if ( (v6 & 0x40000) == 0 )
  {
    LODWORD(Next[15].Next) = v6 | 0x100000;
    if ( !BYTE1(Next[11].Next) )
    {
      BYTE1(Next[11].Next) = 1;
      Next[233].Next = (_SINGLE_LIST_ENTRY *)KeGetCurrentThread();
      ndisMProcessDeferred((struct _NDIS_MINIPORT_BLOCK *)Next);
      BYTE1(Next[11].Next) = 0;
      Next[233].Next = 0LL;
    }
    v3 = 259;
    goto LABEL_28;
  }
  AddressingReset[0] = 0;
  LODWORD(Next[15].Next) = v6 | 0x280000;
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)Next, 1u);
  while ( LODWORD(Next[228].Next) )
  {
    v7 = NewIrql;
    Next[65].Next = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v7);
    KeStallExecutionProcessor(1u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)Next, &NewIrql);
  }
  if ( HIDWORD(Next[483].Next) != 1 )
  {
    BYTE2(Next[116].Next) &= ~1u;
    v3 = -1073741637;
    LODWORD(Next[15].Next) &= 0xFFD7FFFF;
    HIDWORD(Next[67].Next) = -1073741637;
    Next[49].Next = 0LL;
    ndisMDereferenceOpenLocked((__int64)a1, 8u);
    goto LABEL_28;
  }
  v8 = NewIrql;
  Next[65].Next = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[12], v8);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = Next;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx(Next, &StatusIndication);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x48u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      Next);
  if ( (byte_1C00F7641 & 4) != 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      v9,
      (__int64)&CallMiniportReset,
      (__int64)&Next[501],
      (__int64)&Next[501],
      (char)Next[507].Next,
      (char)Next[503].Next,
      2);
  v10 = KfRaiseIrql(2u);
  v3 = ((__int64 (__fastcall *)(BOOLEAN *, _SINGLE_LIST_ENTRY *))Next[470].Next[24].Next)(AddressingReset, Next[3].Next);
  if ( v10 != 2 )
    KeLowerIrql(v10);
  if ( v3 != 259 )
  {
    NdisMResetComplete(Next, v3, AddressingReset[0]);
    v3 = 259;
  }
LABEL_29:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x49u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      Next);
  return v3;
}
