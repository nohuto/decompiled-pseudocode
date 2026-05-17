/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x180034A30
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 * Callees:
 *     <none>
 */

bool RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rcx
  __int64 WowTebOffset; // rax
  __int64 v3; // rcx

  if ( byte_180187488 )
    return 1;
  if ( UseWOW64 )
  {
    v1 = NtCurrentTeb();
    WowTebOffset = v1->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
    }
    else
    {
      v1 = 0LL;
    }
    v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
    if ( v3 )
      return *(_BYTE *)(v3 + 40) != 0;
  }
  return 0;
}
