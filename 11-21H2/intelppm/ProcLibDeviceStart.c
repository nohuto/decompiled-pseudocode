/*
 * XREFs of ProcLibDeviceStart @ 0x1C0028678
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C002A610 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C000224C (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003DF0 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008580 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000ABA0 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     InitializeEnergyEstimation @ 0x1C00247D0 (InitializeEnergyEstimation.c)
 *     InitAcpiProcessorDomains @ 0x1C0024F24 (InitAcpiProcessorDomains.c)
 *     InitAcpiCStates @ 0x1C00252A4 (InitAcpiCStates.c)
 *     QueryPepCapabilites @ 0x1C0025850 (QueryPepCapabilites.c)
 *     AcpiEval_OSC @ 0x1C00259C8 (AcpiEval_OSC.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0026C74 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     InitAcpiLpiStates @ 0x1C0028464 (InitAcpiLpiStates.c)
 *     ProcLibTraceSummary2 @ 0x1C00299AC (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0029DDC (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0029F64 (ProcLibCapChange.c)
 *     AcquireAcpiInterfaces @ 0x1C0029FFC (AcquireAcpiInterfaces.c)
 *     InitPep @ 0x1C002A0B8 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C002A350 (EnumerateControlMethods.c)
 *     EmiInit @ 0x1C002DBA8 (EmiInit.c)
 *     AcpiEval_PDC @ 0x1C0039F1C (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C003A024 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C003A540 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C003CD84 (ReleaseAcpiInterfaces.c)
 *     InitAcpiPerfStates @ 0x1C003FFA8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C004032C (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x1C004048C (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0042634 (InitPepPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C00433EC (InitAcpiLegacyPcc.c)
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
  unsigned __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  unsigned int v28; // edi
  int v29; // eax
  unsigned int v30; // ebx
  char v31; // si
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v38; // rax
  void (__fastcall *v39)(__int64); // rax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned __int16 v49; // r9
  int v50; // eax
  int v51; // eax
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v56; // [rsp+88h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v59[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-48h]
  _QWORD v62[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v66[3]; // [rsp+110h] [rbp+8h] BYREF
  int v67; // [rsp+140h] [rbp+38h]
  wchar_t v68; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 16);
  LODWORD(v61) = 0;
  v67 = *(_DWORD *)L"re";
  v68 = aRegistryMachin_0[26];
  v63 = 0LL;
  v59[1] = v66;
  v3 = 0;
  PreviousAffinity = 0LL;
  v58 = 0LL;
  Affinity = 0LL;
  v57 = 0;
  v60 = 0LL;
  v59[0] = 3538996LL;
  v62[0] = 1LL;
  v66[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v62[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals[0];
  *(_QWORD *)(a1 + 280) = Globals[0];
  *(_QWORD *)(a1 + 272) = 0LL;
  v62[1] = &v63;
  v66[1] = *(_OWORD *)L"y\\Machine\\Software";
  v66[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v62,
         0LL,
         0LL) < 0 )
  {
    v63 = 0LL;
    HIDWORD(v63) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  else if ( DWORD1(v63) )
  {
    *(_DWORD *)(a1 + 188) = DWORD1(v63);
    *(_BYTE *)(a1 + 185) = BYTE8(v63);
    *(_BYTE *)(a1 + 184) = 1;
    *(_WORD *)(a1 + 186) = 0x2000;
    *(_DWORD *)(a1 + 192) = 0;
  }
  v4 = HIDWORD(v63);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v63;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C001E220)(a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( *v5 == -1 )
    {
      if ( _bittest64(Globals, 0x2Du) )
      {
        *(_DWORD *)(a1 + 80) = dword_1C001E5A8;
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
        WPP_RECORDER_SF_D(
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
    *((_QWORD *)&v60 + 1) = &DEVPKEY_Device_BiosDeviceName;
    *(_QWORD *)&v60 = 24LL;
    v61 = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
            WdfDriverGlobals,
            v9,
            &v60,
            512LL,
            0LL,
            &v58,
            &v57);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v10;
        WPP_RECORDER_SF_D(
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
                               v58,
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
      goto LABEL_79;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DD00,
      0LL);
    v56 = 0LL;
    if ( qword_1C001DEA8 )
    {
      v14 = AcpiEval_OSC(a1, (_DWORD *)qword_1C001DEA8, v13, &v56);
      if ( v14 >= 0 )
      {
        v15 = *v56;
        if ( (*v56 & 0xE) != 0 )
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
              *(unsigned __int8 *)(qword_1C001DEA8 + 13),
              *(unsigned __int8 *)(qword_1C001DEA8 + 12),
              *(unsigned __int8 *)(qword_1C001DEA8 + 11),
              Type);
          if ( (v15 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = *(ULONG *)(qword_1C001DEA8 + 16);
            WPP_RECORDER_SF_D(
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
          *(_QWORD *)(a1 + 88) = v56;
        }
        goto LABEL_15;
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
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x29u,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    if ( qword_1C001DEA0 )
      AcpiEval_PDC(a1, qword_1C001DEA0, (unsigned __int16)word_1C001DEB0);
LABEL_15:
    EnumerateControlMethods(a1, a1 + 1104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      Sizeb[0] = *(ULONG *)(a1 + 1104);
      WPP_RECORDER_SF_D(
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
          WPP_RECORDER_SF_D(
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
        WPP_RECORDER_SF_D(
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
          WPP_RECORDER_SF_D(
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
    if ( (*(_DWORD *)(a1 + 280) & 0x7F077) != 0 )
    {
      v20 = InitAcpiCStates((_QWORD *)a1);
      if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v20;
        WPP_RECORDER_SF_D(
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
      v41 = InitPepIdleStates(a1);
      if ( v41 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v41;
          WPP_RECORDER_SF_D(
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
    v22 = *(_QWORD *)(a1 + 280);
    if ( (v22 & 0x1000000000LL) != 0 )
    {
      v42 = InitPepPerfStates(a1);
      v43 = *(_QWORD *)(a1 + 280);
      if ( v42 >= 0 )
      {
        v22 = v43 & 0xFFFFFFFF04CFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
      }
      else
      {
        v22 = v43 & 0xFFFFFFEFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v42;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x30u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 280);
        }
      }
    }
    if ( (v22 & 0x8000000) != 0 )
    {
      v23 = InitAcpiCpc(a1);
      v24 = *(_QWORD *)(a1 + 280);
      if ( v23 < 0 )
      {
        v22 = v24 & 0xFFFFFFFFF7FFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x31u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 280);
        }
      }
      else
      {
        v22 = v24 & 0xFFFFFFFF0CCFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
      }
    }
    if ( (v22 & 0x80000000) != 0 )
    {
      v44 = InitAcpiLegacyPcc(a1);
      v45 = *(_QWORD *)(a1 + 280);
      if ( v44 >= 0 )
      {
        v22 = v45 & 0xFFFFFFFF8CCFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
      }
      else
      {
        v22 = v45 & 0xFFFFFFFF7FFFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v44;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x32u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
          v22 = *(_QWORD *)(a1 + 280);
        }
      }
    }
    if ( (v22 & 0x70000000) != 0 )
    {
      v46 = InitAcpiPerfStates(a1);
      if ( v46 < 0 )
      {
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v46;
          WPP_RECORDER_SF_D(
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
      v47 = InitAcpiThrottleStates(a1);
      if ( v47 < 0 )
      {
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v47;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x34u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( qword_1C001DEB8 )
    {
      v48 = qword_1C001DEB8(a1);
      v7 = v48;
      if ( v48 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_78:
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C001DD00);
LABEL_79:
          if ( v3 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          goto LABEL_81;
        }
        v49 = 53;
        Sizeb[0] = v48;
LABEL_167:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v49,
          (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
          *(_QWORD *)Sizeb);
        goto LABEL_78;
      }
    }
    v25 = *(_QWORD *)(a1 + 280);
    if ( (v25 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v25 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_1C001DED8;
        *(_QWORD *)(a1 + 328) = qword_1C001DF00;
        *(_QWORD *)(a1 + 312) = qword_1C001DEE8;
      }
      if ( (v25 & 0x40000000) == 0 )
      {
LABEL_47:
        if ( (v25 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1C001DF08;
        if ( (v25 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1C001DF18;
          *(_QWORD *)(a1 + 360) = qword_1C001DF20;
        }
        if ( (v25 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_1C001DEE0;
          *(_QWORD *)(a1 + 320) = qword_1C001DEF0;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v25 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v25 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C001DF10 )
          *(_QWORD *)(a1 + 344) = qword_1C001DF10;
        InitAcpiProcessorDomains(a1);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            ReleaseAcpiInterfaces(a1);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_78;
            v49 = 54;
            Sizeb[0] = v7;
            goto LABEL_167;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v26 = ((__int64 (__fastcall *)(__int64))qword_1C001E1E8)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v26;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_1C001E318 == dword_1C001DCF4
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1C001DFC0 )
        {
          qword_1C001DFC0(a1);
        }
        v27 = *(_DWORD *)(a1 + 280);
        v28 = 0;
        LODWORD(v56) = 0;
        if ( (v27 & 0x70000000) != 0 )
        {
          v50 = AcpiEval_PPC(a1, &v56);
          if ( v50 >= 0 )
          {
            v28 = (unsigned int)v56;
          }
          else if ( v50 == -1073741772 )
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
            Sizeb[0] = v50;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v29 = *(_DWORD *)(a1 + 280);
        v30 = 0;
        LODWORD(v56) = 0;
        if ( (v29 & 0x3000000) != 0 )
        {
          v51 = AcpiEval_TPC(a1, &v56);
          if ( v51 >= 0 )
          {
            v30 = (unsigned int)v56;
          }
          else if ( v51 == -1073741772 )
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
            Sizeb[0] = v51;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v31 = (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C001E228)(a1) == 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C001DCF8,
          0LL);
        ProcLibCapChange(a1, v28, v30, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001DCF8);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 )
          goto LABEL_66;
        if ( *(_QWORD *)(a1 + 552) )
        {
          v31 = RegisterXsdDomain(a1);
        }
        else if ( !byte_1C001E238 )
        {
          goto LABEL_97;
        }
        if ( !v31 )
          goto LABEL_66;
LABEL_97:
        if ( (int)ValidatePerfDomainSymmetry(a1) < 0 )
          goto LABEL_66;
        v38 = *(_QWORD *)(a1 + 280);
        if ( (v38 & 0x1000000000LL) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C001E218)(a1);
        }
        else
        {
          if ( (v38 & 0x8000000) != 0 )
          {
            v39 = (void (__fastcall *)(__int64))qword_1C001E210;
LABEL_101:
            v39(a1);
            goto LABEL_66;
          }
          if ( (v38 & 0x80000000) != 0 )
          {
            ((void (__fastcall *)(__int64))qword_1C001E208)(a1);
          }
          else
          {
            v39 = (void (__fastcall *)(__int64))qword_1C001E1F0;
            if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) != 0 )
              goto LABEL_101;
            ((void (__fastcall *)(__int64))qword_1C001E200)(a1);
          }
        }
LABEL_66:
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_1C001E594 == dword_1C001DCF4 )
          {
            v40 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v59,
                    &HwDebugHiveCallbackRegistrationHandle);
            if ( v40 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizeb[0] = v40;
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
          if ( ++dword_1C001E590 == dword_1C001DCF4 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_75;
        if ( ((__int64 (__fastcall *)(__int64))qword_1C001DF70)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_75:
          if ( (Globals[0] & 0x800000000000LL) != 0 )
          {
            v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v32);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v33);
          }
        }
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_78;
      }
      v25 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v25 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v25 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v25 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v25;
    goto LABEL_47;
  }
  *(_QWORD *)(a1 + 280) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Size[0] = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x21u,
      (__int64)&WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      *(_QWORD *)Size);
  }
LABEL_81:
  v34 = *(_DWORD *)(a1 + 272);
  v35 = *(_QWORD *)(a1 + 280);
  if ( (v34 & 0x7F077 & v35) != (v34 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV,
      0,
      0LL);
    v34 = *(_DWORD *)(a1 + 272);
    v35 = *(_QWORD *)(a1 + 280);
  }
  v36 = v34 & 0x40000000;
  if ( (v35 & 0x40000000) == 0 )
    v36 = v34 & 0x70000000;
  if ( ((unsigned int)v35 & (unsigned int)v36) != v36 )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_PERF_STATES_ERROR,
      (__int64)&PPM_ETW_PERF_STATES_ERROR_HV,
      0,
      0LL);
    v34 = *(_DWORD *)(a1 + 272);
    v35 = *(_QWORD *)(a1 + 280);
  }
  if ( (v34 & 0x3300000 & (unsigned int)v35) != (unsigned __int64)(v34 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV,
      0,
      0LL);
    v34 = *(_DWORD *)(a1 + 272);
    v35 = *(_QWORD *)(a1 + 280);
  }
  if ( (v34 & 0x80000000 & (unsigned int)v35) != (unsigned __int64)(v34 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_PCC_ERROR, (__int64)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
    v34 = *(_DWORD *)(a1 + 272);
    v35 = *(_QWORD *)(a1 + 280);
  }
  if ( (v34 & 0x8000000 & (unsigned int)v35) != (unsigned __int64)(v34 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_CPC_ERROR, (__int64)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v7;
}
