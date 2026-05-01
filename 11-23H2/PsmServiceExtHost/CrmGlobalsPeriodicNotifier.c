/*
 * XREFs of CrmGlobalsPeriodicNotifier @ 0x18004B620
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CempLockAcquireExclusive @ 0x18001D7D0 (CempLockAcquireExclusive.c)
 *     CrmPeriodicNotifierSleepOnRegistry @ 0x18004B750 (CrmPeriodicNotifierSleepOnRegistry.c)
 */

__int64 CrmGlobalsPeriodicNotifier()
{
  int v0; // edi
  int v1; // ebx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  v0 = 0;
  v1 = 0;
  do
  {
    if ( dword_1800DC240 )
      CrmPeriodicNotifierSleepOnRegistry();
    else
      Sleep(0x7530u);
    CempLockAcquireExclusive((__int64)&unk_1800DC1D0);
    while ( 1 )
    {
      v2 = xmmword_1800DC1E0;
      if ( (BYTE8(xmmword_1800DC1E0) & 1) != 0 )
      {
        if ( !(_QWORD)xmmword_1800DC1E0 )
          break;
        v3 = xmmword_1800DC1E0 ^ (unsigned __int64)&xmmword_1800DC1E0;
      }
      else
      {
        v3 = xmmword_1800DC1E0;
      }
      if ( !v3 )
        break;
      if ( (BYTE8(xmmword_1800DC1E0) & 1) != 0 )
      {
        if ( *((_QWORD *)&xmmword_1800DC1E0 + 1) == 1LL )
          v4 = 0LL;
        else
          v4 = *((_QWORD *)&xmmword_1800DC1E0 + 1) ^ ((unsigned __int64)&xmmword_1800DC1E0 + 1);
      }
      else
      {
        v4 = *((_QWORD *)&xmmword_1800DC1E0 + 1);
      }
      CrmRegistrationReadyQueueRemove(v4 - 24, 1, 0, 1);
      if ( ++v0 )
      {
        v2 = xmmword_1800DC1E0;
        break;
      }
    }
    if ( (BYTE8(xmmword_1800DC1E0) & 1) == 0 )
    {
      v5 = v2;
LABEL_22:
      if ( v5 )
        goto LABEL_24;
      goto LABEL_23;
    }
    if ( v2 )
    {
      v5 = v2 ^ (unsigned __int64)&xmmword_1800DC1E0;
      goto LABEL_22;
    }
LABEL_23:
    dword_1800DC1F8 = 0;
    v1 = 1;
LABEL_24:
    dword_1800DC1D8 = 0;
    result = RtlReleaseSRWLockExclusive(&unk_1800DC1D0);
  }
  while ( !v1 );
  return result;
}
