/*
 * XREFs of PopPolicyWorkerAction @ 0x14098A330
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopSetPowerActionState @ 0x14058F9B4 (PopSetPowerActionState.c)
 *     PopThermalSxExit @ 0x140590264 (PopThermalSxExit.c)
 *     PopCompleteAction @ 0x140989960 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerAction(int a1)
{
  char v1; // si
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r15
  SYSTEM_POWER_STATE v8; // edi
  int v9; // ebx
  int v10; // r14d
  LONG v11; // edi
  __int64 *i; // rbx
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  LONG v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v19; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-2Ch]

  v1 = 0;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  qword_140C3CF38 = (__int64)KeGetCurrentThread();
  if ( byte_140C3CD81 == 1 )
  {
    v7 = (int)qword_140C3CD84;
    v8 = HIDWORD(qword_140C3CD84);
    v9 = dword_140C3CD8C;
    PopSetPowerActionState(2);
    v10 = dword_140C3CD94;
    v11 = PopIssueActionRequest(0, (POWER_ACTION)v7, v8, v9);
    v2 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140C3CD84) == 5 )
        v10 = 6;
      dword_140C3CD94 = v10;
      dword_140C3CD8C = dword_140C3CD8C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
      {
        v18 = 0;
        v21 = 0;
        v19 = &v16;
        v16 = v7;
        v17 = v11;
        v20 = 16;
        EtwTraceKernelEvent((int)&v19, 1, 0x80008000, 4643, 4200450);
      }
      dword_140C3CD90 = v11;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v11);
      PopGetPolicyWorker(1);
      v1 = 1;
    }
  }
  qword_140C3CF38 = 0LL;
  PopReleasePolicyLock(v4, v3, v5, v6, v14, v15);
  if ( v1 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v2 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
