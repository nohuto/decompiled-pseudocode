/*
 * XREFs of KeyboardClassDeviceControl @ 0x1C000D110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C00022D0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00023A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqdL @ 0x1C0002540 (WPP_RECORDER_SF_qqdL.c)
 *     KeyboardCallAllPorts @ 0x1C0004B60 (KeyboardCallAllPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0006D38 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0006E88 (WPP_RECORDER_SF_qqdd.c)
 */

__int64 __fastcall KeyboardClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  struct _IO_REMOVE_LOCK *v7; // r12
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // ebp
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // r13d
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v20; // r9d
  unsigned int *Pool2; // rax
  unsigned int *v22; // rdi
  PDRIVER_CONTROL DeviceRoutine; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
  unsigned int v29; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v2 + 184);
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v8;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x15u, RemlockSize);
  v12 = *(_DWORD *)(v6 + 24);
  switch ( v12 )
  {
    case 0xB0004u:
LABEL_11:
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        v4 = 1;
      goto LABEL_13;
    case 0xB0008u:
      if ( *(_DWORD *)(v6 + 16) < 4u )
      {
        v16 = -1073741789;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqLd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            (__int64)&WPP_RECORDER_INITIALIZED,
            0x16u,
            RemlockSize);
        goto LABEL_31;
      }
      *(_DWORD *)(v5 + 156) = **(_DWORD **)(v2 + 24);
      goto LABEL_11;
    case 0xB0000u:
      goto LABEL_13;
  }
  if ( v12 >= 0xB0201 && v12 < 0xB0268 )
  {
LABEL_29:
    v16 = -1073741808;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqdL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        (__int64)&WPP_RECORDER_INITIALIZED,
        v10,
        RemlockSize);
    goto LABEL_31;
  }
  if ( v12 <= 0xB0194 )
  {
    if ( v12 < 0xB0190 )
    {
      if ( v12 == 720928 || v12 == 720960 || v12 == 721024 )
        goto LABEL_13;
      goto LABEL_29;
    }
LABEL_46:
    if ( *(_BYTE *)(v5 + 64) && v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      ++*(_BYTE *)(v2 + 67);
      *(_QWORD *)(v2 + 184) += 72LL;
LABEL_20:
      v16 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), (PIRP)v2);
      goto LABEL_21;
    }
    goto LABEL_29;
  }
  if ( v12 > 0xB1000 )
  {
    if ( v12 == 724996 )
      goto LABEL_13;
    if ( v12 != 2703680 && v12 != 2703684 )
      goto LABEL_29;
    goto LABEL_46;
  }
  if ( v12 != 724992 )
  {
    v9 = 0x1C0000000uLL;
    switch ( v12 )
    {
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
        goto LABEL_46;
      case 0xB0200u:
        break;
      default:
        goto LABEL_29;
    }
  }
LABEL_13:
  v13 = *(_DWORD *)(v6 + 16);
  v14 = 0;
  if ( v13 )
  {
    if ( v13 < 2 )
    {
      v16 = -1073741789;
      goto LABEL_31;
    }
    v29 = **(unsigned __int16 **)(v2 + 24);
  }
  else
  {
    v29 = 0;
  }
  if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) )
  {
    if ( v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v4 = 0;
      goto LABEL_19;
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v20 = v29;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v29 )
      goto LABEL_62;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v29 + 16)
        || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v29 + 19) )
      {
        v20 = 0;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v20 )
      {
LABEL_62:
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v16 = -1073741811;
        goto LABEL_31;
      }
      while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v20 + 16)
           || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v20 + 19) )
      {
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= ++v20 )
          goto LABEL_62;
      }
    }
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > v20 )
    {
      _mm_lfence();
      v5 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v20 + 1);
      *(_QWORD *)(v6 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v20);
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
LABEL_19:
      v15 = *(_QWORD *)(v2 + 184);
      *(_OWORD *)(v15 - 72) = *(_OWORD *)v15;
      *(_OWORD *)(v15 - 56) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)(v15 - 40) = *(_OWORD *)(v15 + 32);
      *(_QWORD *)(v15 - 24) = *(_QWORD *)(v15 + 48);
      *(_BYTE *)(v15 - 69) = 0;
      *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
      if ( v4 )
      {
        if ( IoAcquireRemoveLockEx(v7, (PVOID)v2, File, 1u, 0x20u) < 0
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 4u, 0x17u, RemlockSize);
        }
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        Pool2 = (unsigned int *)ExAllocatePool2(
                                  64LL,
                                  24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 8,
                                  1130652235LL);
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
                && IoAcquireRemoveLockEx(
                     (PIO_REMOVE_LOCK)(*(_QWORD *)&v22[6 * v14 + 4] + 32LL),
                     (PVOID)v2,
                     File,
                     1u,
                     0x20u) < 0
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qqdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v26, v27, RemlockSize);
              }
              ++v14;
            }
            while ( v14 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
          }
          v16 = KeyboardCallAllPorts(a1, (IRP *)v2, v22);
        }
        else
        {
          v16 = -1073741670;
          *(_QWORD *)(v2 + 56) = 0LL;
          *(_DWORD *)(v2 + 48) = -1073741670;
          IofCompleteRequest((PIRP)v2, 0);
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    goto LABEL_62;
  }
  v16 = -1073741637;
LABEL_31:
  *(_DWORD *)(v2 + 48) = v16;
  *(_QWORD *)(v2 + 56) = 0LL;
  IofCompleteRequest((PIRP)v2, 0);
LABEL_21:
  IoReleaseRemoveLockEx(v7, (PVOID)v2, 0x20u);
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
  return v16;
}
