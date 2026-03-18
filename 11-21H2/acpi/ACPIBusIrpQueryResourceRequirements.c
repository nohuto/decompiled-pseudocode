/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C0097B70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00235A4 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeValidatePciResources @ 0x1C0028A0C (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C002C388 (ACPIRangeFilterPICInterrupt.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C0097F6C (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009800C (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  __int64 v8; // rcx
  int DeviceResourceList; // ebx
  void *v10; // r8
  __int64 v11; // rax
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  __int64 v16; // rcx
  _DWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  const char *v26; // r8
  const char *v27; // rdx
  _DWORD *v28; // r8
  unsigned int v29; // r9d
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 i; // rax
  _DWORD *v34; // rcx
  unsigned int j; // r9d
  unsigned int v36; // r8d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  const char *v40; // rdx
  const char *v41; // rcx
  __int64 v42; // rax
  char *v43; // rax
  const char *v44; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = (const char *)&unk_1C006FB8B;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  v10 = &unk_1C006FB8B;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
      v10 = *(void **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x32u,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      IrpText,
      DeviceResourceList,
      v14,
      v15,
      v13);
  }
  if ( DeviceResourceList < 0 )
    goto LABEL_61;
  v16 = *(_QWORD *)(DeviceExtension + 8);
  v17 = P;
  v18 = v16 & 0x2000000;
  if ( P )
  {
    if ( (v16 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, (unsigned __int64)v10);
    }
    else if ( (v16 & 0x200000000LL) != 0 )
    {
      v24 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v24 < 0 )
      {
        v25 = *(_QWORD *)(DeviceExtension + 8);
        v26 = (const char *)&unk_1C006FB8B;
        v27 = (const char *)&unk_1C006FB8B;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(DeviceExtension + 608);
          if ( (v25 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(DeviceExtension + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x33u,
            (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
            (char)a2,
            v24,
            DeviceExtension,
            v26,
            v27);
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    v23 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v23 & 0x2000000000LL) != 0 )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v28 = v17 + 8;
        v29 = 0;
        if ( v17[7] )
        {
          do
          {
            v30 = (unsigned int)v28[1];
            v31 = (unsigned __int64)(v28 + 2);
            v32 = (unsigned __int64)&v28[8 * v30 + 2];
            if ( (unsigned __int64)(v28 + 2) < v32 )
            {
              do
              {
                if ( ((*(_BYTE *)(v31 + 1) - 3) & 0xFB) == 0 )
                {
                  for ( i = v31 + 32; i < v32 && *(_BYTE *)(i + 1) == 0x81; i += 32LL )
                  {
                    if ( *(_WORD *)(i + 4) == 1 )
                    {
                      *(_WORD *)(v31 + 4) |= 0x100u;
                      break;
                    }
                  }
                }
                v31 += 32LL;
              }
              while ( v31 < v32 );
              v30 = (unsigned int)v28[1];
            }
            v28 += 8 * v30 + 2;
            ++v29;
          }
          while ( v29 < v17[7] );
          v23 = *(_QWORD *)(DeviceExtension + 8);
        }
      }
    }
    if ( (v23 & 0x8000) != 0 )
    {
      v34 = v17 + 8;
      for ( j = 0; j < v17[7]; v34 += 8 * v36 + 2 )
      {
        v36 = v34[1];
        v37 = (unsigned __int64)(v34 + 2);
        v38 = (unsigned __int64)&v34[8 * v36 + 2];
        if ( (unsigned __int64)(v34 + 2) < v38 )
        {
          do
          {
            if ( *(_BYTE *)(v37 + 1) == 2 )
              *(_WORD *)(v37 + 4) |= 8u;
            v37 += 32LL;
          }
          while ( v37 < v38 );
          v36 = v34[1];
        }
        ++j;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v17);
    if ( DeviceResourceList >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)v17;
      goto LABEL_12;
    }
    v39 = *(_QWORD *)(DeviceExtension + 8);
    v40 = (const char *)&unk_1C006FB8B;
    v41 = (const char *)&unk_1C006FB8B;
    if ( (v39 & 0x200000000000LL) != 0 )
    {
      v40 = *(const char **)(DeviceExtension + 608);
      if ( (v39 & 0x400000000000LL) != 0 )
        v41 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x34u,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v40,
        v41);
    ExFreePoolWithTag(v17, 0);
    goto LABEL_61;
  }
  v8 = 3221225473LL;
  if ( v18 )
    DeviceResourceList = -1073741823;
  if ( DeviceResourceList < 0 )
  {
LABEL_61:
    if ( DeviceResourceList != -1073741670 )
    {
      v42 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v42 & 0x2000000) != 0 )
      {
        if ( (v42 & 0x200000000000LL) != 0 )
          v7 = *(const char **)(DeviceExtension + 608);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = ACPIDebugGetIrpText(v8, MinorFunction);
          WPP_RECORDER_SF_qsLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x35u,
            (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
            (char)a2,
            v43,
            DeviceResourceList,
            DeviceExtension,
            v7,
            v44);
        }
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
LABEL_12:
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = ACPIDebugGetIrpText(v19, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x36u,
      (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      (char)a2,
      v20,
      DeviceResourceList,
      v2,
      v7,
      v21);
  }
  return (unsigned int)DeviceResourceList;
}
