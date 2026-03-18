/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1407D0A90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x1402976B4 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1407180D0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073F848 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v6 = RtlpLookupLowBox(a1, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v8;
}
