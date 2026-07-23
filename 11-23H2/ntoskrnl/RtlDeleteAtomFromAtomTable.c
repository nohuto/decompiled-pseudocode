/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x14069EA50
 * Callers:
 *     NtDeleteAtom @ 0x1407E9690 (NtDeleteAtom.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x14020BCF8 (RtlpDereferenceAtom.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140297944 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1407182D0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073FA38 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = RtlpLookupLowBox((__int64)AtomTableHandle, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, (__int64)AtomTableHandle);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v4;
}
