/*
 * XREFs of MiFreeExcessSegments @ 0x140624A8C
 * Callers:
 *     MiCountSystemPool @ 0x140212434 (MiCountSystemPool.c)
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x140285D10 (MiCommitPoolMemory.c)
 *     MmResourcesAvailable @ 0x1402AEEA0 (MmResourcesAvailable.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14036A720 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14046B4C8 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  _QWORD *i; // rcx
  _QWORD *v2; // rbx

  result = 9 * (qword_140C6FA98 / 0xAuLL);
  if ( qword_140C6F9A8 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (_QWORD *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1760LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1464LL), 0, 0);
      }
    }
  }
  return result;
}
