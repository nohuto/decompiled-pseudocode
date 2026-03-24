/*
 * XREFs of MouseClassDeviceControl @ 0x1C000D010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C0001A10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C00068C8 (WPP_RECORDER_SF_qqLd.c)
 */

__int64 __fastcall MouseClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r15
  struct _IO_REMOVE_LOCK *v6; // r14
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rax
  ULONG RemlockSize; // [rsp+20h] [rbp-58h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 184);
  v6 = (struct _IO_REMOVE_LOCK *)(v4 + 32);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v7;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 24);
  v12 = *(_DWORD *)(v5 + 24);
  if ( v12 >= 0xB01E3 && v12 < 0xB0268 )
    goto LABEL_24;
  if ( v12 != 721320 )
  {
    if ( v12 == 983040 )
    {
      v15 = *(_DWORD *)(v5 + 16);
      if ( v15 )
      {
        if ( v15 < 2 )
        {
          v11 = -1073741789;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, RemlockSize);
          goto LABEL_25;
        }
        v16 = **(unsigned __int16 **)(v2 + 24);
      }
      else
      {
        v16 = 0;
      }
      if ( *(_QWORD *)v4 == *(_QWORD *)(v4 + 8) )
      {
        if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        {
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v16 )
            goto LABEL_46;
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          {
            if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 16)
              || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 19) )
            {
              v16 = 0;
            }
            while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 16)
                 || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v16 + 19) )
            {
              if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v16 )
                goto LABEL_46;
              ++v16;
            }
          }
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v16 )
          {
LABEL_46:
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            v11 = -1073741811;
            goto LABEL_25;
          }
          _mm_lfence();
          v4 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v16 + 1);
          *(_QWORD *)(v5 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v16);
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
        v17 = *(_QWORD *)(v2 + 184);
        *(_OWORD *)(v17 - 72) = *(_OWORD *)v17;
        *(_OWORD *)(v17 - 56) = *(_OWORD *)(v17 + 16);
        *(_OWORD *)(v17 - 40) = *(_OWORD *)(v17 + 32);
        *(_QWORD *)(v17 - 24) = *(_QWORD *)(v17 + 48);
        *(_BYTE *)(v17 - 69) = 0;
        *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
        goto LABEL_13;
      }
      v11 = -1073741637;
LABEL_25:
      *(_DWORD *)(v2 + 48) = v11;
      *(_QWORD *)(v2 + 56) = 0LL;
      IofCompleteRequest((PIRP)v2, 0);
      goto LABEL_14;
    }
    if ( v12 > 0x294140 )
    {
      if ( v12 != 2703684 )
      {
LABEL_24:
        v11 = -1073741808;
        goto LABEL_25;
      }
    }
    else if ( v12 != 2703680 )
    {
      switch ( v12 )
      {
        case 0xB0190u:
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
        case 0xB01BAu:
        case 0xB01BEu:
        case 0xB01C2u:
        case 0xB01E2u:
        case 0xB0268u:
          break;
        default:
          goto LABEL_24;
      }
    }
  }
  if ( !*(_BYTE *)(v4 + 64) || v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    goto LABEL_24;
  ++*(_BYTE *)(v2 + 67);
  *(_QWORD *)(v2 + 184) += 72LL;
LABEL_13:
  v11 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), (PIRP)v2);
LABEL_14:
  IoReleaseRemoveLockEx(v6, (PVOID)v2, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 4LL);
  }
  return v11;
}
