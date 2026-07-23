/*
 * XREFs of PopQueryLastStateTransitionInfo @ 0x140AA62E4
 * Callers:
 *     PopStateTransitionTimeoutDispatch @ 0x14058F6E0 (PopStateTransitionTimeoutDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopQueryLastStateTransitionInfo(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int128 v4; // xmm1
  LARGE_INTEGER v5; // xmm0_8

  v1 = 0;
  if ( a1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E6C8);
    if ( dword_140C3E6C0 == -1 )
    {
      v1 = -1073741823;
    }
    else
    {
      v3 = 5LL * (unsigned int)dword_140C3E6C0;
      v4 = *(_OWORD *)&PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E6C0 + 2].LowPart;
      *(_OWORD *)a1 = *(_OWORD *)&PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E6C0].LowPart;
      v5 = PopStateTransitonBlameStack[v3 + 4];
      *(_OWORD *)(a1 + 16) = v4;
      *(LARGE_INTEGER *)(a1 + 32) = v5;
    }
    PopReleaseRwLock((__int64 *)&xmmword_140C3E6C8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
