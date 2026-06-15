/*
 * XREFs of ??_E?$CAggregateValuesBase@W4SpatialCpErrorEvent@@PEAI@@UEAAPEAXI@Z @ 0x14009B750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CAggregateValuesBase<enum SpatialCpErrorEvent,unsigned int *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum SpatialCpErrorEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
