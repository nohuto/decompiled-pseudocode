/*
 * XREFs of sub_140AF32F0 @ 0x140AF32F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AF32F0(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rax

  DriverExtension = a1->DriverExtension;
  qword_140C46250 = a1;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)FsRtlSyncVolumes;
  a1->MajorFunction[27] = (PDRIVER_DISPATCH)sub_140763C50;
  a1->MajorFunction[22] = (PDRIVER_DISPATCH)sub_140395B50;
  a1->MajorFunction[23] = (PDRIVER_DISPATCH)sub_14094FFF0;
  return 0LL;
}
