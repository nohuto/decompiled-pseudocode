/*
 * XREFs of MmMarkHiberPhase @ 0x140A4EEAC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     MiGatherHiberRange @ 0x140A4E460 (MiGatherHiberRange.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140A4FA24 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140A4FD14 (MiMarkKernelPageTablePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140A4FDB0 (MiMarkHiberNotCachedPages.c)
 */

__int64 MmMarkHiberPhase()
{
  struct _LIST_ENTRY *Flink; // r8
  __int64 v1; // rbx
  __int64 v2; // rdi
  void *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  void *v8; // r8
  _QWORD *v9; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  MiMarkKernelPageTablePages();
  v11[1] = 0LL;
  v11[0] = MiGatherHiberRange;
  MiGatherHiberRange((__int64)v11, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiMarkNonPagedHiberPhasePages(0xFFFFDE0000000000uLL, (MxPfnAllocation << 12) + MmPfnDatabase - 1, 512LL);
  PoSetHiberRange(0LL, 0x14000u, qword_140C532D8, 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0xB80uLL, 0x62706D4Du);
  Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
  if ( Flink )
    PoSetHiberRange(0LL, 0x10000u, Flink, 0x1000uLL, 0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140C4F418,
      8 * (((unsigned __int64)qword_140C4F410 >> 6) + ((qword_140C4F410 & 0x3F) != 0)),
      0x62706D4Du);
    PoSetHiberRange(0LL, 0x10000u, Base, (unsigned int)(dword_140C4F440 << 12), 0x62706D4Du);
  }
  MiMarkNonPagedHiberPhasePages(qword_140C51AD0, qword_140C51AD0 + qword_140C51AD8 - 1, 0LL);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v1 = 0LL;
  v2 = 50LL;
  do
  {
    v3 = *(void **)((char *)MmUnloadedDrivers + v1 + 8);
    if ( v3 )
      PoSetHiberRange(0LL, 0x10000u, v3, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v1), 0x64736D4Du);
    v1 += 40LL;
    --v2;
  }
  while ( v2 );
  v4 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = v5;
    v9 = v5;
    if ( v7 )
    {
      v6 = (_QWORD *)*v7;
      v5 = (_QWORD *)v5[1];
      if ( *v7 )
      {
        do
        {
          v5 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    PoSetHiberRange(0LL, 0x10000u, v8, 0x480uLL, 0x6F496D4Du);
  }
  return MiMarkHiberNotCachedPages();
}
