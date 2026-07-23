/*
 * XREFs of MiCreatePfnDatabase @ 0x140B487C8
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     MiGetPartitionLargePageListCount @ 0x140376234 (MiGetPartitionLargePageListCount.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A0C40 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     MiCreateSparsePfnDatabase @ 0x140B46390 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140B48A18 (MiInitializePartitions.c)
 *     MiInitializeColors @ 0x140B6FF04 (MiInitializeColors.c)
 *     MiInitializeNumaGraph @ 0x140B758B4 (MiInitializeNumaGraph.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r10
  unsigned __int64 *v12; // r11
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 *v16; // rcx

  MiInitializeColors();
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = dword_140C65BFC * (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v4 = qword_140C65CA0 + 1;
  dword_140C65BFC = v3;
  if ( qword_140C68260 == qword_140C65CA0 + 1 )
    v4 = qword_140C65CA0 + 2049;
  v5 = 48 * v4;
  v6 = 264LL * v3;
  qword_140C6BEC0 = v5;
  qword_140C6BEC8 = v6 + v5;
  v7 = v6 + 15;
  v8 = (unsigned __int64 *)&unk_140C6CF98;
  v9 = (qword_140C6BEC8 + v7) & 0xFFFFFFFFFFFFFFF0uLL;
  do
  {
    *v8 = v9;
    v9 += 16LL * v3;
    ++v8;
  }
  while ( (__int64)v8 < (__int64)qword_140C6CFA8 );
  v10 = v9;
  qword_140C6F3A8 = 25408LL * (unsigned __int16)KeNumberNodes + v9;
  qword_140C6F450 = qword_140C6F3A8 + 24LL * (unsigned int)MiGetPartitionLargePageListCount();
  qword_140C65BA0 = (qword_140C6F450 + v11 * (16LL * (unsigned int)dword_140C65C80[0] + 8) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = v2 * v2;
  v14 = 24576 * v11;
  qword_140C65B98 = 376 * v11 + qword_140C65BA0;
  qword_140C684A8 = (qword_140C65B98 + 4 * v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (qword_140C684A8 + 360 * v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  MxPfnAllocation = (v15 + 24576 * v11 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  v16 = &qword_140C6BEC0;
  do
    *v16++ -= 0x220000000000LL;
  while ( (__int64)v16 < (__int64)qword_140C6BED0 );
  do
    *v12++ -= 0x220000000000LL;
  while ( (__int64)v12 < (__int64)qword_140C6CFA8 );
  qword_140C6F3A8 -= 0x220000000000LL;
  qword_140C6F450 -= 0x220000000000LL;
  qword_140C65BA0 -= 0x220000000000LL;
  qword_140C65B98 -= 0x220000000000LL;
  qword_140C684A8 -= 0x220000000000LL;
  qword_140C6B510 = v10 - 0x220000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((unsigned __int64)MiSystemPartition, 0);
  MiPopulateFreeKernelShadowStackCacheEntries(
    (_SLIST_HEADER *)MiSystemPartition,
    (_SLIST_ENTRY *)(v15 + MmPfnDatabase),
    v14);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
