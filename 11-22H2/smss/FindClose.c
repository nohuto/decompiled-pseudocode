/*
 * XREFs of FindClose @ 0x14001435C
 * Callers:
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 */

__int64 __fastcall FindClose(struct _RTL_CRITICAL_SECTION *BaseAddress)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  void *v5; // rsi
  NTSTATUS v6; // eax

  if ( BaseAddress == (struct _RTL_CRITICAL_SECTION *)1 )
    return 1LL;
  if ( BaseAddress == (struct _RTL_CRITICAL_SECTION *)-1LL )
  {
    RtlSetLastWin32Error(6u);
    return 0LL;
  }
  else
  {
    v3 = BaseAddress + 1;
    RtlEnterCriticalSection(BaseAddress + 1);
    DebugInfo = BaseAddress->DebugInfo;
    v5 = *(void **)&BaseAddress->LockCount;
    BaseAddress->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
    *(_QWORD *)&BaseAddress->LockCount = 0LL;
    RtlLeaveCriticalSection(v3);
    v6 = NtClose(DebugInfo);
    if ( v6 < 0 )
    {
      BaseSetLastNTError((unsigned int)v6);
      return 0LL;
    }
    else
    {
      if ( v5 )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      return 1LL;
    }
  }
}
