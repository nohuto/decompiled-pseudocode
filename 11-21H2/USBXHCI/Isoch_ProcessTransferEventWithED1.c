/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0006DC0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00070C0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C0007610 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0008870 (Isoch_PrepareStage.c)
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C000A788 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C000AC54 (WPP_RECORDER_SF_DDLDDi.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C000FA58 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C00401BC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x1C004196C (WPP_RECORDER_SF_DDqD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0042EC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  KIRQL v4; // al
  int v5; // edx
  __int64 v6; // rax
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  unsigned __int8 **v9; // r15
  int v10; // r13d
  unsigned __int8 *v11; // rdi
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int8 *v14; // r12
  int v15; // r9d
  __int64 *v16; // r12
  unsigned __int8 v17; // al
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r10
  char v22; // r15
  char i; // r14
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edx
  unsigned __int8 *v28; // r8
  unsigned __int8 *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int8 **v32; // rdx
  unsigned __int8 **v33; // rcx
  __int64 *v34; // rax
  __int64 NextStage; // rax
  int v36; // esi
  __int64 v37; // r15
  __int64 v38; // r8
  bool v39; // zf
  _QWORD *v40; // r10
  int v41; // edx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // [rsp+60h] [rbp-19h]
  unsigned __int8 **v49; // [rsp+70h] [rbp-9h]
  __int64 *v50; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 *v51; // [rsp+80h] [rbp+7h]
  __int64 v52; // [rsp+E0h] [rbp+67h] BYREF
  char v53; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 *v54; // [rsp+F0h] [rbp+77h] BYREF
  int v55; // [rsp+F8h] [rbp+7Fh] BYREF

  v52 = a1;
  v55 = 0;
  v3 = a1;
  v53 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v25 = *(_QWORD *)(a2 + 56);
    v26 = HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F;
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v25 + 80), v26, *(_DWORD *)(v3 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)v3 & 3) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = HIBYTE(*(_DWORD *)(v3 + 12));
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v27,
        *(_QWORD *)v3,
        28,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        HIBYTE(*(_DWORD *)(v3 + 12)),
        HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F,
        *(_QWORD *)v3);
    }
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, 0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v5 = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(a2 + 104) = v4;
  if ( (v5 & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v4);
    return 0;
  }
  v6 = Isoch_Stage_Find(a2, v3, v3);
  v7 = *(_BYTE *)(a2 + 104);
  v49 = (unsigned __int8 **)v6;
  v8 = (KSPIN_LOCK *)(a2 + 96);
  v9 = (unsigned __int8 **)v6;
  if ( (unsigned __int8)(*(_BYTE *)(v3 + 11) - 26) <= 2u )
  {
    *(_DWORD *)(a2 + 328) |= 0x40u;
    KeReleaseSpinLock(v8, v7);
    Isoch_Stage_CompleteTD(
      (_DWORD)v9,
      HIBYTE(*(_DWORD *)(v3 + 8)),
      *(_DWORD *)(v3 + 8) & 0xFFFFFF,
      0,
      (__int64)&v53,
      (__int64)&v55);
    v40 = *(_QWORD **)(a2 + 56);
    _m_prefetchw(v40 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v40 + 8, 0x10u) & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *v40,
        v40[1],
        v40[3],
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw(v40 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v40 + 8, 8u) & 8) != 0 )
        ESM_AddEvent(v40 + 36, 118);
    }
  }
  else
  {
    KeReleaseSpinLock(v8, v7);
    if ( !v9 )
      return 0;
    v10 = *(_DWORD *)(v3 + 8);
    v11 = *v9;
    v51 = (unsigned __int8 *)&v50;
    v12 = v10 & 0xFFFFFF;
    v48 = v12;
    v50 = (__int64 *)&v50;
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v13 = a2 + 384;
    v14 = *(unsigned __int8 **)(a2 + 384);
    if ( v14 != (unsigned __int8 *)(a2 + 384) )
    {
      while ( 1 )
      {
        if ( v14 == v11 )
          goto LABEL_10;
        v28 = *(unsigned __int8 **)v14;
        v54 = v28;
        v29 = v28;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = *((_QWORD *)v14 + 6);
          v31 = *(_DWORD *)(v30 + 128);
          LOBYTE(v30) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            v30,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
            23,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
            *((_QWORD *)v14 + 3),
            v31);
          v29 = *(unsigned __int8 **)v14;
          v13 = a2 + 384;
          v28 = v54;
        }
        if ( *((unsigned __int8 **)v29 + 1) != v14 )
          break;
        v32 = (unsigned __int8 **)*((_QWORD *)v14 + 1);
        if ( *v32 != v14 )
          break;
        *v32 = v29;
        *((_QWORD *)v29 + 1) = v32;
        v33 = (unsigned __int8 **)v51;
        if ( *(__int64 ***)v51 != &v50 )
          break;
        *((_QWORD *)v14 + 1) = v51;
        *(_QWORD *)v14 = &v50;
        *v33 = v14;
        v51 = v14;
        v14 = v28;
        if ( v28 == (unsigned __int8 *)v13 )
          goto LABEL_10;
      }
LABEL_51:
      __fastfail(3u);
    }
LABEL_10:
    while ( 1 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      v16 = v50;
      LODWORD(v54) = 0;
      if ( v50 == (__int64 *)&v50 )
        break;
      if ( (__int64 **)v50[1] != &v50 )
        goto LABEL_51;
      v34 = (__int64 *)*v50;
      if ( *(__int64 **)(*v50 + 8) != v50 )
        goto LABEL_51;
      v50 = (__int64 *)*v50;
      v34[1] = (__int64)&v50;
      *((_BYTE *)v16 + 133) = *((_BYTE *)v16 + 132);
      *((_BYTE *)v16 + 134) = *((_BYTE *)v16 + 130);
      v16[1] = (__int64)v16;
      *v16 = (__int64)v16;
      NextStage = StageQueue_ForwardScanGetNextStage(v16 + 16);
      if ( NextStage )
      {
        v36 = (int)v54;
        v37 = NextStage;
        do
        {
          Isoch_Stage_FreeScatterGatherList(a2, v37);
          *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          v39 = *(_BYTE *)(v37 + 56) == 0;
          v54 = *(unsigned __int8 **)v37;
          if ( !v39 )
          {
            IoFreeMdl(*(PMDL *)(v37 + 64));
            *(_QWORD *)(v37 + 64) = 0LL;
            *(_BYTE *)(v37 + 56) = 0;
          }
          LOBYTE(v38) = 1;
          TR_ReleaseSegments(a2, v37 + 8, v38);
          TR_ReleaseSegments(a2, v37 + 24, 0LL);
          StageQueue_Release(v54 + 128, v37);
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
          ++v36;
          v37 = StageQueue_ForwardScanGetNextStage(v16 + 16);
        }
        while ( v37 );
        v9 = v49;
        v12 = v48;
        LODWORD(v54) = v36;
        v3 = v52;
      }
      *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      Isoch_Transfer_CompleteCancelable(a2, (_DWORD)v16, -1, -1, 1, 0);
      *(_DWORD *)(a2 + 376) -= (_DWORD)v54;
    }
    v17 = v11[130];
    v18 = v11[132];
    LOBYTE(v52) = 0;
    v11[133] = v18;
    v11[134] = v17;
    if ( v17 )
    {
      v19 = v11[128];
      --v11[134];
      v20 = (__int64)&v11[v18 * v19 + 144];
      for ( v11[133] = (v18 + 1) % (unsigned int)v11[129]; v20; v20 = StageQueue_ForwardScanGetNextStage(v11 + 128) )
      {
        if ( (unsigned __int8 **)v20 == v9 )
          break;
        LOBYTE(v15) = 1;
        *(_DWORD *)(v20 + 48) = *(_DWORD *)(v20 + 44) + 1;
        Isoch_Stage_CompleteTD(v20, 23, 0, v15, (__int64)&v52, (__int64)&v54);
      }
    }
    LOBYTE(v15) = 1;
    Isoch_Stage_CompleteTD((_DWORD)v9, *(unsigned __int8 *)(v3 + 11), v12, v15, (__int64)&v53, (__int64)&v55);
  }
  if ( !v53 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
  {
    if ( !v55 && (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
      Isoch_MapTransfers(a2);
    }
    return 0;
  }
  v22 = 0;
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v41 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v41) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v41,
        14,
        67,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        v22);
    }
    for ( i = 0; ; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v42 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v42) = 5;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v42,
          14,
          66,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          i);
      }
      *(_QWORD *)(a2 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a2) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 2, 3) != 3
          && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) == 1 )
        {
          v45 = *(_QWORD *)(a2 + 56);
          if ( !*(_BYTE *)(v45 + 37)
            || (v46 = *(_QWORD *)(v45 + 136),
                _InterlockedIncrement((volatile signed __int32 *)(v46 + 20)) == *(_DWORD *)(v46 + 8)) )
          {
            ESM_AddEvent((KSPIN_LOCK *)(v45 + 288), 20);
          }
        }
        goto LABEL_28;
      }
      v43 = Isoch_PrepareStage(a2);
      if ( v43 != 1 )
        break;
LABEL_65:
      ;
    }
    if ( v43 == 3 )
      goto LABEL_28;
    if ( v43 != 2 )
    {
      if ( v43 == 4 )
      {
        TR_AttemptStateChange(a2, 3LL, 2LL);
        goto LABEL_28;
      }
      v44 = Isoch_MapStage(a2);
      if ( v44 == 2 )
        goto LABEL_28;
      if ( v44 == 4 )
      {
        if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 4LL) != 3 )
          goto LABEL_28;
        goto LABEL_67;
      }
      if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 3LL) != 3 )
        goto LABEL_28;
      goto LABEL_65;
    }
    if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 4LL) == 3 )
LABEL_67:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        -100000000LL);
LABEL_28:
    v24 = *(_DWORD *)(a2 + 108);
    if ( v24 == 2 )
    {
      if ( *(_DWORD *)(a2 + 344) )
      {
        v47 = TR_AttemptStateChange(a2, 2LL, 3LL);
        if ( v47 == 2 )
          goto LABEL_81;
      }
    }
    else if ( v24 == 4 && *(_DWORD *)(a2 + 348) && (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
LABEL_81:
      ++v22;
      continue;
    }
    return 0;
  }
}
