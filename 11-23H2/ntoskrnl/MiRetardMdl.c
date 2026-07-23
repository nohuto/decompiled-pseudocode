/*
 * XREFs of MiRetardMdl @ 0x14061CF10
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14033EFA0 (MiUnlockFlushMdl.c)
 *     MiZeroPageWrite @ 0x1403C19D4 (MiZeroPageWrite.c)
 *     MmUnmapReservedMapping @ 0x14061EE60 (MmUnmapReservedMapping.c)
 *     MiPfCompleteCoalescedIo @ 0x1406320F0 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x1406363B0 (MiFlushComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRetardMdl(__int64 a1)
{
  __int64 *v1; // r10
  __int64 *v3; // r9
  int v4; // edx
  __int64 v5; // r11
  __int64 *i; // rbx
  __int16 v7; // cx
  unsigned int v8; // edx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 48);
  v3 = (__int64 *)(a1
                 + 48
                 + 8
                 * ((*(unsigned int *)(a1 + 40)
                   + 4095LL
                   + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12));
  v4 = 0;
  do
  {
    v5 = *v3;
    for ( i = v3 + 1; v3 != v1; --v3 )
      *v3 = *(v3 - 1);
    ++v1;
    ++v4;
    *v3 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    v3 = i;
  }
  while ( v5 >= 0 );
  v7 = *(_WORD *)(a1 + 10);
  v8 = v4 << 12;
  *(_DWORD *)(a1 + 40) += v8;
  *(_QWORD *)(a1 + 32) -= v8;
  if ( (v7 & 1) != 0 )
    *(_QWORD *)(a1 + 24) -= v8;
  result = v8;
  *(_WORD *)(a1 + 10) = v7 & 0xFDFF;
  return result;
}
