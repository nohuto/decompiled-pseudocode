/*
 * XREFs of RtlpHeapTrkFindStack @ 0x18010B0F4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010B3D0 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800AEB0E (RtlpHeapTrkHash.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *i; // rax
  __int64 v7; // rbx

  v2 = RtlpHeapTrkHash(a1);
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180185950 + 8 * v3), 0LL) )
    return 0LL;
  v4 = (_QWORD *)(16LL * v2 + qword_1801855D0);
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)*i )
  {
    if ( i == v4 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185950 + 8 * v3));
      return 0LL;
    }
    if ( i[3] == a1 )
      break;
  }
  i[3] = 0LL;
  v7 = i[4];
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185950 + 8 * v3));
  return v7;
}
