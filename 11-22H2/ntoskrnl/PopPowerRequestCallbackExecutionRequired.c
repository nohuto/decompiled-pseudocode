/*
 * XREFs of PopPowerRequestCallbackExecutionRequired @ 0x1407A6BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackExecutionRequired(__int64 a1, int a2, char a3)
{
  char *v4; // rsi
  int v5; // ebx
  char v6; // al
  int v7; // eax

  if ( a2 == 3 )
  {
    v6 = PopPowerRequestPdcNotifiedExecutionRequired;
    v4 = &PopPowerRequestPdcNotifiedExecutionRequired;
    v5 = 2;
  }
  else
  {
    v4 = &PopPowerRequestPdcNotifiedSystemRequired;
    v5 = 1;
    if ( !PopPowerRequestConvertSystemToExecution )
      goto LABEL_7;
    v6 = PopPowerRequestPdcNotifiedSystemRequired;
  }
  if ( qword_140C6B0A0 && v6 != a3 )
  {
    LOBYTE(a1) = a3;
    ((void (__fastcall *)(__int64))qword_140C6B0A0)(a1);
    *v4 = a3;
  }
LABEL_7:
  PopAcquirePolicyLock(a1);
  if ( a3 )
    v7 = v5 | dword_140C3CD64;
  else
    v7 = ~v5 & dword_140C3CD64;
  dword_140C3CD64 = v7;
  if ( !v7 )
    dword_140C3CD80 = dword_140C3CD48;
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock();
}
