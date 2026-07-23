/*
 * XREFs of PsGetThreadProcess @ 0x1402321F0
 * Callers:
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 *     sub_1406BCB64 @ 0x1406BCB64 (sub_1406BCB64.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_14092972C @ 0x14092972C (sub_14092972C.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_1409B1A00 @ 0x1409B1A00 (sub_1409B1A00.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall PsGetThreadProcess(PETHREAD Thread)
{
  return (PEPROCESS)*((_QWORD *)Thread + 68);
}
