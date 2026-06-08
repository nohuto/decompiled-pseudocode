/*
 * XREFs of ProcLibDeviceStart @ 0x1C002BB68
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0022020 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003E10 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     AcquireBiosPpmControl @ 0x1C0006DC0 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C0006F80 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary2 @ 0x1C0021A84 (ProcLibTraceSummary2.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     AcpiEval_OSC @ 0x1C00267D0 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1C0026D58 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0026E60 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C00276C4 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C002964C (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C002AF94 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C002B85C (ProcLibCapChange.c)
 *     InitAcpiProcessorDomains @ 0x1C002D2D0 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C002D548 (RegisterXsdDomain.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F054 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00353E0 (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C0035C8C (InitAcpiCStates.c)
 *     InitPepIdleStates @ 0x1C0035D5C (InitPepIdleStates.c)
 *     EmiInit @ 0x1C003883C (EmiInit.c)
 *     InitializeEnergyEstimation @ 0x1C00390A8 (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x1C00395E4 (InitPepPerfStates.c)
 *     InitPep @ 0x1C003A2B8 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C003A718 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C003AB2C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003ADAC (InitAcpiLpiStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r13d
  int v4; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  __int16 v13; // r8
  int v14; // eax
  int v15; // ebx
  int inited; // eax
  __int64 v17; // rax
  int v18; // eax
  int PepCapabilites; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned __int16 v33; // r9
  __int64 v34; // rcx
  void (__fastcall *v35)(_QWORD, _QWORD); // rax
  void (__fastcall *v36)(_QWORD); // rax
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  char v44; // si
  __int64 v45; // rax
  void (__fastcall *v46)(__int64); // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r9d
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v58; // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v61[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-48h]
  _QWORD v64[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v68[3]; // [rsp+110h] [rbp+8h] BYREF
  int v69; // [rsp+140h] [rbp+38h]
  wchar_t v70; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 16);
  LODWORD(v63) = 0;
  v69 = *(_DWORD *)L"re";
  v70 = aRegistryMachin[26];
  v65 = 0LL;
  v61[1] = v68;
  v3 = 0;
  PreviousAffinity = 0LL;
  v60 = 0LL;
  Affinity = 0LL;
  v59 = 0;
  v62 = 0LL;
  v61[0] = 3538996LL;
  v64[0] = 1LL;
  v68[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v64[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals;
  *(_QWORD *)(a1 + 280) = Globals;
  *(_QWORD *)(a1 + 272) = 0LL;
  v64[1] = &v65;
  v68[1] = *(_OWORD *)L"y\\Machine\\Software";
  v68[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v64,
         0LL,
         0LL) >= 0 )
  {
    if ( DWORD1(v65) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v65);
      *(_BYTE *)(a1 + 185) = BYTE8(v65);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v65 = 0LL;
    HIDWORD(v65) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v4 = HIDWORD(v65);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v65;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C0011980)(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Size[0] = v6;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x21u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Size);
    }
    goto LABEL_193;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(&Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_1C0011D08;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v8 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 8),
           &PROCESSOR_NUMBER_PKEY,
           0,
           (ULONG)0,
           (DEVPROPTYPE)7,
           (ULONG)4,
           (PVOID)(a1 + 56));
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x22u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  *((_QWORD *)&v62 + 1) = &DEVPKEY_Device_BiosDeviceName;
  *(_QWORD *)&v62 = 24LL;
  v63 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v9,
          &v62,
          512LL,
          0LL,
          &v60,
          &v59);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v10;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x23u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v11 = L"Unknown";
  }
  else
  {
    v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v60,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v11;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1168) = WorkItem;
  *(_BYTE *)(a1 + 1177) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x24u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    v7 = -1073741670;
    goto LABEL_191;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011460,
    0LL);
  v58 = 0LL;
  if ( qword_1C0011608 )
  {
    v14 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0011608, v13, &v58);
    if ( v14 >= 0 )
    {
      v15 = *v58;
      if ( (*v58 & 0xE) != 0 )
      {
        if ( (v15 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x25u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
        if ( (v15 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_1C0011608 + 13),
            *(unsigned __int8 *)(qword_1C0011608 + 12),
            *(unsigned __int8 *)(qword_1C0011608 + 11),
            Type);
        if ( (v15 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = *(ULONG *)(qword_1C0011608 + 16);
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x27u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v58;
      }
      goto LABEL_39;
    }
    if ( v14 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x28u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v14;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( qword_1C0011600 )
    AcpiEval_PDC(a1, (const void *)qword_1C0011600, word_1C0011610);
LABEL_39:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1104));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(ULONG *)(a1 + 1104);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x2Au,
      (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x111300000F00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = inited;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Bu,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  v17 = *(_QWORD *)(a1 + 280);
  if ( (v17 & 0xE0000000000LL) != 0 )
  {
    v18 = InitAcpiLpiStates(a1);
    if ( v18 >= 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFCFFF80C88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v18;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v17 = *(_QWORD *)(a1 + 280);
  }
  if ( (v17 & 0x111300000F00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = PepCapabilites;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Du,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F077LL) != 0 )
  {
    v20 = InitAcpiCStates(a1);
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v20;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v21 = *(_QWORD *)(a1 + 280);
  if ( (v21 & 0x7F077) == 0 )
  {
    v21 &= 0xFFFFFFFFFFFFFCFFuLL;
    *(_QWORD *)(a1 + 280) = v21;
  }
  if ( (v21 & 0x300000300LL) != 0 )
  {
    v22 = InitPepIdleStates(a1);
    if ( v22 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v22;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Fu,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFCFFFFFCFFuLL;
    }
  }
  v23 = *(_QWORD *)(a1 + 280);
  if ( (v23 & 0x1000000000LL) != 0 )
  {
    v24 = InitPepPerfStates(a1);
    v25 = *(_QWORD *)(a1 + 280);
    if ( v24 >= 0 )
    {
      v23 = v25 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
    }
    else
    {
      v23 = v25 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v24;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x30u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
        v23 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v23 & 0x8000000) != 0 )
  {
    v26 = InitAcpiCpc(a1);
    v27 = *(_QWORD *)(a1 + 280);
    if ( v26 >= 0 )
    {
      v23 = v27 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
    }
    else
    {
      v23 = v27 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v26;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x31u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
        v23 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v23 & 0x80000000) != 0 )
  {
    v28 = InitAcpiLegacyPcc(a1);
    v29 = *(_QWORD *)(a1 + 280);
    if ( v28 >= 0 )
    {
      v23 = v29 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
    }
    else
    {
      v23 = v29 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v28;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x32u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
        v23 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v23 & 0x70000000) != 0 )
  {
    v30 = InitAcpiPerfStates(a1);
    if ( v30 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v30;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x33u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
  {
    v31 = InitAcpiThrottleStates(a1);
    if ( v31 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v31;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( !qword_1C0011618 || (v32 = qword_1C0011618(a1), v7 = v32, v32 >= 0) )
  {
    v34 = *(_QWORD *)(a1 + 280);
    if ( (v34 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v34 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_1C0011638;
        *(_QWORD *)(a1 + 328) = qword_1C0011660;
        *(_QWORD *)(a1 + 312) = qword_1C0011648;
      }
      if ( (v34 & 0x40000000) == 0 )
      {
LABEL_115:
        if ( (v34 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1C0011668;
        if ( (v34 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1C0011678;
          *(_QWORD *)(a1 + 360) = qword_1C0011680;
        }
        if ( (v34 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_1C0011640;
          *(_QWORD *)(a1 + 320) = qword_1C0011650;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v34 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v34 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C0011670 )
          *(_QWORD *)(a1 + 344) = qword_1C0011670;
        InitAcpiProcessorDomains(a1, SetPerfStateIO, SetPerfStateIOHidden);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            v35 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
            if ( v35 )
              v35(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
            v36 = *(void (__fastcall **)(_QWORD))(a1 + 120);
            if ( v36 )
              v36(*(_QWORD *)(a1 + 104));
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_190;
            v33 = 54;
            Sizeb[0] = v7;
            goto LABEL_103;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v37 = ((__int64 (__fastcall *)(__int64))qword_1C0011948)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v37 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v37;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_1C0011A78 == dword_1C0011454
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1C0011720 )
        {
          qword_1C0011720(a1);
        }
        v38 = *(_DWORD *)(a1 + 280);
        v39 = 0;
        LODWORD(v58) = 0;
        if ( (v38 & 0x70000000) != 0 )
        {
          v40 = AcpiEval_PPC(a1, (int *)&v58);
          if ( v40 >= 0 )
          {
            v39 = (int)v58;
          }
          else if ( v40 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x38u,
                (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v40;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v41 = *(_DWORD *)(a1 + 280);
        v42 = 0;
        LODWORD(v58) = 0;
        if ( (v41 & 0x3000000) != 0 )
        {
          v43 = AcpiEval_TPC(a1, (unsigned int *)&v58);
          if ( v43 >= 0 )
          {
            v42 = (int)v58;
          }
          else if ( v43 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x3Au,
                (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v43;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v44 = (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0011988)(a1) == 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0011458,
          0LL);
        ProcLibCapChange(a1, v39, v42, 0x64u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C0011458);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 552) )
          {
            v44 = RegisterXsdDomain(a1);
          }
          else if ( !byte_1C0011998 )
          {
            goto LABEL_164;
          }
          if ( v44 )
          {
LABEL_164:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v45 = *(_QWORD *)(a1 + 280);
              if ( (v45 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0011978)(a1);
              }
              else if ( (v45 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0011970)(a1);
              }
              else if ( (v45 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0011968)(a1);
              }
              else
              {
                v46 = (void (__fastcall *)(__int64))qword_1C0011950;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v46 = (void (__fastcall *)(__int64))qword_1C0011960;
                v46(a1);
              }
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_1C0011CF4 == dword_1C0011454 )
          {
            v47 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v61,
                    &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
            if ( v47 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizeb[0] = v47;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                4u,
                0x3Cu,
                (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
                *(_QWORD *)Sizeb);
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
        {
          if ( ++dword_1C0011CF0 == dword_1C0011454 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_187;
        if ( ((__int64 (__fastcall *)(__int64))qword_1C00116D0)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_187:
          if ( (Globals & 0x800000000000LL) != 0 )
          {
            v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v48);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v49);
          }
        }
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_190;
      }
      v34 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v34 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v34 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v34 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v34;
    goto LABEL_115;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 53;
    Sizeb[0] = v32;
LABEL_103:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v33,
      (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      *(_QWORD *)Sizeb);
  }
LABEL_190:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011460);
LABEL_191:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_193:
  v50 = *(_DWORD *)(a1 + 272);
  v51 = *(_QWORD *)(a1 + 280);
  if ( (v50 & 0x7F077 & v51) != (v50 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV,
      0,
      0LL);
    v50 = *(_DWORD *)(a1 + 272);
    v51 = *(_QWORD *)(a1 + 280);
  }
  v52 = v50 & 0x40000000;
  if ( (v51 & 0x40000000) == 0 )
    v52 = v50 & 0x70000000;
  if ( ((unsigned int)v51 & (unsigned int)v52) != v52 )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_PERF_STATES_ERROR,
      (__int64)&PPM_ETW_PERF_STATES_ERROR_HV,
      0,
      0LL);
    v50 = *(_DWORD *)(a1 + 272);
    v51 = *(_QWORD *)(a1 + 280);
  }
  if ( (v50 & 0x3300000 & (unsigned int)v51) != (unsigned __int64)(v50 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV,
      0,
      0LL);
    v50 = *(_DWORD *)(a1 + 272);
    v51 = *(_QWORD *)(a1 + 280);
  }
  if ( (v50 & 0x80000000 & (unsigned int)v51) != (unsigned __int64)(v50 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_PCC_ERROR, (__int64)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
    v50 = *(_DWORD *)(a1 + 272);
    v51 = *(_QWORD *)(a1 + 280);
  }
  if ( (v50 & 0x8000000 & (unsigned int)v51) != (unsigned __int64)(v50 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_CPC_ERROR, (__int64)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0);
  return (unsigned int)v7;
}
