/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800AF2E0
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A5000 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800AF2D0 (LdrCallEnclave.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x180021F1C (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x1800A20C0 (ZwCallEnclave.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A5070 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8720 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(LPVOID (__cdecl *Routine)(LPVOID), ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  unsigned int v8; // ebx

  if ( (Flags & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v6 = LdrpObtainLockedEnclave((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( !v6 )
  {
LABEL_8:
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
    return v8;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
  LdrpDereferenceEnclave(v7);
  if ( *((_DWORD *)v7 + 14) == 16 )
    return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  else
    return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
}
