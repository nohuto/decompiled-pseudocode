/*
 * XREFs of sub_14039E71C @ 0x14039E71C
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_14039E71C(unsigned __int64 a1)
{
  char v2; // bl
  ULONG MaximumProcessorCount; // r9d
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v9; // eax
  volatile signed __int64 *v10; // rcx

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v4) = 0;
  if ( !MaximumProcessorCount )
    return 1;
  v5 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v6 = (a1 >> 4) & 0x1FF;
  while ( 1 )
  {
    _BitScanReverse(&v7, v5);
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C10DB0 + 8LL * (unsigned int)v4)
                                                             + 8LL * (v7 - 2))
                                                 + 8LL * (v5 ^ (1 << v7))
                                                 + 8)
                                     + 8LL * v6),
           0LL) )
    {
      break;
    }
    LODWORD(v4) = v4 + 1;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      return 1;
  }
  while ( (_DWORD)v4 )
  {
    _BitScanReverse(&v9, v5);
    v4 = (unsigned int)(v4 - 1);
    v10 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C10DB0 + 8 * v4) + 8LL * (v9 - 2))
                                                + 8LL * (v5 ^ (1 << v9))
                                                + 8)
                                    + 8LL * v6);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
  }
  return v2;
}
