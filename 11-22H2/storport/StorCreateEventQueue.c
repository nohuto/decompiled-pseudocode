/*
 * XREFs of StorCreateEventQueue @ 0x1C0018E28
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall StorCreateEventQueue(_QWORD *a1)
{
  ULONG MaximumProcessorCount; // esi
  __int64 v3; // rbp
  __int64 Pool; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = MaximumProcessorCount;
  Pool = RaidAllocatePool(72LL, (MaximumProcessorCount + 1LL) << 6, 1364222290LL, 0LL);
  v5 = (_DWORD *)Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( MaximumProcessorCount )
  {
    v6 = Pool + 72;
    do
    {
      *(_QWORD *)v6 = v6 - 8;
      *(_QWORD *)(v6 - 8) = v6 - 8;
      KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 32));
      *(_DWORD *)(v6 + 40) = -1;
      v7 = (_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 16) = v6 + 8;
      v6 += 64LL;
      *v7 = v7;
      --v3;
    }
    while ( v3 );
  }
  *v5 = 0;
  v5[2] = MaximumProcessorCount;
  result = 0LL;
  v5[1] = 4;
  *a1 = v5;
  return result;
}
