/*
 * XREFs of EtwpInsertRegistration @ 0x18003257C
 * Callers:
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     EtwpRegistrationCompare @ 0x18006DE80 (EtwpRegistrationCompare.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax
  _RTL_BALANCED_NODE **v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+28h] [rbp-10h]

  v6 = &Node[1].Children[1];
  v7 = WORD2(Node[3].Right);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  v3 = 0;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Root )
      Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
    else
      Root = 0LL;
  }
  v4 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v6, Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_17;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_17:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&EtwpRegistrationTable, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
