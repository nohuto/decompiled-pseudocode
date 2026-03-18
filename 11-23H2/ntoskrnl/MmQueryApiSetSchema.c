/*
 * XREFs of MmQueryApiSetSchema @ 0x14035F1B8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403E4184 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407D410C (PsQueryCurrentApiSetSchema.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C657F8;
  result = &qword_140C65800;
  *a2 = &qword_140C65800;
  return result;
}
