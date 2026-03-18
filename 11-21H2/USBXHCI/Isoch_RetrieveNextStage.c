/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C0007C30
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MappingLoop @ 0x1C000A6A0 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C0001330 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C00078A0 (WPP_RECORDER_SF_DDqDDDD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00084E0 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_TransferData_Initialize @ 0x1C00085B0 (Isoch_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C00401BC (WPP_RECORDER_SF_DDi.c)
 *     Isoch_GetPacketLength @ 0x1C0042748 (Isoch_GetPacketLength.c)
 *     Isoch_Stage_Acquire @ 0x1C0042E98 (Isoch_Stage_Acquire.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0043054 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C004313C (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 */

_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // bp
  KSPIN_LOCK *v2; // r15
  int v4; // ebx
  KIRQL v5; // al
  int v6; // edx
  bool v7; // zf
  _QWORD *v8; // r14
  __int64 v9; // rsi
  int v11; // eax
  __int64 v12; // r9
  int v13; // r11d
  __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rtt
  unsigned int v22; // ebx
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rtt
  unsigned int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // r12
  __int64 v42; // r8
  __int64 v43; // r13
  _UNKNOWN **v44; // r9
  unsigned int v45; // r11d
  __int64 v46; // r10
  unsigned int v47; // r12d
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rtt
  unsigned int v52; // ebx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rsi
  unsigned int v57; // eax
  unsigned int v58; // r10d
  __int64 v59; // r8
  char v60; // dl
  unsigned int v61; // r9d
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rcx
  int v66; // edx
  __int64 *v67; // rax
  int v68; // edx
  __int64 v69; // rax
  int v70; // edx
  int v71; // r8d
  int v72; // edx
  __int64 v73; // rax
  int v74; // r8d
  __int64 v75; // rdx
  int v76; // r8d
  int v77; // edx
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rcx
  int v81; // r9d
  int v82; // r8d
  int v83; // edx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // edx
  unsigned int v88; // eax
  unsigned int i; // r14d
  int v90; // r11d
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rdx
  int v94; // edx
  int v95; // [rsp+20h] [rbp-98h]
  __int64 v96; // [rsp+28h] [rbp-90h]
  __int64 v97; // [rsp+30h] [rbp-88h]
  __int64 v98; // [rsp+40h] [rbp-78h]
  __int64 v99; // [rsp+60h] [rbp-58h]
  int v100; // [rsp+C0h] [rbp+8h]
  unsigned int v101; // [rsp+C0h] [rbp+8h]
  __int64 v102; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v103; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v104; // [rsp+D8h] [rbp+20h]

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 368) = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v4 = -1073741823;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v70 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v70) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v70,
        14,
        52,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    }
    goto LABEL_77;
  }
  v8 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_5;
  v7 = *(_DWORD *)(a1 + 336) == 3;
  v9 = *(_QWORD *)(a1 + 392);
  v102 = v9;
  if ( v7 )
  {
    if ( *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v6,
          14,
          53,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v9, -1, -1073737728, 0, 0);
      goto LABEL_5;
    }
    *(_DWORD *)(v9 + 108) = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 104);
    goto LABEL_77;
  }
  if ( (unsigned int)(*(_DWORD *)(v9 + 108) + *(_DWORD *)(v9 + 104)) < *(_DWORD *)(v9 + 96) )
  {
    Isoch_TransferUrb_MarkLatePackets(a1, v9);
    v71 = *(_DWORD *)(v9 + 96);
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 48) + 12LL * (unsigned int)(v71 - 1) + 148) != -1073414144 )
    {
      v73 = Isoch_Stage_Acquire(v9);
      *(_QWORD *)(a1 + 368) = v73;
      if ( v73 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v75 = *(_QWORD *)(a1 + 48);
          v76 = *(unsigned __int8 *)(v75 + 135);
          LOBYTE(v75) = 4;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v75,
            v76,
            55,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            v76,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v9 + 24),
            v73);
        }
        v4 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v77 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v77) = 5;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v77,
          v74,
          56,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v9 + 24));
      }
      goto LABEL_77;
    }
    if ( *(_DWORD *)(v9 + 112) == *(_DWORD *)(v9 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v72 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v72) = 5;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v72,
          14,
          54,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v9, 0, 0, 1, 1);
      goto LABEL_5;
    }
    *(_DWORD *)(v9 + 108) = v71 - *(_DWORD *)(v9 + 104);
LABEL_77:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    return v4 >= 0;
  }
LABEL_5:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v103);
    if ( v4 < 0 )
      break;
    v11 = Isoch_TransferData_Initialize(a1, v103, &v102);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v78 = *(_QWORD *)(a1 + 56);
        LODWORD(v98) = v11;
        LODWORD(v97) = *(_DWORD *)(v78 + 144);
        LODWORD(v96) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(v78 + 80),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x3Bu,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          v96,
          v97,
          v103,
          v98);
      }
      Isoch_Transfer_Complete(a1, v102, -1, -1073737728, 0);
    }
    else
    {
      v12 = v102;
      v13 = 0;
      v100 = 0;
      v104 = v102;
      v14 = *(_QWORD *)(v102 + 48);
      if ( *(_WORD *)(v14 + 2) == 10 )
      {
LABEL_14:
        v15 = 36LL;
      }
      else
      {
        switch ( *(_WORD *)(v14 + 2) )
        {
          case '9':
          case ':':
            v15 = 52LL;
            break;
          default:
            goto LABEL_14;
        }
      }
      v16 = (_DWORD *)(v14 + v15);
      if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 40);
        v18 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v17 + 444) / 10000LL;
        v19 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v17 + 88) + 40LL) + 1) >> 3) & 0x7FF;
        _m_prefetchw((const void *)(v17 + 432));
        v20 = *(_QWORD *)(v17 + 432);
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 432), v20, v20);
        }
        while ( v21 != v20 );
        v22 = v19 | (v18 + ((_DWORD)v20 << 11) - (v20 >> 21)) & 0xFFFFF800;
        v23 = ((_WORD)v18 + ((_WORD)v20 << 11) - (unsigned __int16)(v20 >> 21)) & 0x7FF;
        if ( v23 < v19 )
        {
          if ( v19 - v23 > 0x400 )
            v22 -= 2048;
        }
        else if ( v23 - v19 > 0x400 )
        {
          v22 += 2048;
        }
        v24 = _InterlockedExchange64(
                (volatile __int64 *)(v17 + 432),
                ((unsigned __int64)v22 >> 11) | ((v18 - (v22 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v24) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v17 + 72),
            v24,
            4,
            175,
            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
            v22);
          v12 = v104;
          v13 = 0;
        }
        if ( *(_BYTE *)(a1 + 334)
          || ((v25 = *(_DWORD *)(a1 + 360),
               *(_DWORD *)(v14 + 128) = v25,
               (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) <= 1)
            ? (v26 = 1024)
            : (v26 = 255),
              v22 > v25 && v22 - v25 > v26) )
        {
          *(_BYTE *)(a1 + 333) = 1;
          *(_DWORD *)(v14 + 128) = v22 + 5;
          *(_DWORD *)(a1 + 360) = v22 + 5;
        }
        v27 = *(_DWORD *)(a1 + 360);
      }
      else
      {
        v27 = *(_DWORD *)(v14 + 128);
        *(_DWORD *)(a1 + 360) = v27;
      }
      v28 = *(_DWORD *)(a1 + 356);
      v29 = v28 + *(_DWORD *)(v14 + 132) - 1;
      if ( v28 != 1 )
        v29 /= v28;
      v30 = 0;
      *(_DWORD *)(a1 + 360) = v27 + v29;
      *v16 = 0;
      for ( *(_DWORD *)(v14 + 136) = 0; v30 < *(_DWORD *)(v14 + 132); *(_DWORD *)(v14 + 12 * v31 + 148) = -1 )
        v31 = v30++;
      v32 = *(_QWORD *)(a1 + 40);
      v33 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v32 + 444) / 10000LL;
      v34 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v32 + 88) + 40LL) + 2) >> 3) & 0x7FF;
      _m_prefetchw((const void *)(v32 + 432));
      v35 = *(_QWORD *)(v32 + 432);
      do
      {
        v36 = v35;
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 432), v35, v35);
      }
      while ( v36 != v35 );
      v37 = v34 | (v33 + ((_DWORD)v35 << 11) - (v35 >> 21)) & 0xFFFFF800;
      v38 = ((_WORD)v33 + ((_WORD)v35 << 11) - (unsigned __int16)(v35 >> 21)) & 0x7FF;
      if ( v38 < (unsigned int)v34 )
      {
        v34 = (unsigned int)v34 - v38;
        v79 = v37 - 2048;
        if ( (unsigned int)v34 <= 0x400 )
          v79 = v37;
        v37 = v79;
      }
      else if ( v38 - (unsigned int)v34 > 0x400 )
      {
        v37 += 2048;
      }
      v39 = _InterlockedExchange64(
              (volatile __int64 *)(v32 + 432),
              ((unsigned __int64)v37 >> 11) | ((v33 - (v37 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v39) = 5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v32 + 72),
          v39,
          4,
          175,
          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
          v37);
        v12 = v104;
        v13 = 0;
      }
      v40 = *(_DWORD *)(v14 + 128) - v37;
      if ( v40 <= 0 )
        v40 = v37 - *(_DWORD *)(v14 + 128);
      if ( v40 > 1024 )
      {
        v13 = -1073741823;
        v100 = -1073741823;
      }
      else
      {
        *(_BYTE *)(a1 + 334) = 0;
      }
      v41 = v102;
      v99 = v102;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v34,
          v12,
          v95);
        v13 = v100;
        v12 = v104;
      }
      if ( v13 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v80 = *(_QWORD *)(a1 + 56);
          LODWORD(v98) = v13;
          LODWORD(v97) = *(_DWORD *)(v80 + 144);
          LODWORD(v96) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(v80 + 80),
            2u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x3Cu,
            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
            v96,
            v97,
            v103,
            v98);
        }
        v81 = -1073739264;
        v82 = -1073414144;
LABEL_129:
        Isoch_Transfer_Complete(a1, v41, v82, v81, 0);
      }
      else
      {
        v42 = *(_QWORD *)(v12 + 48);
        v43 = v42;
        if ( *(_WORD *)(v42 + 2) == 10 )
        {
LABEL_49:
          v44 = &WPP_RECORDER_INITIALIZED;
        }
        else
        {
          switch ( *(_WORD *)(v42 + 2) )
          {
            case '9':
            case ':':
              if ( !*(_BYTE *)(a1 + 280) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v83 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                  LOBYTE(v83) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                    v83,
                    v42,
                    30,
                    (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
                    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                    v42);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v85 = *(_QWORD *)(a1 + 56);
                    LODWORD(v98) = -1073741811;
                    LODWORD(v97) = *(_DWORD *)(v85 + 144);
                    LODWORD(v96) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                    WPP_RECORDER_SF_DDqd(
                      *(_QWORD *)(v85 + 80),
                      2u,
                      v84,
                      0x3Du,
                      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
                      v96,
                      v97,
                      v103,
                      v98);
                  }
                }
                v81 = -2147482880;
                v82 = -1;
                goto LABEL_129;
              }
              v86 = *(_QWORD *)(a1 + 48);
              if ( *(_BYTE *)(v86 + 672) )
                goto LABEL_49;
              v44 = &WPP_RECORDER_INITIALIZED;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v87 = *(unsigned __int8 *)(v86 + 135);
                LOBYTE(v87) = 3;
                WPP_RECORDER_SF_DDi(
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                  v87,
                  v42,
                  32,
                  (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
                  *(_BYTE *)(v86 + 135),
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                  v42);
                v43 = *(_QWORD *)(v104 + 48);
                goto LABEL_49;
              }
              break;
            default:
              goto LABEL_49;
          }
        }
        v45 = *(_DWORD *)(v41 + 108) + *(_DWORD *)(v41 + 104);
        v101 = v45;
        v46 = *(_QWORD *)(a1 + 40);
        v47 = (v45 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356) + *(_DWORD *)(v43 + 128);
        v48 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v46 + 444) / 10000LL;
        v49 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v46 + 88) + 40LL) + 2) >> 3) & 0x7FF;
        _m_prefetchw((const void *)(v46 + 432));
        v50 = *(_QWORD *)(v46 + 432);
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 432), v50, v50);
        }
        while ( v51 != v50 );
        v52 = v49 | (v48 + ((_DWORD)v50 << 11) - (v50 >> 21)) & 0xFFFFF800;
        v53 = ((_WORD)v48 + ((_WORD)v50 << 11) - (unsigned __int16)(v50 >> 21)) & 0x7FF;
        if ( v53 < (unsigned int)v49 )
        {
          v49 = (unsigned int)v49 - v53;
          v88 = v52 - 2048;
          if ( (unsigned int)v49 <= 0x400 )
            v88 = v52;
          v52 = v88;
        }
        else if ( v53 - (unsigned int)v49 > 0x400 )
        {
          v52 += 2048;
        }
        v54 = _InterlockedExchange64(
                (volatile __int64 *)(v46 + 432),
                ((unsigned __int64)v52 >> 11) | ((v48 - (v52 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v54) = 5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v46 + 72),
            v54,
            4,
            175,
            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
            v52);
          v45 = v101;
        }
        v55 = *(_DWORD *)(a1 + 356);
        v56 = v102;
        v57 = v55 + *(_DWORD *)(v102 + 96) - v45 - 1;
        if ( v55 != 1 )
        {
          LODWORD(v54) = v57 % v55;
          v57 /= v55;
        }
        v58 = v57 + v47;
        if ( v47 < v57 + v47 )
        {
          do
          {
            if ( v47 > v52 && v47 - v52 < 0x7FFFFFFF )
              break;
            for ( i = 0; i < *(_DWORD *)(a1 + 356); ++i )
            {
              *(_DWORD *)(v43 + 12LL * v45 + 148) = -1073414144;
              *(_DWORD *)(v56 + 92) += Isoch_GetPacketLength(v56, v45, v49, v44);
              v45 = v90 + 1;
              ++*(_DWORD *)(v99 + 108);
            }
            ++v47;
          }
          while ( v47 < v58 );
          v8 = (_QWORD *)(a1 + 384);
          v2 = (KSPIN_LOCK *)(a1 + 96);
        }
        if ( *(_DWORD *)(*(_QWORD *)(v104 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v56 + 96) - 1) + 148) == -1073414144 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v54) = 4;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v54,
              14,
              62,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
          }
          Isoch_Transfer_Complete(a1, v56, 0, 0, 1);
        }
        else if ( *(_DWORD *)(v56 + 80) )
        {
          *(_DWORD *)(v56 + 64) = 1;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _UNKNOWN **))(WdfFunctions_01023 + 3144))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v56 + 24),
                 Isoch_WdfEvtRequestCancel,
                 v44);
          if ( v4 >= 0 )
          {
            v60 = *(_BYTE *)(v56 + 130);
            v61 = *(unsigned __int8 *)(v56 + 129);
            if ( v60 == (_BYTE)v61 )
            {
              v64 = 0LL;
            }
            else
            {
              v62 = *(unsigned __int8 *)(v56 + 131);
              v63 = v62 * (unsigned int)*(unsigned __int8 *)(v56 + 128);
              *(_BYTE *)(v56 + 130) = v60 + 1;
              v64 = v63 + v56 + 144;
              *(_BYTE *)(v56 + 131) = (v62 + 1) % v61;
              if ( v64 )
              {
                v65 = *(_QWORD *)(v56 + 56);
                *(_QWORD *)(v64 + 16) = v64 + 8;
                *(_QWORD *)(v64 + 8) = v64 + 8;
                *(_QWORD *)(v64 + 32) = v64 + 24;
                *(_QWORD *)(v64 + 24) = v64 + 24;
                *(_QWORD *)(v64 + 72) = 0LL;
                *(_QWORD *)v64 = v56;
                *(_DWORD *)(v64 + 40) = -2;
                *(_DWORD *)(v64 + 44) = -2;
                *(_QWORD *)(v64 + 48) = 1LL;
                *(_BYTE *)(v64 + 56) = 0;
                *(_QWORD *)(v64 + 64) = 0LL;
                *(_QWORD *)(v64 + 80) = *(_QWORD *)(v65 + 176);
                *(_DWORD *)(v64 + 88) = *(_DWORD *)(v65 + 192);
                *(_QWORD *)(v64 + 96) = *(_QWORD *)(v65 + 176);
                *(_DWORD *)(v64 + 104) = *(_DWORD *)(v65 + 192);
                *(_QWORD *)(v64 + 112) = *(_QWORD *)(v65 + 176);
                *(_DWORD *)(v64 + 120) = *(_DWORD *)(v65 + 192);
                *(_DWORD *)(v64 + 160) = 0;
                if ( *(_BYTE *)(v65 + 280) )
                {
                  *(_QWORD *)(v64 + 184) = 0LL;
                  *(_DWORD *)(v64 + 168) = 1;
                  *(_QWORD *)(v64 + 72) = v64 + 168;
                  *(_DWORD *)(v64 + 192) = 0;
                }
                *(_OWORD *)(v64 + 128) = 0LL;
                *(_OWORD *)(v64 + 144) = 0LL;
              }
            }
            *(_QWORD *)(a1 + 368) = v64;
            if ( !*(_DWORD *)(a1 + 376) )
            {
              v69 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v69 + 24) > 1u )
              {
                v93 = *(unsigned int *)(*(_QWORD *)(v56 + 48) + 64LL);
                if ( (unsigned int)v93 < *(_DWORD *)(v69 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v69 + 56) + 2 * v93);
              }
              *(_WORD *)(a1 + 112) = v1;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v66 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v66) = 4;
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                v66,
                v64,
                65,
                (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
                *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                *(_QWORD *)(v56 + 24),
                v64);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
            v67 = (__int64 *)v8[1];
            if ( (_QWORD *)*v67 != v8 )
              __fastfail(3u);
            *(_QWORD *)v56 = v8;
            *(_QWORD *)(v56 + 8) = v67;
            *v67 = v56;
            v8[1] = v56;
            goto LABEL_77;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v92 = *(_QWORD *)(a1 + 56);
            LODWORD(v98) = v4;
            LODWORD(v97) = *(_DWORD *)(v92 + 144);
            LODWORD(v96) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v92 + 80),
              4u,
              v59,
              0x40u,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              v96,
              v97,
              *(_QWORD *)(v56 + 24),
              v98);
          }
          *(_DWORD *)(v56 + 64) = 3;
          Isoch_Transfer_Complete(a1, v56, -1, -1073676288, 0);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v91 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v91) = 4;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v91,
              v49,
              63,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              v103);
          }
          Isoch_Transfer_Complete(a1, v56, -1, -1, 1);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v94 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v94) = 5;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v94,
      14,
      57,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      v4);
  }
  if ( !*(_DWORD *)(a1 + 376) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v68 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v68) = 3;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v68,
      14,
      58,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  return v4 >= 0;
}
