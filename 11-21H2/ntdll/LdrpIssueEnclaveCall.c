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

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 locked; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx

  locked = LdrpObtainLockedEnclave(a1, 0LL);
  v6 = locked;
  v7 = 0;
  if ( locked )
  {
    RtlLeaveCriticalSection(locked + 16);
    LdrpDereferenceEnclave(v6);
    if ( *(_DWORD *)(v6 + 56) == 16 )
      return (unsigned int)RtlCallEnclave();
    else
      return (unsigned int)ZwCallEnclave();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
