/*
 * XREFs of DestroyBaseWindow @ 0x1C014F060
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyObject @ 0x1C0064C30 (HMDestroyObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CleanupInputDelegation @ 0x1C009AF40 (CleanupInputDelegation.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C014EEAC (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D89F0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01E8150 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  char **v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdx
  char *v10; // rdx

  a1[7] |= 0x80u;
  if ( a1[18] )
    CleanupInputDelegation(a1, (__int64)a2, a3, a4);
  if ( qword_1C0296D70 )
    qword_1C0296D70(a1);
  if ( *((_QWORD *)a1 + 10) )
  {
    DeleteBaseWindowProperties((struct tagBWND *)a1, (__int64)a2, a3, a4);
    a2 = (char *)*((_QWORD *)a1 + 10);
    if ( a2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a2);
    *((_QWORD *)a1 + 10) = 0LL;
  }
  v5 = (char **)(a1 + 24);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (char *)v5 )
      break;
    if ( *((char ***)v6 + 1) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    v8 = SGDGetUserSessionState(a1, a2, a3, a4);
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v8 + 3424), *((_QWORD *)v6 + 2), 7LL, v6);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  }
  v9 = (char *)*((_QWORD *)a1 + 15);
  if ( v9 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  v10 = (char *)*((_QWORD *)a1 + 17);
  if ( v10 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  return HMDestroyObject(a1);
}
