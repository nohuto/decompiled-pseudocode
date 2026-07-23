/*
 * XREFs of sub_140A9E7F0 @ 0x140A9E7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9E7F0(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rax

  DriverExtension = a1->DriverExtension;
  qword_140C1ADA0 = a1;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)ClfsMgmtNullAdvanceTailNotification;
  a1->MajorFunction[0] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[1] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[2] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[3] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[4] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[5] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[6] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[7] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[8] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[9] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[10] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[11] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[12] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[13] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[14] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[15] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[16] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[17] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[18] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[19] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[20] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[21] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[23] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[24] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[25] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[26] = (PDRIVER_DISPATCH)sub_140A9E460;
  a1->MajorFunction[27] = (PDRIVER_DISPATCH)sub_140A9E540;
  a1->MajorFunction[22] = (PDRIVER_DISPATCH)sub_140A9E710;
  return 0LL;
}
