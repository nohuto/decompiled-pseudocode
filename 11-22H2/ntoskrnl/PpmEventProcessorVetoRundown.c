/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x14059B4C0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1408650B0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059BF30 (PpmEventTracePreVetoAccounting.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ecx
  __int16 v4; // ax
  __int16 v5; // ax
  KIRQL v6; // al
  unsigned int v7; // edx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int i; // [rsp+40h] [rbp-29h] BYREF
  __int16 v18; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  int *p_i; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  _QWORD *v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]
  char *v30; // [rsp+90h] [rbp+27h]
  int v31; // [rsp+98h] [rbp+2Fh]
  int v32; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 33600);
  memset(v19, 0, 7);
  if ( v1 )
  {
    v3 = 1;
    for ( i = 1; v3 < *(_DWORD *)(v1 + 40); i = v3 )
    {
      v4 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      LOWORD(v19[0]) = v4;
      BYTE2(v19[0]) = *(_BYTE *)(a1 + 209);
      *(_DWORD *)((char *)v19 + 3) = v3;
      UserData.Ptr = (ULONGLONG)v19;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v3 = i + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v23 = 0;
      v18 = v5;
      UserData.Ptr = (ULONGLONG)&v18;
      v21 = a1 + 209;
      UserData.Size = 2;
      v22 = 1;
      v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v7 = 0;
      v8 = v6;
      i = 0;
      if ( *(_DWORD *)(v1 + 40) )
      {
        v9 = 0LL;
        do
        {
          v26 = 0;
          p_i = &i;
          v25 = 4;
          v10 = (_QWORD **)(344 * v9 + v1 + 1416);
          v11 = *v10;
          if ( *v10 != v10 )
          {
            do
            {
              v29 = 0;
              v32 = 0;
              v27 = v11 + 2;
              v28 = 4;
              v30 = (char *)v11 + 20;
              v31 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v11 = (_QWORD *)*v11;
            }
            while ( v11 != v10 );
            v7 = i;
          }
          i = ++v7;
          v9 = v7;
        }
        while ( v7 < *(_DWORD *)(v1 + 40) );
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v8 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v8);
    }
  }
}
