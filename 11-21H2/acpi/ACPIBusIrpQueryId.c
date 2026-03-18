/*
 * XREFs of ACPIBusIrpQueryId @ 0x1C0093F10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C000859C (WPP_RECORDER_SF_qsdLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0029A54 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C0061760 (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092610 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0092934 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092A34 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0092C24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C00B57F8 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r14d
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  int DeviceId; // eax
  _WORD *v12; // rcx
  __int64 v13; // rcx
  char *v14; // rax
  const char *v15; // r8
  char *IrpText; // rax
  __int64 v18; // rdx
  const char *v19; // r8
  char v20; // r10
  const char *v21; // r11
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  PVOID P; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v22 = 0;
  v24 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = (const char *)&unk_1C006FB8B;
  v10 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      DeviceId = ACPIBusIrpQueryDeviceId((wchar_t **)&P, (size_t *)&v24, DeviceExtension);
      goto LABEL_7;
    case 1u:
      DeviceId = ACPIBusIrpQueryHardwareId((wchar_t **)&P, (size_t *)&v24, (__int64)DeviceExtension);
      goto LABEL_7;
    case 2u:
      DeviceId = ACPIBusIrpQueryCompatibleId((wchar_t **)&P, (size_t *)&v24, (__int64)DeviceExtension);
      goto LABEL_7;
    case 3u:
      DeviceId = ACPIBusIrpQueryInstanceId((__int64 *)&P, (size_t *)&v24, DeviceExtension);
      goto LABEL_7;
    case 5u:
      DeviceId = ACPIBusAndFilterIrpQueryContainerId(&P, &v24, (__int64)DeviceExtension);
LABEL_7:
      Status = DeviceId;
      goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(Length - 3, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      (__int64)v19,
      0x2Au,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      IrpText,
      Length,
      v20,
      v21,
      v19);
  }
LABEL_8:
  if ( (AcpiOverrideAttributes & 0x100000) != 0 && Length - 1 <= 1 && Status >= 0 )
  {
    v12 = P;
    if ( !P )
      goto LABEL_10;
    if ( (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, P, &v22) >= 0 && v22 == 2 )
      ACPIInternalSetFlags(v10 + 125, 0x800000uLL);
  }
  v12 = P;
LABEL_10:
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && Length - 1 <= 1 )
  {
    if ( Status >= 0 )
    {
      if ( v12 )
      {
        if ( (int)ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v12) >= 0 && v22 == 2 )
          ACPIInternalSetFlags(v10 + 125, 0x40000000uLL);
        v12 = P;
      }
      goto LABEL_12;
    }
  }
  else if ( Status >= 0 )
  {
LABEL_12:
    a2->IoStatus.Information = (unsigned __int64)v12;
    goto LABEL_13;
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0x53706341u);
LABEL_13:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[76];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = ACPIDebugGetIrpText(v13, MinorFunction);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v15,
      0x2Bu,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      v14,
      Length,
      Status,
      v3,
      v9,
      v15);
  }
  return (unsigned int)Status;
}
