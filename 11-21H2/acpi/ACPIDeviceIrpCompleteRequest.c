/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C002E7C0
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C00496F0 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000575C (ACPIInternalDecrementIrpReferenceCount.c)
 */

LONG __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  const char *v4; // rbp
  char v5; // si
  char v8; // dl
  const char *v9; // r8
  const char *v10; // rcx
  __int64 v11; // rax
  const char *v13; // rax
  __int64 v14; // rcx

  v4 = (const char *)&unk_1C006FB8B;
  v5 = 0;
  v8 = 0;
  v9 = (const char *)&unk_1C006FB8B;
  v10 = (const char *)&unk_1C006FB8B;
  if ( a1 )
  {
    v11 = a1[1];
    v8 = (char)a1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)a1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x1Au,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      (char)a2,
      a3,
      v8,
      v9,
      v10);
  if ( a3 < 0 )
  {
    v13 = (const char *)&unk_1C006FB8B;
    if ( a1 )
    {
      v14 = a1[1];
      v5 = (char)a1;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v4 = (const char *)a1[76];
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = (const char *)a1[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x1Bu,
        (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
        (char)a2,
        a3,
        v5,
        v4,
        v13);
  }
  else
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount((__int64)a1);
}
