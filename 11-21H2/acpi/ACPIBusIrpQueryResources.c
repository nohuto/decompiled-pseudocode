/*
 * XREFs of ACPIBusIrpQueryResources @ 0x1C00978C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00235A4 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeValidatePciResources @ 0x1C0028A0C (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C002C388 (ACPIRangeFilterPICInterrupt.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0098DB4 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // si
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rbx
  const char *v8; // r12
  int Status; // edi
  __int64 v10; // rax
  int DeviceResourceList; // eax
  unsigned __int64 v12; // r8
  _DWORD *v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  char *IrpText; // rax
  const char *v17; // r8
  __int64 v19; // rax
  void *v20; // rcx
  const char *v21; // rdx
  const char *v22; // rcx
  __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // rcx
  unsigned __int16 v26; // r9
  _DWORD *v27; // rcx
  unsigned int i; // r9d
  unsigned int v29; // r8d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+68h] [rbp-18h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h] BYREF
  int v36; // [rsp+C8h] [rbp+48h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  __int128 *v38; // [rsp+D8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v34 = 0LL;
  v36 = 0;
  v35 = 0LL;
  v38 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v33 = 0LL;
  P = 0LL;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  v8 = (const char *)&unk_1C006FB8B;
  Status = ACPIGet((__int64)DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v34, 0LL);
  if ( Status < 0 )
    goto LABEL_7;
  v10 = DeviceExtension[1];
  if ( (v10 & 0x40000000000000LL) != 0 )
  {
    DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0LL, &P);
    v13 = P;
    Status = DeviceResourceList;
    if ( P )
    {
      if ( (DeviceExtension[1] & 0x2000000) == 0 )
      {
        *(_QWORD *)&v35 = DeviceExtension[95];
        DWORD2(v35) = 8;
        v38 = &v35;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_SWALLOW_OBJECT_CRS, &v38, 1LL, &v36) >= 0 && v36 == 2 )
        {
          ExFreePoolWithTag(v13, 0);
          v13 = 0LL;
        }
      }
      if ( v13 )
      {
        v19 = DeviceExtension[1];
        if ( (v19 & 0x2000000) != 0 )
        {
          ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v13, v12);
        }
        else if ( (v19 & 0x200000000LL) != 0 )
        {
          Status = ACPIRangeFilterPICInterrupt((__int64)v13);
          if ( Status < 0 )
          {
            v23 = DeviceExtension[1];
            v24 = (const char *)&unk_1C006FB8B;
            v25 = (const char *)&unk_1C006FB8B;
            if ( (v23 & 0x200000000000LL) != 0 )
            {
              v24 = (const char *)DeviceExtension[76];
              if ( (v23 & 0x400000000000LL) != 0 )
                v25 = (const char *)DeviceExtension[77];
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_43;
            v26 = 47;
            goto LABEL_42;
          }
        }
        if ( (DeviceExtension[1] & 0x8000LL) != 0 )
        {
          v27 = v13 + 8;
          for ( i = 0; i < v13[7]; v27 += 8 * v29 + 2 )
          {
            v29 = v27[1];
            v30 = (unsigned __int64)(v27 + 2);
            v31 = (unsigned __int64)&v27[8 * v29 + 2];
            if ( (unsigned __int64)(v27 + 2) < v31 )
            {
              do
              {
                if ( *(_BYTE *)(v30 + 1) == 2 )
                  *(_WORD *)(v30 + 4) |= 8u;
                v30 += 32LL;
              }
              while ( v30 < v31 );
              v29 = v27[1];
            }
            ++i;
          }
        }
        Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v13);
        if ( Status >= 0 )
        {
          Status = PnpIoResourceListToCmResourceList(v13, &v33);
          v20 = v13;
          if ( Status >= 0 )
          {
            ExFreePoolWithTag(v13, 0);
            goto LABEL_9;
          }
          goto LABEL_44;
        }
        v32 = DeviceExtension[1];
        v24 = (const char *)&unk_1C006FB8B;
        v25 = (const char *)&unk_1C006FB8B;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v24 = (const char *)DeviceExtension[76];
          if ( (v32 & 0x400000000000LL) != 0 )
            v25 = (const char *)DeviceExtension[77];
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_43:
          v20 = v13;
LABEL_44:
          ExFreePoolWithTag(v20, 0);
          goto LABEL_7;
        }
        v26 = 48;
LABEL_42:
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          v26,
          (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
          (char)a2,
          Status,
          (char)DeviceExtension,
          v24,
          v25);
        goto LABEL_43;
      }
    }
    if ( Status < 0 )
      goto LABEL_7;
    if ( (DeviceExtension[1] & 0x2000000) == 0 )
    {
      Status = a2->IoStatus.Status;
      if ( Status >= 0 )
        goto LABEL_9;
LABEL_7:
      if ( Status == -1073741670 )
        goto LABEL_9;
      goto LABEL_8;
    }
    Status = -1073741823;
  }
  else
  {
    v21 = (const char *)&unk_1C006FB8B;
    v22 = (const char *)&unk_1C006FB8B;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v21 = (const char *)DeviceExtension[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v22 = (const char *)DeviceExtension[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x2Eu,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v21,
        v22);
    Status = -1073741436;
  }
LABEL_8:
  if ( (DeviceExtension[1] & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_9:
  a2->IoStatus.Status = Status;
  v14 = 0LL;
  if ( Status >= 0 )
    v14 = v33;
  a2->IoStatus.Information = v14;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v3 = (char)DeviceExtension;
    if ( (DeviceExtension[1] & 0x200000000000LL) != 0 )
      v8 = (const char *)DeviceExtension[76];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v15, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x31u,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      IrpText,
      Status,
      v3,
      v8,
      v17);
  }
  return (unsigned int)Status;
}
