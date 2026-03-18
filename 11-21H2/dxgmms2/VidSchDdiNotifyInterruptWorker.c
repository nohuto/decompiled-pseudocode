/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000C690 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0044360 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000D890 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E468 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C0017D2C (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C001F63A (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00343C0 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C0036430 (LogPageFaultInformation.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0037FB4 (McTemplateK0qq_EtwWriteTransfer.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0038D50 (VidSchiProcessIsrFaultedPacket.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C00415E8 (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x1C00431BC (VidSchiProcessIsrGpuEngineTimeout.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0043278 (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x1C0043404 (VidSchiProcessIsrSchedulingLogFull.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x1C00434C0 (VidSchiProcessIsrSuspendContextCompleted.c)
 */

__int64 __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v8; // rbp
  int v9; // ecx
  unsigned __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // ebx
  unsigned int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // r15
  __int64 v35; // r15
  unsigned __int64 v36; // r9
  unsigned int *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  PSLIST_ENTRY v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  unsigned int v47; // ebp
  PSLIST_ENTRY v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // [rsp+80h] [rbp+8h] BYREF

  result = *a2;
  v5 = *(_QWORD *)(a1 + 632);
  v51 = 0;
  v8 = a1;
  if ( (unsigned int)result <= 0x12 )
  {
    v9 = 263304;
    if ( _bittest(&v9, result) )
    {
      if ( (*(_DWORD *)(v5 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v5 + 80) <= 1u
          || (a2[18] & 1) == 0
          || ((_DWORD)result != 7
            ? ((_DWORD)result != 10
             ? ((_DWORD)result != 18
              ? (v26 = a2[6])
              : (v26 = a2[3]))
             : (v26 = a2[3]))
            : (v26 = a2[3]),
              v26) )
        {
          v3 = MEMORY[0xFFFFF78000000320];
          v16 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v5, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
          if ( v16 != -1 && v16 < *(_DWORD *)(v5 + 40) )
          {
            _mm_lfence();
            v17 = *(_QWORD *)(v5 + 8LL * v16 + 3200);
            v18 = *(unsigned int *)(v17 + 44236);
            *(_QWORD *)(v17 + 8 * v18 + 44240) = v3;
            v19 = 10 * v18;
            *(_OWORD *)(v17 + 8 * v19 + 44272) = *(_OWORD *)a2;
            *(_OWORD *)(v17 + 8 * v19 + 44288) = *((_OWORD *)a2 + 1);
            *(_OWORD *)(v17 + 8 * v19 + 44304) = *((_OWORD *)a2 + 2);
            *(_OWORD *)(v17 + 8 * v19 + 44320) = *((_OWORD *)a2 + 3);
            *(_OWORD *)(v17 + 8 * v19 + 44336) = *((_OWORD *)a2 + 4);
            result = ((unsigned __int8)*(_DWORD *)(v17 + 44236) + 1) & 3;
            *(_DWORD *)(v17 + 44236) = result;
            return result;
          }
        }
        else
        {
          WdLogSingleEntry5(0LL, 281LL, 6LL, v5, 0LL, 0LL);
          __debugbreak();
        }
        v27 = *(unsigned int *)(v5 + 6032);
        *(_QWORD *)(v5 + 8 * v27 + 6040) = v3;
        v28 = 10 * v27;
        *(_OWORD *)(v5 + 8 * v28 + 6072) = *(_OWORD *)a2;
        *(_OWORD *)(v5 + 8 * v28 + 6088) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v5 + 8 * v28 + 6104) = *((_OWORD *)a2 + 2);
        *(_OWORD *)(v5 + 8 * v28 + 6120) = *((_OWORD *)a2 + 3);
        *(_OWORD *)(v5 + 8 * v28 + 6136) = *((_OWORD *)a2 + 4);
        result = ((unsigned __int8)*(_DWORD *)(v5 + 6032) + 1) & 3;
        *(_DWORD *)(v5 + 6032) = result;
        return result;
      }
    }
  }
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result == 11 )
    {
LABEL_65:
      result = *(unsigned int *)(v5 + 36);
      if ( (result & 1) != 0 )
      {
        v29 = a2[2] + *(unsigned __int8 *)(a2[3] + v5 + 88);
        v30 = v29;
        if ( !a3 || (result = *(_QWORD *)(v5 + 592), !_bittest64((const signed __int64 *)result, v29)) )
        {
          v31 = *(__int64 **)(v5 + 632);
          if ( (unsigned int)v29 < *(_DWORD *)(v5 + 704) )
            v31 += v29;
          v32 = *v31;
          result = *(unsigned int *)(*v31 + 16);
          if ( (_DWORD)result != 1 )
          {
            if ( a3 )
            {
              if ( *(_DWORD *)(v32 + 16) == 2 )
              {
                WdLogSingleEntry5(0LL, 281LL, 16LL, v5, *(unsigned __int16 *)(v32 + 4), 0LL);
                __debugbreak();
              }
            }
            return VidSchiProcessIsrMonitoredFenceSignaled(v32, v30);
          }
        }
      }
      return result;
    }
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result != 4 )
      {
        if ( (_DWORD)result != 9 )
        {
          switch ( (_DWORD)result )
          {
            case 0xF:
              result = *(unsigned int *)(v5 + 36);
              if ( (result & 1) != 0 )
              {
                v42 = a2[2] + *(unsigned __int8 *)(a2[3] + v5 + 88);
                v43 = *(_QWORD **)(v5 + 632);
                if ( (unsigned int)v42 < *(_DWORD *)(v5 + 704) )
                  v43 += v42;
                return VidSchiProcessIsrSchedulingLogFull(*v43);
              }
              break;
            case 0x10:
              result = *(unsigned int *)(v5 + 36);
              if ( (result & 1) != 0 )
              {
                v44 = a2[2] + *(unsigned __int8 *)(a2[3] + v5 + 88);
                v45 = *(_QWORD **)(v5 + 632);
                if ( (unsigned int)v44 < *(_DWORD *)(v5 + 704) )
                  v45 += v44;
                return VidSchiProcessIsrGpuEngineTimeout(*v45);
              }
              break;
            case 0x11:
              result = *(unsigned int *)(v5 + 36);
              if ( (result & 1) != 0 )
                return VidSchiProcessIsrSuspendContextCompleted(v5);
              break;
            case 0xC:
              result = *(unsigned int *)(v5 + 36);
              if ( (result & 1) != 0 )
                return VidSchiProcessIsrHwQueuePageFaulted(v5);
              break;
            case 0xE:
              v46 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                      *(ADAPTER_DISPLAY **)(*(_QWORD *)(v5 + 16) + 2792LL),
                      a2[2]);
              v47 = v46;
              if ( v46 == -1 )
              {
                WdLogSingleEntry0(1LL);
                return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[85])(
                         0LL,
                         0x40000LL,
                         0xFFFFFFFFLL,
                         L"Dropping invalid VidPnTargetId for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
                         7702LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL);
              }
              else if ( (unsigned __int8)a2[3] < 8u )
              {
                v48 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v5 + 8LL * v46 + 3200) + 78608LL));
                if ( v48 )
                {
                  HIDWORD(v48[2].Next) = a2[3];
                  LODWORD(v48[2].Next) = v47;
                  LODWORD(v48->Next) = 14;
                  result = (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1776), v48 + 1);
                  if ( (byte_1C006E941 & 2) != 0 )
                    return McTemplateK0qq_EtwWriteTransfer(
                             v49,
                             &EventPeriodicFrameNotificationInterrupt,
                             v50,
                             LODWORD(v48[2].Next),
                             HIDWORD(v48[2].Next));
                }
                else
                {
                  WdLogSingleEntry2(1LL, a2[2], a2[3]);
                  return ((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                           0LL,
                           0x40000LL,
                           0xFFFFFFFFLL,
                           L"Out of Periodic Cookies, can't process DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED with "
                            "VidPnTargetId:%d NotificationID:%d",
                           a2[2],
                           a2[3],
                           0LL,
                           0LL,
                           0LL);
                }
              }
              else
              {
                WdLogSingleEntry0(1LL);
                return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[85])(
                         0LL,
                         0x40000LL,
                         0xFFFFFFFFLL,
                         L"Dropping invalid NotificationID for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
                         7709LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL);
              }
              break;
          }
          return result;
        }
LABEL_82:
        result = *(unsigned int *)(v5 + 36);
        if ( (result & 4) == 0 )
          return result;
        VidSchiValidatePageFaultFlags((enum _DXGK_PAGE_FAULT_FLAGS)a2[8]);
        v33 = a2[12] + *(unsigned __int8 *)(a2[13] + v5 + 88);
        if ( a3 && _bittest64(*(const signed __int64 **)(v5 + 592), a2[12] + *(unsigned __int8 *)(a2[13] + v5 + 88)) )
          return LogPageFaultInformation(1LL, v8, a2);
        v34 = *(__int64 **)(v5 + 632);
        if ( (unsigned int)v33 < *(_DWORD *)(v5 + 704) )
          v34 += v33;
        v35 = *v34;
        v36 = *(unsigned int *)(v35 + 12);
        if ( (v36 & 2) != 0 && (a2[8] & 2) == 0 )
        {
          WdLogSingleEntry5(0LL, 281LL, 13LL, (v36 >> 1) & 1, a2[10], a2[11]);
          __debugbreak();
        }
        if ( *(_DWORD *)(v35 + 16) == 1 )
        {
          v37 = a2;
          v38 = 2LL;
          v39 = v8;
        }
        else
        {
          if ( a3 && *(_DWORD *)(v35 + 16) == 2 )
          {
            WdLogSingleEntry5(0LL, 281LL, 16LL, v5, *(unsigned __int16 *)(v35 + 4), 0LL);
            __debugbreak();
          }
          if ( (a2[8] & 2) != 0 )
          {
            v40 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v35 + 6240));
            if ( v40 )
            {
              v40[2].Next = (struct _SLIST_ENTRY *)v35;
              *((_QWORD *)&v40[2].Next + 1) = a2[2];
              *((_QWORD *)&v40[3].Next + 1) = *((_QWORD *)a2 + 2);
              LODWORD(v40[5].Next) = a2[6];
              HIDWORD(v40[5].Next) = a2[7];
              *((_DWORD *)&v40[5].Next + 2) = a2[8];
              v40[3].Next = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 5);
              *((_DWORD *)&v40[4].Next + 2) = a2[12];
              *((_DWORD *)&v40[4].Next + 3) = a2[13];
              *((_DWORD *)&v40[5].Next + 3) = a2[14];
              LODWORD(v40[6].Next) = a2[15];
              v40[4].Next = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 8);
              LODWORD(v40->Next) = 12;
              return (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1776), v40 + 1);
            }
            else
            {
              WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v35 + 4));
              return ((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                       0LL,
                       0x40000LL,
                       0xFFFFFFFFLL,
                       L"The list of pending HW queue page faulted interrupts is full on node %d. There must be severe con"
                        "tention on the scheduler spin lock. This interrupt will be ignored.",
                       *(unsigned __int16 *)(v35 + 4),
                       0LL,
                       0LL,
                       0LL,
                       0LL);
            }
          }
          result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v35, a2[2], 0, &v51);
          if ( !(_DWORD)result )
            return result;
          VidSchiProcessIsrCompletedPacket(v35, v51, a3, a2);
          VidSchiProcessIsrFaultedPacket(v35, v51, a3, a2);
          v41 = a2[8];
          v37 = a2;
          v39 = v8;
          if ( (v41 & 4) != 0 )
          {
            v38 = 3LL;
          }
          else if ( (v41 & 8) != 0 )
          {
            v38 = 4LL;
          }
          else
          {
            v38 = 5LL;
          }
        }
        return LogPageFaultInformation(v38, v39, v37);
      }
LABEL_81:
      WdLogSingleEntry5(0LL, 281LL, 13LL, a2[4], a2[5], a2[2]);
      __debugbreak();
      goto LABEL_82;
    }
    result = *(unsigned int *)(v5 + 36);
    if ( (result & 1) == 0 )
      return result;
    v20 = a2[4] + *(unsigned __int8 *)(a2[5] + v5 + 88);
    if ( a3 )
    {
      result = *(_QWORD *)(v5 + 592);
      if ( _bittest64((const signed __int64 *)result, v20) )
        return result;
    }
    v21 = *(__int64 **)(v5 + 632);
    if ( (unsigned int)v20 < *(_DWORD *)(v5 + 704) )
      v21 += v20;
    v8 = *v21;
    result = *(unsigned int *)(v8 + 16);
    if ( (_DWORD)result == 1 )
      return result;
    if ( a3 && *(_DWORD *)(v8 + 16) == 2 )
    {
      result = WdLogSingleEntry5(0LL, 281LL, 16LL, v5, *(unsigned __int16 *)(v8 + 4), 0LL);
      __debugbreak();
    }
    else
    {
      v22 = a2[2];
      v23 = *(_QWORD *)(v8 + 24);
      v24 = *(unsigned int *)(v8 + 112);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 160), 0, 0);
      if ( (unsigned int)result >= (unsigned int)v24 )
      {
        if ( (unsigned int)v22 <= (unsigned int)result && (unsigned int)v22 >= (unsigned int)v24 )
          goto LABEL_46;
        goto LABEL_78;
      }
    }
    if ( (unsigned int)v22 <= (unsigned int)result || (unsigned int)v22 >= (unsigned int)v24 )
    {
LABEL_46:
      result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v8, a2[3], 0, &v51);
      if ( (_DWORD)result )
      {
        do
        {
          v25 = VidSchiProcessIsrCompletedPacket(v8, v51, a3, a2);
          result = VidSchiProcessIsrPreemptedPacket(v8, a2[2], a3, a2);
        }
        while ( v25 );
      }
      return result;
    }
LABEL_78:
    if ( *(_BYTE *)(v23 + 53) )
    {
      *(_DWORD *)(v8 + 2032) = 1;
      *(_BYTE *)(v8 + 2025) = 1;
      return result;
    }
    WdLogSingleEntry5(0LL, 281LL, 1LL, v22, v24, *(_QWORD *)(v23 + 16));
    __debugbreak();
    goto LABEL_81;
  }
  result = *(unsigned int *)(v5 + 36);
  if ( (result & 1) != 0 )
  {
    v10 = a2[3] + *(unsigned __int8 *)(a2[4] + v5 + 88);
    if ( !a3 || (result = *(_QWORD *)(v5 + 592), !_bittest64((const signed __int64 *)result, v10)) )
    {
      v11 = *(__int64 **)(v5 + 632);
      if ( (unsigned int)v10 < *(_DWORD *)(v5 + 704) )
        v11 += v10;
      v12 = *v11;
      result = *(unsigned int *)(*v11 + 16);
      if ( (_DWORD)result != 1 )
      {
        if ( a3 && *(_DWORD *)(v12 + 16) == 2 )
        {
          result = WdLogSingleEntry5(0LL, 281LL, 16LL, v5, *(unsigned __int16 *)(v12 + 4), 0LL);
          __debugbreak();
        }
        else
        {
          v13 = a2[2];
          v14 = *(unsigned int *)(v12 + 64);
          v15 = *(_QWORD *)(v12 + 24);
          v51 = v13;
          if ( (_DWORD)v13 == (_DWORD)v14 || (_DWORD)v13 == *(_DWORD *)(v12 + 72) )
            return VidSchiProcessIsrCompletedPacket(v12, v13, a3, a2);
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 152), 0, 0);
          if ( (unsigned int)result >= (unsigned int)v14 )
          {
            if ( (unsigned int)v13 <= (unsigned int)result && (unsigned int)v13 >= (unsigned int)v14 )
              return VidSchiProcessIsrCompletedPacket(v12, v13, a3, a2);
            goto LABEL_62;
          }
        }
        if ( (unsigned int)v13 <= (unsigned int)result || (unsigned int)v13 >= (unsigned int)v14 )
          return VidSchiProcessIsrCompletedPacket(v12, v13, a3, a2);
LABEL_62:
        if ( *(_BYTE *)(v15 + 53) )
        {
          *(_DWORD *)(v12 + 2032) = 1;
          *(_BYTE *)(v12 + 2025) = 1;
          return result;
        }
        WdLogSingleEntry5(0LL, 281LL, 1LL, v13, v14, *(_QWORD *)(v15 + 16));
        __debugbreak();
        goto LABEL_65;
      }
    }
  }
  return result;
}
