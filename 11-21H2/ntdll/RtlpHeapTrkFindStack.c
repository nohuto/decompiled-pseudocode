/*
 * XREFs of RtlpHeapTrkFindStack @ 0x18010AF20
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010B200 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800B10BE (RtlpHeapTrkHash.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *i; // rcx
  __int64 v6; // rbx

  v2 = RtlpHeapTrkHash(a1);
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_18017B6A8 + 8 * v3), 0LL) )
    return 0LL;
  for ( i = *(_QWORD **)(qword_18017B330 + 16LL * v2); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_18017B330 + 16LL * v2) )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18017B6A8 + 8 * v3));
      return 0LL;
    }
    if ( i[3] == a1 )
      break;
  }
  v6 = i[4];
  i[3] = 0LL;
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18017B6A8 + 8 * v3));
  return v6;
}
