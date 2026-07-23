/*
 * XREFs of MiLogMdlRangeEvent @ 0x1406239F0
 * Callers:
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiGetLeafPfnBuddy @ 0x14038C1BC (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPidSafe @ 0x140626C34 (MiGetPfnPidSafe.c)
 */

char __fastcall MiLogMdlRangeEvent(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 PfnPidSafe; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+54h] [rbp-34h]

  v7 = a1;
  v8 = 48LL * *a1 - 0x220000000000LL;
  LOBYTE(v9) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
  if ( (_BYTE)v9 == 1 )
  {
    v10 = (unsigned __int8)MiLockPageInline(48LL * *a1 - 0x220000000000LL);
    if ( *(_QWORD *)MiGetLeafPfnBuddy((_QWORD *)v8) == 399680LL )
      PfnPidSafe = 0LL;
    else
      PfnPidSafe = (unsigned int)MiGetPfnPidSafe(v8, 3LL);
    LOBYTE(v9) = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      LOBYTE(v9) = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v9 <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && (unsigned __int8)v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v14 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v14 )
          LOBYTE(v9) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
    v15 = 9LL;
  }
  else
  {
    PfnPidSafe = 0LL;
    v15 = 10LL;
  }
  if ( a3 )
  {
    v16 = 16 * PfnPidSafe;
    do
    {
      v17 = v7;
      v20[1] = *v7;
      v20[0] = v15 | v16;
      do
      {
        v18 = v7++;
        --a3;
      }
      while ( a3 && *v7 == a4 + *v18 );
      v23 = 0;
      v22 = 24;
      v20[2] = v7 - v17;
      v21 = v20;
      LOBYTE(v9) = EtwTraceKernelEvent((int)&v21, 1, 0x20000001u, a2, 289413892);
    }
    while ( a3 );
  }
  return v9;
}
