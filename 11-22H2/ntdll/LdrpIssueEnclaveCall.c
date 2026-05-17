/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800AD210
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A2F40 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800AD200 (LdrCallEnclave.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x1800A0000 (ZwCallEnclave.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A2FB0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(__int64 (__fastcall *a1)(_QWORD), char a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  unsigned int v7; // ebx

  if ( (a2 & 8) != 0 )
  {
    v7 = 0;
    goto LABEL_8;
  }
  v5 = LdrpObtainLockedEnclave((unsigned __int64)a1, 0);
  v6 = v5;
  v7 = 0;
  if ( !v5 )
  {
LABEL_8:
    *a3 = a1(*a3);
    return v7;
  }
  RtlLeaveCriticalSection((__int64)(v5 + 2));
  LdrpDereferenceEnclave(v6);
  if ( *((_DWORD *)v6 + 14) == 16 )
    return (unsigned int)RtlCallEnclave();
  else
    return (unsigned int)ZwCallEnclave();
}
