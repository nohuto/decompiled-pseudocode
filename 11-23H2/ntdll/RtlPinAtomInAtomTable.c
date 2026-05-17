/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800F6E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180003BFC (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180003C68 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v5 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v5 = 0;
  }
  else
  {
    v6 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v6 && *(_WORD *)(v6 + 10) == a2 && v6 != -12 )
    {
      v5 = 0;
      *(_WORD *)(v6 + 14) |= 1u;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v5;
}
