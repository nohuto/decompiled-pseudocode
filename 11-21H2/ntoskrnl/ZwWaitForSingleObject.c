/*
 * XREFs of ZwWaitForSingleObject @ 0x14041B7E0
 * Callers:
 *     sub_1402D1E10 @ 0x1402D1E10 (sub_1402D1E10.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1406286F0 @ 0x1406286F0 (sub_1406286F0.c)
 *     sub_1406D958C @ 0x1406D958C (sub_1406D958C.c)
 *     sub_1406DBCB4 @ 0x1406DBCB4 (sub_1406DBCB4.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_1408568A0 @ 0x1408568A0 (sub_1408568A0.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return sub_140433F80(Handle, Alertable, Timeout);
}
