/*
 * XREFs of Control_MapTransfer @ 0x1C00071B4
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005C60 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x1C0013470 (Control_EP_StartMapping.c)
 * Callees:
 *     Control_Transfer_CompleteCancelable @ 0x1C0006FBC (Control_Transfer_CompleteCancelable.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072C0 (Control_Transfer_ValidateBuffer.c)
 *     Control_Transfer_Map @ 0x1C0007318 (Control_Transfer_Map.c)
 *     TR_AcquireDoubleBuffer @ 0x1C00073E0 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0007484 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rax
  PMDL Mdl; // rax
  int v15; // edx
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // r9d
  int v20; // edx
  char v21; // di
  __int64 v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx

  v1 = *(_QWORD *)(a1 + 344);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( v3 )
  {
    if ( v3 > 8 || !*(_BYTE *)(a1 + 320) || (*(_DWORD *)(v4 + 32) & 1) != 0 )
    {
      if ( (unsigned __int8)TR_IsUrbUsingChainedMdl(v4)
        || v5 > *(_DWORD *)(a1 + 24)
        || (v6 = TR_AcquireDoubleBuffer(a1), *(_QWORD *)(v1 + 88) = v6, v7 = v6 == 0, v8 = 2, v7) )
      {
        v8 = 3;
      }
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(v1 + 64) = v8;
  v9 = *(_QWORD *)(a1 + 344);
  v10 = *(_QWORD *)(v9 + 48);
  if ( *(_DWORD *)(v9 + 64) == 1 || *(_DWORD *)(v9 + 64) == 2 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( v11 )
    {
      *(_QWORD *)(v9 + 80) = v11;
      goto LABEL_10;
    }
    v22 = *(_QWORD *)(v10 + 48);
    if ( (*(_BYTE *)(v22 + 10) & 5) != 0 )
      v23 = *(PVOID *)(v22 + 24);
    else
      v23 = MmMapLockedPagesSpecifyCache(
              (PMDL)v22,
              0,
              MmCached,
              0LL,
              0,
              LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) | 0x40000010u);
    *(_QWORD *)(v9 + 80) = v23;
    if ( v23 )
    {
LABEL_10:
      v12 = Control_Transfer_ValidateBuffer(a1);
      if ( v12 >= 0 )
      {
        v12 = Control_Transfer_Map(a1);
        if ( v12 >= 0 )
          return;
      }
      goto LABEL_34;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 26;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v9 + 64) != 3 )
    goto LABEL_10;
  v13 = *(_QWORD *)(v10 + 48);
  if ( v13 )
  {
    *(_QWORD *)(v9 + 72) = v13;
    goto LABEL_10;
  }
  Mdl = IoAllocateMdl(*(PVOID *)(v10 + 40), *(_DWORD *)(v9 + 104), 0, 0, 0LL);
  *(_QWORD *)(v9 + 72) = Mdl;
  if ( Mdl )
  {
LABEL_29:
    MmBuildMdlForNonPagedPool(*(PMDL *)(v9 + 72));
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v10 + 32) & 0x10) != 0 && *(_QWORD *)(a1 + 120) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v15,
        14,
        27,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    }
    v16 = *(_QWORD *)(a1 + 120);
    v17 = *(unsigned int *)(v9 + 104);
    *(_QWORD *)(v9 + 72) = v16;
    v18 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)v16 = 0LL;
    *(_WORD *)(v16 + 10) = 0;
    *(_DWORD *)(v16 + 40) = v17;
    *(_QWORD *)(v16 + 32) = v18 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v16 + 8) = 8 * ((((unsigned __int64)(v18 & 0xFFF) + v17 + 4095) >> 12) + 6);
    *(_DWORD *)(v16 + 44) = v18 & 0xFFF;
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 28;
LABEL_32:
    v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v20,
      14,
      v19,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
LABEL_33:
  v12 = -1073741670;
LABEL_34:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(*(_QWORD *)(a1 + 344) + 120LL) = v12;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    *(_DWORD *)(a1 + 108) = 2;
    v21 = 0;
    Control_Transfer_CompleteCancelable((_QWORD *)a1);
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 0;
    v21 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v21 )
  {
    v24 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v24 + 37)
      || (v25 = *(_QWORD *)(v24 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 20)) == *(_DWORD *)(v25 + 8)) )
    {
      ESM_AddEvent((PVOID)(v24 + 296));
    }
  }
}
