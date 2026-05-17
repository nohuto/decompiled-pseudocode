/*
 * XREFs of EtwpInsertRegistration @ 0x1800162A8
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     EtwpRegistrationCompare @ 0x1800750E8 (EtwpRegistrationCompare.c)
 */

__int64 __fastcall EtwpInsertRegistration(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  char v4; // bl
  int v5; // esi
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1 + 32;
  v9 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v3 = EtwpRegistrationTable;
  v4 = 0;
  if ( (qword_18017AF28 & 1) != 0 )
  {
    if ( EtwpRegistrationTable )
      v3 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
    else
      v3 = 0LL;
  }
  v5 = qword_18017AF28 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v8, v3) < 0 )
      {
        v6 = *(_QWORD *)v3;
        if ( v5 )
        {
          if ( !v6 )
            break;
          v6 ^= v3;
        }
        if ( !v6 )
          break;
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_17;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_17:
          v4 = 1;
          break;
        }
      }
      v3 = v6;
    }
  }
  LOBYTE(v2) = v4;
  RtlRbInsertNodeEx(&EtwpRegistrationTable, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
