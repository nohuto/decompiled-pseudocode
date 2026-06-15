/*
 * XREFs of ??_G?$CAggregateValuesBase@W4SpatialCpGlitchEvent@@PEAI@@UEAAPEAXI@Z @ 0x14009B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CAggregateValuesBase<enum SpatialCpGlitchEvent,unsigned int *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum SpatialCpGlitchEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
