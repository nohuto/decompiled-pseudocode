/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800F3C10
 * Callers:
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002EABC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002F448 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18007A0E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180080FDC (RtlpSetRequestedFrontEndHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FDCE0 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180102C1C (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

_RTL_CRITICAL_SECTION *__fastcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  _PEB_LDR_DATA *Ldr; // r8
  _RTL_CRITICAL_SECTION *result; // rax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = &LdrpLoaderLock, a1 == &LdrpLoaderLock)
    && (result = (_RTL_CRITICAL_SECTION *)NtCurrentTeb(), Ldr->ShutdownThreadId != (void *)result[1].SpinCount) )
  {
    if ( !UseWOW64 )
      goto LABEL_20;
    v4 = NtCurrentTeb();
    WowTebOffset = v4->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
    }
    else
    {
      v4 = 0LL;
    }
    result = (_RTL_CRITICAL_SECTION *)LODWORD(v4->NtTib.Self);
    if ( !result->RecursionCount || !*(_BYTE *)((unsigned int)result->RecursionCount + 0x28LL) )
    {
LABEL_20:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          0x65u,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1->OwningThread);
        __debugbreak();
      }
      v6 = RtlpUnhandledExceptionFilter;
      v7 = `RtlpGetCookieValue'::`2'::CookieValue;
      if ( !`RtlpGetCookieValue'::`2'::CookieValue )
      {
        v8 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
        if ( v8 < 0 )
          RtlRaiseStatus(v8);
        v7 = ProcessInformation;
        `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
      }
      v10 = __ROR8__(v6, 64 - (v7 & 0x3F)) ^ v7;
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
