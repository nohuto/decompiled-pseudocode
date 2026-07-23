/*
 * XREFs of sub_1409B4E80 @ 0x1409B4E80
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_14074C258 @ 0x14074C258 (sub_14074C258.c)
 *     IoUnregisterFileSystem @ 0x14080C290 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall sub_1409B4E80(__int64 a1, IRP *a2)
{
  sub_14074C258();
  IoUnregisterFileSystem(qword_140C1BD10);
  IoUnregisterFileSystem(qword_140C1BD20);
  IoUnregisterFileSystem(qword_140C1BD18);
  IoDeleteDevice(qword_140C1BD18);
  IoDeleteDevice(qword_140C1BD20);
  IoDeleteDevice(qword_140C1BD10);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
