/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1406AB320
 * Callers:
 *     NtDeleteAtom @ 0x1406AB2D0 (NtDeleteAtom.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x140232FC4 (RtlpDereferenceAtom.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1402F349C (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1407A0EA0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407A1A30 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v7 = RtlpLookupLowBox(a1, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, a1);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 8);
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v4;
}
