/*
 * XREFs of PopPolicyWorkerAction @ 0x14098A130
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361D90 (PopPolicyWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x14032CB64 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopSetPowerActionState @ 0x14058F4C4 (PopSetPowerActionState.c)
 *     PopThermalSxExit @ 0x14058FD74 (PopThermalSxExit.c)
 *     PopCompleteAction @ 0x140989760 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
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
  __int64 v6; // r15
  unsigned int v7; // edi
  int v8; // ebx
  int v9; // r14d
  LONG v10; // edi
  __int64 *i; // rbx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  LONG v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]

  v1 = 0;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  qword_140C3D278 = (__int64)KeGetCurrentThread();
  if ( byte_140C3D0C1 == 1 )
  {
    v6 = (int)qword_140C3D0C4;
    v7 = HIDWORD(qword_140C3D0C4);
    v8 = dword_140C3D0CC;
    PopSetPowerActionState(2);
    v9 = dword_140C3D0D4;
    v10 = PopIssueActionRequest(0, v6, v7, v8);
    v2 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140C3D0C4) == 5 )
        v9 = 6;
      dword_140C3D0D4 = v9;
      dword_140C3D0CC = dword_140C3D0CC & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
      {
        v15 = 0;
        v18 = 0;
        v16 = &v13;
        v13 = v6;
        v14 = v10;
        v17 = 16;
        EtwTraceKernelEvent((int)&v16, 1, 0x80008000, 4643, 4200450);
      }
      dword_140C3D0D0 = v10;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v10);
      PopGetPolicyWorker(1);
      v1 = 1;
    }
  }
  qword_140C3D278 = 0LL;
  PopReleasePolicyLock(v4, v3, v5);
  if ( v1 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v2 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
