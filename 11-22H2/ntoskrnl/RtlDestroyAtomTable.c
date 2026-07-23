/*
 * XREFs of RtlDestroyAtomTable @ 0x14069EB40
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14036E810 (RtlDereferenceAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExpFreeHandleTable @ 0x14068AC1C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x14068EB88 (ExpRemoveHandleTable.c)
 *     RtlpFreeAtom @ 0x14069EC78 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x140718140 (RtlpLockAtomTable.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // r12d
  _QWORD **i; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  _QWORD **v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 32); v2 < *((_DWORD *)AtomTableHandle + 7); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        v8 = (_QWORD **)(v5 + 2);
        *v5 = 0LL;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          RtlpFreeAtom(v9);
        }
        RtlpFreeAtom(v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
    KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
    KeLeaveCriticalRegion();
    v6 = (_QWORD *)*((_QWORD *)AtomTableHandle + 2);
    ExpRemoveHandleTable((__int64)v6);
    ExpFreeHandleTable(v6);
    *(_OWORD *)AtomTableHandle = 0LL;
    *((_OWORD *)AtomTableHandle + 1) = 0LL;
    *((_QWORD *)AtomTableHandle + 4) = 0LL;
    RtlpFreeAtom(AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
