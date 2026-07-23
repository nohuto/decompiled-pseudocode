/*
 * XREFs of PfSnBeginScenario @ 0x1407505B0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1407606E8 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x14097FA40 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x1402F6118 (PfSnStartTraceTimer.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D26C (PfSnGetPrefetchInstructions.c)
 *     PfSnBeginTrace @ 0x14074DBA8 (PfSnBeginTrace.c)
 *     PfSnLogIdentifier @ 0x14074DE10 (PfSnLogIdentifier.c)
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 *     PfSnLogScenarioDecision @ 0x140752BE4 (PfSnLogScenarioDecision.c)
 *     PfSnPrefetchScenario @ 0x1407DB400 (PfSnPrefetchScenario.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(void *a1, unsigned __int8 *a2, int a3, unsigned int a4, const void **a5)
{
  __int64 CurrentThread; // r13
  __int64 v9; // rdi
  int v10; // r9d
  int v11; // r12d
  unsigned __int8 v12; // bl
  PVOID v13; // r14
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rsi
  int v16; // eax
  unsigned int started; // r15d
  char v19; // [rsp+40h] [rbp-20h]
  int v20; // [rsp+44h] [rbp-1Ch] BYREF
  int v21; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v22 = -1;
  v20 = 0;
  v21 = 0;
  v19 = *(_BYTE *)(CurrentThread + 562);
  v9 = -1LL;
  P = 0LL;
  v24 = 0LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    started = 1075380276;
    goto LABEL_24;
  }
  v11 = v10 + 1;
  if ( v10 + 1 + _InterlockedExchangeAdd(&dword_140C6A670, v10 + 1) < (unsigned int)dword_140C64E18 )
  {
    v12 = PfSnCheckActionsNeeded(a2, a3, CurrentThread, &v20, &v21);
    if ( (a4 & 2) != 0 )
    {
      v12 &= ~2u;
      v21 = 9;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions((__int64)a2, a3, &P) >= 0 )
      {
        v13 = P;
        v9 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v9 < *((_QWORD *)P + 24) && v20 != 22 )
        {
          v12 &= ~1u;
          v20 = 11;
        }
        v22 = *((_DWORD *)P + 50);
LABEL_9:
        if ( (a4 & 4) != 0 )
        {
          v12 &= ~1u;
          v20 = 8;
        }
        if ( (v12 & (unsigned __int8)v11) != 0 )
        {
          v14 = PfSnBeginTrace(
                  a2,
                  a3,
                  a1,
                  (struct _KTHREAD *)(CurrentThread & -(__int64)(((unsigned __int8)v11 & (unsigned __int8)a4) != 0)),
                  v11 & (a4 >> 3),
                  (__int64 *)&v24);
          if ( v14 < 0 )
          {
            switch ( v14 )
            {
              case -1073741618:
                v20 = 16;
                break;
              case -1073741670:
                v20 = 17;
                break;
              case -1072037882:
                v20 = 18;
                break;
              case -1073741791:
                v20 = 19;
                break;
              default:
                v20 = (v14 != -1073741661) + 20;
                break;
            }
          }
          v15 = v24;
          if ( v24 && a5 )
            PfSnLogIdentifier((__int64)v24, a5);
        }
        else
        {
          v15 = v24;
        }
        if ( (v12 & 2) != 0 )
        {
          v16 = PfSnPrefetchScenario(v13);
          P = 0LL;
          v13 = 0LL;
          if ( v16 >= 0 )
            LOBYTE(v11) = 0;
        }
        started = 0;
        if ( !(_BYTE)v11 )
          goto LABEL_20;
        goto LABEL_27;
      }
      v12 &= ~2u;
      v21 = 10;
    }
    v13 = P;
    goto LABEL_9;
  }
  v20 = v10 + 1;
  started = -1073741631;
  v21 = v10 + 1;
LABEL_27:
  _InterlockedDecrement(&dword_140C6A670);
  v13 = P;
  v15 = v24;
LABEL_20:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v15 )
  {
    started = PfSnStartTraceTimer(v15);
    ExReleaseRundownProtection_0(v15 + 45);
  }
LABEL_24:
  PfSnLogScenarioDecision((ULONG_PTR)a1, v20, v21, v22, v9);
  *(_BYTE *)(CurrentThread + 562) = v19;
  return started;
}
