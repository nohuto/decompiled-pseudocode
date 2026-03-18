/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x14098A3D0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14058F554 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bl
  int v5; // ecx

  PopAcquirePolicyLock(a1);
  qword_140C3CFE0 = (__int64)KeGetCurrentThread();
  if ( (_BYTE)PopAction )
  {
    v4 = PopAction;
    if ( !byte_140C3CE21 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v5 = 2;
      goto LABEL_10;
    }
    if ( byte_140C3CE21 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(1, qword_140C3CE24, HIDWORD(qword_140C3CE24), dword_140C3CE2C) >= 0 )
    {
      LOBYTE(PopAction) = ~v4 & PopAction;
      goto LABEL_11;
    }
    if ( byte_140C3CE21 != 2 )
    {
      v5 = 1;
LABEL_10:
      PopGetPolicyWorker(v5);
    }
  }
LABEL_11:
  qword_140C3CFE0 = 0LL;
  PopReleasePolicyLock(v2, v1, v3);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
