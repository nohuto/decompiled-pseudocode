/*
 * XREFs of Control_MapTransfer @ 0x1C000605C
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005E30 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x1C000FE10 (Control_EP_StartMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Control_Transfer_Map @ 0x1C0006150 (Control_Transfer_Map.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0006218 (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C0009C1C (Control_Transfer_ValidateBuffer.c)
 *     TR_AcquireDoubleBuffer @ 0x1C000EEC4 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C000EF68 (TR_IsUrbUsingChainedMdl.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rax
  PMDL Mdl; // rax
  __int64 v16; // r10
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // edx
  char v22; // di
  __int64 v23; // rcx
  PVOID v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx

  v1 = *(_QWORD *)(a1 + 344);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( v3 )
  {
    if ( v3 <= 8 && *(_BYTE *)(a1 + 320) && (*(_DWORD *)(v4 + 32) & 1) == 0 )
    {
      v8 = 1;
    }
    else if ( (unsigned __int8)TR_IsUrbUsingChainedMdl(v4)
           || v5 > *(_DWORD *)(a1 + 24)
           || (v6 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v1 + 88) = v6, v7 = v6 == 0, v8 = 2, v7) )
    {
      v8 = 3;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(v1 + 64) = v8;
  v9 = *(_QWORD *)(a1 + 344);
  v10 = *(_DWORD *)(v9 + 64);
  v11 = *(_QWORD *)(v9 + 48);
  if ( v10 <= 0 )
    goto LABEL_12;
  if ( v10 <= 2 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( v12 )
    {
      *(_QWORD *)(v9 + 80) = v12;
      goto LABEL_12;
    }
    v23 = *(_QWORD *)(v11 + 48);
    if ( (*(_BYTE *)(v23 + 10) & 5) != 0 )
      v24 = *(PVOID *)(v23 + 24);
    else
      v24 = MmMapLockedPagesSpecifyCache(
              (PMDL)v23,
              0,
              MmCached,
              0LL,
              0,
              LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) | 0x10u);
    *(_QWORD *)(v9 + 80) = v24;
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v20 = 26;
      goto LABEL_31;
    }
LABEL_12:
    v13 = Control_Transfer_ValidateBuffer(a1);
    if ( v13 >= 0 )
    {
      v13 = Control_Transfer_Map(a1);
      if ( v13 >= 0 )
        return;
    }
    goto LABEL_33;
  }
  if ( v10 != 3 )
    goto LABEL_12;
  v14 = *(_QWORD *)(v11 + 48);
  if ( v14 )
  {
    *(_QWORD *)(v9 + 72) = v14;
    goto LABEL_12;
  }
  Mdl = IoAllocateMdl(*(PVOID *)(v11 + 40), *(_DWORD *)(v9 + 104), 0, 0, 0LL);
  *(_QWORD *)(v9 + 72) = Mdl;
  if ( Mdl )
  {
LABEL_28:
    MmBuildMdlForNonPagedPool(*(PMDL *)(v9 + 72));
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 32) & 0x10) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 120);
    if ( v16 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v17) = 5;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v17,
          14,
          27,
          (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
        v16 = *(_QWORD *)(a1 + 120);
      }
      v18 = *(unsigned int *)(v9 + 104);
      *(_QWORD *)(v9 + 72) = v16;
      v19 = *(_QWORD *)(v11 + 40);
      *(_QWORD *)v16 = 0LL;
      *(_WORD *)(v16 + 10) = 0;
      *(_DWORD *)(v16 + 40) = v18;
      *(_QWORD *)(v16 + 32) = v19 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v16 + 8) = 8 * ((((unsigned __int64)(v19 & 0xFFF) + v18 + 4095) >> 12) + 6);
      *(_DWORD *)(v16 + 44) = v19 & 0xFFF;
      goto LABEL_28;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = 28;
LABEL_31:
    v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v21,
      14,
      v20,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
LABEL_32:
  v13 = -1073741670;
LABEL_33:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(*(_QWORD *)(a1 + 344) + 120LL) = v13;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    *(_DWORD *)(a1 + 108) = 2;
    v22 = 0;
    Control_Transfer_CompleteCancelable(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 0;
    v22 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v22 )
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v25 + 37)
      || (v26 = *(_QWORD *)(v25 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 20)) == *(_DWORD *)(v26 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v25 + 288), 20);
    }
  }
}
