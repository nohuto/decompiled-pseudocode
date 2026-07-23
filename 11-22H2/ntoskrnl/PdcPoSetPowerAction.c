/*
 * XREFs of PdcPoSetPowerAction @ 0x140997C20
 * Callers:
 *     <none>
 * Callees:
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoSetPowerAction(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  PopAcquirePolicyLock((_DWORD)a1);
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock(v10, v9, v11, v12, v14, v15);
}
