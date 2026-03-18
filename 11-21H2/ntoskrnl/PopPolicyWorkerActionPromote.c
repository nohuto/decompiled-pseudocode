/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140808500
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v4; // bl
  int v5; // ecx

  PopAcquirePolicyLock(a1);
  qword_140C22978 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v4 = PopAction;
  if ( !byte_140C227C1 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v5 = 2;
    goto LABEL_12;
  }
  if ( byte_140C227C1 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, qword_140C227C4, HIDWORD(qword_140C227C4), dword_140C227CC) >= 0 )
  {
    LOBYTE(PopAction) = ~v4 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140C227C1 != 2 )
  {
    v5 = 1;
LABEL_12:
    PopGetPolicyWorker(v5);
  }
LABEL_2:
  qword_140C22978 = 0LL;
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
