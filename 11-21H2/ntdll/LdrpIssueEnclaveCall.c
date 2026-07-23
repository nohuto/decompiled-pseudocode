/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800D8EB0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A8100 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800D8260 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x1800A5280 (ZwCallEnclave.c)
 *     RtlCallEnclave @ 0x1800A8170 (RtlCallEnclave.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 locked; // rax
  _DWORD *v7; // rdi
  unsigned int v8; // ebx

  locked = LdrpObtainLockedEnclave(Routine, 0LL);
  v7 = (_DWORD *)locked;
  v8 = 0;
  if ( locked )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(locked + 16));
    LdrpDereferenceEnclave(v7);
    if ( v7[14] == 16 )
      return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
    else
      return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  }
  else
  {
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
  }
  return v8;
}
