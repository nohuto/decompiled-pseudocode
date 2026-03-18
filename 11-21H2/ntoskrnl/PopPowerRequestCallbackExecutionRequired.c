/*
 * XREFs of PopPowerRequestCallbackExecutionRequired @ 0x1407EECA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackExecutionRequired(__int64 a1, int a2, char a3)
{
  int v4; // ebx
  _BYTE *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( a2 == 3 )
  {
    v4 = 2;
    v5 = &PopPowerRequestPdcNotifiedExecutionRequired;
  }
  else
  {
    v5 = &PopPowerRequestPdcNotifiedSystemRequired;
    v4 = 1;
    if ( !PopPowerRequestConvertSystemToExecution )
      goto LABEL_6;
  }
  if ( qword_140C5ADE0 && *v5 != a3 )
  {
    LOBYTE(a1) = a3;
    qword_140C5ADE0(a1);
    *v5 = a3;
  }
LABEL_6:
  PopAcquirePolicyLock(a1);
  if ( a3 )
    v6 = v4 | dword_140C22704;
  else
    v6 = ~v4 & dword_140C22704;
  dword_140C22704 = v6;
  if ( !v6 )
    dword_140C22720 = dword_140C226E8;
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock(v8, v7);
}
