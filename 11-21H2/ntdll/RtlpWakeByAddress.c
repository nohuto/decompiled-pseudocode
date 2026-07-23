/*
 * XREFs of RtlpWakeByAddress @ 0x18005B0C4
 * Callers:
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180058338 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005AEA4 (RtlpDecRefWnfUserSubscription.c)
 *     RtlWakeAddressSingle @ 0x18005B050 (RtlWakeAddressSingle.c)
 *     RtlWakeAddressAll @ 0x18005B070 (RtlWakeAddressAll.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007674C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180080FDC (RtlpSetRequestedFrontEndHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlpUnWaitCriticalSection @ 0x1800F3F60 (RtlpUnWaitCriticalSection.c)
 *     RtlPosixBarrier @ 0x1800F8B58 (RtlPosixBarrier.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 *     RtlWakeAddressAllNoFence @ 0x18010FE50 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingleNoFence @ 0x18010FE60 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x18005B2CC (RtlpWaitOnAddressWakeEntireList.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeByAddress(unsigned __int64 a1, char a2)
{
  bool v2; // bp
  __int64 v3; // rdi
  __int64 v6; // r10
  _PEB *ProcessEnvironmentBlock; // rsi
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  unsigned __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  signed __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  char v19; // r8
  signed __int64 v20; // rtt
  __int64 v21; // rcx
  __int64 v22; // rax
  signed __int64 v23; // rtt

  v2 = 0;
  v3 = (a1 >> 5) & 0x7F;
  v6 = 0LL;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  v8 = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v3];
  while ( v8 && (v8 & 1) == 0 )
  {
    if ( (v8 & 2) != 0 )
    {
      v23 = v8;
      v8 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
             v8 | 1,
             v8);
      if ( v23 == v8 )
        return v8;
    }
    else
    {
      v9 = v8 | 2;
      v10 = v8;
      v8 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
             v8 | 2,
             v8);
      if ( v10 == v8 )
      {
LABEL_6:
        v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            v8 = (signed __int64)v12;
            v12 = (_QWORD *)v12[2];
            v12[3] = v8;
          }
          while ( !v12[4] );
        }
        v13 = v12[4];
        *(_QWORD *)(v11 + 32) = v13;
        while ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 24);
          if ( *(_QWORD *)v13 == a1 )
          {
            v15 = *(_QWORD *)(v13 + 16);
            if ( v13 == v11 )
            {
              if ( v15 )
                v15 = ((unsigned __int8)v9 ^ (unsigned __int8)v15) & 3 ^ (unsigned __int64)v15;
              v8 = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                     v15,
                     v9);
              if ( v9 != v8 )
              {
                v9 = v8;
                goto LABEL_6;
              }
              v16 = *(_QWORD *)(v13 + 16);
              v2 = v15 == 0;
              if ( v16 )
              {
                *(_QWORD *)(v16 + 24) = 0LL;
                *(_QWORD *)(v16 + 32) = *(_QWORD *)(v13 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v14 + 16) = v15;
              v21 = *(_QWORD *)(v13 + 16);
              v22 = *(_QWORD *)(v13 + 24);
              if ( v21 )
              {
                *(_QWORD *)(v21 + 24) = v22;
              }
              else
              {
                *(_QWORD *)(v11 + 32) = v22;
                *(_QWORD *)(*(_QWORD *)(v13 + 24) + 32LL) = *(_QWORD *)(v13 + 24);
              }
            }
            LODWORD(v8) = _InterlockedExchange((volatile __int32 *)(v13 + 40), 2);
            if ( (_DWORD)v8 != 2 )
            {
              if ( !(_DWORD)v8 )
              {
                *(_QWORD *)(v13 + 16) = v6;
                v6 = v13;
              }
              if ( !a2 )
                break;
            }
          }
          v13 = v14;
        }
        if ( v6 )
        {
          do
          {
            v17 = *(_QWORD *)(v6 + 16);
            LODWORD(v8) = ZwAlertThreadByThreadId(*(HANDLE *)(v6 + 8));
            v6 = v17;
          }
          while ( v17 );
        }
        if ( !v2 )
        {
          v8 = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v3];
          do
          {
            v18 = 0LL;
            v19 = v8 & 1;
            if ( (v8 & 1) == 0 )
              v18 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
            v20 = v8;
            v8 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                   v18,
                   v8);
          }
          while ( v20 != v8 );
          if ( v19 )
            LODWORD(v8) = RtlpWaitOnAddressWakeEntireList(v8);
        }
        return v8;
      }
    }
  }
  return v8;
}
