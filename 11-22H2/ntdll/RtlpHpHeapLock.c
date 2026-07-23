/*
 * XREFs of RtlpHpHeapLock @ 0x18002DA0C
 * Callers:
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, _BYTE *a2)
{
  int v4; // ecx
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 220);
    if ( v4 && (result = NtCurrentTeb(), v4 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 968));
      *a2 = -1;
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 704));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 384));
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 576));
            if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 220) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
    }
  }
  return result;
}
