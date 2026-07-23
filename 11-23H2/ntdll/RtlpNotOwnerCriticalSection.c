/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800F4D50
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpFreeUserBlock @ 0x180047A68 (RtlpFreeUserBlock.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048C64 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18004997C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpFlushHeap @ 0x1800600BC (RtlpFlushHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180073660 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007D2E4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x180101168 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180103CC0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
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
