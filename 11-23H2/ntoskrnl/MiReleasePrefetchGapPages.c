/*
 * XREFs of MiReleasePrefetchGapPages @ 0x14020DC18
 * Callers:
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14020DC40 (MiReturnPfnReferenceCount.c)
 */

__int64 __fastcall MiReleasePrefetchGapPages(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = MiReturnPfnReferenceCount();
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
