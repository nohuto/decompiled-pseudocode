/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x18008840C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x180045BC0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, char a3)
{
  int v5; // esi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v6 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v6 )
    v6 ^= a1 + 72;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v7 )
    {
      if ( a2 <= v7 )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( !v5 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  *(_QWORD *)(v6 + 32) |= 1uLL;
}
