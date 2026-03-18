/*
 * XREFs of VfSuspectDriversInsert @ 0x140ADA700
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x140B96D8C (VfSuspectDriversParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B970A8 (VfTriageAddDrivers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C37398;
  if ( *(__int64 **)qword_140C37398 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140C37398 = (__int64)a1;
  return result;
}
