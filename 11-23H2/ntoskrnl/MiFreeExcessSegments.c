/*
 * XREFs of MiFreeExcessSegments @ 0x140624F6C
 * Callers:
 *     MiCountSystemPool @ 0x140212414 (MiCountSystemPool.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MmResourcesAvailable @ 0x1402AF160 (MmResourcesAvailable.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14046BF28 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  _QWORD *i; // rcx
  _QWORD *v2; // rbx

  result = 9 * (qword_140C6F9D8 / 0xAuLL);
  if ( qword_140C6F8E8 >= result )
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
