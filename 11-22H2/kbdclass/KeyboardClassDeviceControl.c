/*
 * XREFs of KeyboardClassDeviceControl @ 0x1C000D190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqdL @ 0x1C0001B50 (WPP_RECORDER_SF_qqdL.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00025E0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C00026D0 (WPP_RECORDER_SF_qqLd.c)
 *     KeyboardCallAllPorts @ 0x1C0004ED0 (KeyboardCallAllPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C000652C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0007094 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00071E4 (WPP_RECORDER_SF_qqdd.c)
 */

__int64 __fastcall KeyboardClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r13
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // esi
  struct _IO_REMOVE_LOCK *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v20; // rax
  unsigned int *Pool2; // rax
  unsigned int *v22; // rsi
  PDRIVER_CONTROL DeviceRoutine; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
  struct _IO_REMOVE_LOCK *RemoveLock; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v2 + 184);
  RemoveLock = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v7;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x15u, RemlockSize);
  v12 = *(_DWORD *)(v6 + 24);
  if ( v12 <= 0xB0190 )
  {
    if ( v12 != 721296 )
    {
      switch ( v12 )
      {
        case 0xB0000u:
        case 0xB0020u:
        case 0xB0040u:
        case 0xB0080u:
          goto LABEL_18;
        case 0xB0004u:
          goto LABEL_16;
        case 0xB0008u:
          if ( *(_DWORD *)(v6 + 16) < 4u )
          {
            v11 = -1073741789;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v9, 0x16u, RemlockSize);
            goto LABEL_40;
          }
          *(_DWORD *)(v5 + 156) = **(_DWORD **)(v2 + 24);
LABEL_16:
          if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
            v4 = 1;
          break;
        default:
          goto LABEL_36;
      }
      goto LABEL_18;
    }
LABEL_26:
    if ( *(_BYTE *)(v5 + 64) && v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      ++*(_BYTE *)(v2 + 67);
      *(_QWORD *)(v2 + 184) += 72LL;
      goto LABEL_29;
    }
LABEL_36:
    v11 = -1073741808;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqdL((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, RemlockSize);
    goto LABEL_40;
  }
  if ( v12 <= 0xB1000 )
  {
    if ( v12 != 724992 )
    {
      switch ( v12 )
      {
        case 0xB0191u:
        case 0xB0192u:
        case 0xB0193u:
        case 0xB0194u:
        case 0xB0197u:
        case 0xB0198u:
        case 0xB019Au:
        case 0xB019Cu:
        case 0xB019Eu:
        case 0xB01A0u:
        case 0xB01A4u:
        case 0xB01A8u:
        case 0xB01BAu:
        case 0xB01BEu:
        case 0xB01C2u:
        case 0xB01E2u:
        case 0xB0268u:
          goto LABEL_26;
        case 0xB0200u:
          goto LABEL_18;
        default:
          goto LABEL_36;
      }
    }
    goto LABEL_18;
  }
  if ( v12 != 724996 )
  {
    if ( v12 != 2703680 && v12 != 2703684 )
      goto LABEL_36;
    goto LABEL_26;
  }
LABEL_18:
  v13 = *(_DWORD *)(v6 + 16);
  v14 = 0;
  if ( v13 )
  {
    if ( v13 < 2 )
    {
      v11 = -1073741789;
LABEL_40:
      *(_DWORD *)(v2 + 48) = v11;
      *(_QWORD *)(v2 + 56) = 0LL;
      IofCompleteRequest((PIRP)v2, 0);
      goto LABEL_30;
    }
    v15 = **(unsigned __int16 **)(v2 + 24);
  }
  else
  {
    v15 = 0;
  }
  if ( *(_QWORD *)v5 != *(_QWORD *)(v5 + 8) )
  {
    v11 = -1073741637;
    goto LABEL_40;
  }
  if ( v5 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v15 )
      goto LABEL_46;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v15 + 16)
        || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v15 + 19) )
      {
        v15 = 0;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v15 )
        goto LABEL_46;
      while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v15 + 16)
           || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v15 + 19) )
      {
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= ++v15 )
          goto LABEL_46;
      }
    }
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v15 )
    {
LABEL_46:
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      v11 = -1073741811;
      goto LABEL_40;
    }
    _mm_lfence();
    v5 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v15 + 1);
    *(_QWORD *)(v6 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v15);
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  else
  {
    v4 = 0;
  }
  v20 = *(_QWORD *)(v2 + 184);
  *(_OWORD *)(v20 - 72) = *(_OWORD *)v20;
  *(_OWORD *)(v20 - 56) = *(_OWORD *)(v20 + 16);
  *(_OWORD *)(v20 - 40) = *(_OWORD *)(v20 + 32);
  *(_QWORD *)(v20 - 24) = *(_QWORD *)(v20 + 48);
  *(_BYTE *)(v20 - 69) = 0;
  *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
  if ( v4 )
  {
    v16 = RemoveLock;
    if ( IoAcquireRemoveLockEx(RemoveLock, (PVOID)v2, File, 1u, 0x20u) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 4u, 0x17u, RemlockSize);
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 8, 1130652235LL);
    v22 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
      Pool2[1] = 0;
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        do
        {
          DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          v24 = 3LL * v14;
          *(_OWORD *)&v22[2 * v24 + 2] = *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v14);
          *(_QWORD *)&v22[2 * v24 + 6] = *((_QWORD *)DeviceRoutine + 3 * v14 + 2);
          if ( LOBYTE(v22[6 * v14 + 6])
            && !HIBYTE(v22[6 * v14 + 6])
            && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)&v22[6 * v14 + 4] + 32LL), (PVOID)v2, File, 1u, 0x20u) < 0
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qqdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v26, v27, RemlockSize);
          }
          ++v14;
        }
        while ( v14 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
      }
      v11 = KeyboardCallAllPorts(a1, (IRP *)v2, v22);
    }
    else
    {
      v11 = -1073741670;
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_DWORD *)(v2 + 48) = -1073741670;
      IofCompleteRequest((PIRP)v2, 0);
    }
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_31;
  }
LABEL_29:
  v11 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), (PIRP)v2);
LABEL_30:
  v16 = RemoveLock;
LABEL_31:
  IoReleaseRemoveLockEx(v16, (PVOID)v2, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v17, 0x1Au, RemlockSize);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v18) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v18, 4LL);
      }
    }
  }
  return v11;
}
