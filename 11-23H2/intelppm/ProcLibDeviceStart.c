/*
 * XREFs of ProcLibDeviceStart @ 0x1C0027F5C
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C00276A0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C00027B4 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004EF4 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009F84 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000C3E8 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     EmiInit @ 0x1C0026C58 (EmiInit.c)
 *     ProcLibTraceSummary2 @ 0x1C002716C (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0027474 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0027608 (ProcLibCapChange.c)
 *     EnumerateControlMethods @ 0x1C0027A34 (EnumerateControlMethods.c)
 *     QueryPepCapabilites @ 0x1C0027CF4 (QueryPepCapabilites.c)
 *     InitAcpiCStates @ 0x1C00289B0 (InitAcpiCStates.c)
 *     AcquireAcpiInterfaces @ 0x1C0028B8C (AcquireAcpiInterfaces.c)
 *     InitAcpiLpiStates @ 0x1C0028C48 (InitAcpiLpiStates.c)
 *     InitPep @ 0x1C0028D78 (InitPep.c)
 *     AcpiEval_OSC @ 0x1C0029018 (AcpiEval_OSC.c)
 *     InitAcpiProcessorDomains @ 0x1C002930C (InitAcpiProcessorDomains.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002A6D4 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitializeEnergyEstimation @ 0x1C002CA58 (InitializeEnergyEstimation.c)
 *     AcpiEval_PDC @ 0x1C003B20C (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C003B314 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C003B830 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C003E264 (ReleaseAcpiInterfaces.c)
 *     InitAcpiPerfStates @ 0x1C00411D8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C004155C (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x1C00416BC (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0043864 (InitPepPerfStates.c)
 *     InitAcpiLegacyPcc @ 0x1C004461C (InitAcpiLegacyPcc.c)
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
  __int64 v13; // r8
  int v14; // eax
  int v15; // ebx
  int inited; // eax
  int v17; // eax
  int PepCapabilites; // eax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  char v30; // si
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v36; // rax
  void (__fastcall *v37)(__int64); // rax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int16 v47; // r9
  int v48; // eax
  int v49; // eax
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v54; // [rsp+88h] [rbp-80h] BYREF
  int v55; // [rsp+90h] [rbp-78h] BYREF
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-48h]
  _QWORD v60[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v64[3]; // [rsp+110h] [rbp+8h] BYREF
  int v65; // [rsp+140h] [rbp+38h]
  wchar_t v66; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 16);
  LODWORD(v59) = 0;
  v65 = *(_DWORD *)L"re";
  v66 = aRegistryMachin_0[26];
  v61 = 0LL;
  v57[1] = v64;
  v3 = 0;
  PreviousAffinity = 0LL;
  v56 = 0LL;
  Affinity = 0LL;
  v55 = 0;
  v58 = 0LL;
  v57[0] = 3538996LL;
  v60[0] = 1LL;
  v64[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v60[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals[0];
  *(_QWORD *)(a1 + 280) = Globals[0];
  *(_QWORD *)(a1 + 272) = 0LL;
  v60[1] = &v61;
  v64[1] = *(_OWORD *)L"y\\Machine\\Software";
  v64[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v60,
         0LL,
         0LL) < 0 )
  {
    v61 = 0LL;
    HIDWORD(v61) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  else if ( DWORD1(v61) )
  {
    *(_DWORD *)(a1 + 188) = DWORD1(v61);
    *(_BYTE *)(a1 + 185) = BYTE8(v61);
    *(_BYTE *)(a1 + 184) = 1;
    *(_WORD *)(a1 + 186) = 0x2000;
    *(_DWORD *)(a1 + 192) = 0;
  }
  v4 = HIDWORD(v61);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v61;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C001F560)(a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( *v5 == -1 )
    {
      if ( _bittest64(Globals, 0x2Du) )
      {
        *(_DWORD *)(a1 + 80) = dword_1C001F8F8;
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
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizea);
      }
      KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = 1;
    }
    *((_QWORD *)&v58 + 1) = &DEVPKEY_Device_BiosDeviceName;
    *(_QWORD *)&v58 = 24LL;
    v59 = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
            WdfDriverGlobals,
            v9,
            &v58,
            512LL,
            0LL,
            &v56,
            &v55);
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
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v11 = L"Unknown";
    }
    else
    {
      v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v56,
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
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      v7 = -1073741670;
      goto LABEL_78;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F020,
      0LL);
    v54 = 0LL;
    if ( qword_1C001F1C8 )
    {
      v14 = AcpiEval_OSC(a1, qword_1C001F1C8, v13, &v54);
      if ( v14 >= 0 )
      {
        v15 = *v54;
        if ( (*v54 & 0xE) != 0 )
        {
          if ( (v15 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x25u,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
          if ( (v15 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDDDDDDDDD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              *(unsigned __int8 *)(qword_1C001F1C8 + 13),
              *(unsigned __int8 *)(qword_1C001F1C8 + 12),
              *(unsigned __int8 *)(qword_1C001F1C8 + 11),
              Type);
          if ( (v15 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = *(ULONG *)(qword_1C001F1C8 + 16);
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x27u,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 88) = v54;
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
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v14;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x29u,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    if ( qword_1C001F1C0 )
      AcpiEval_PDC(a1, qword_1C001F1C0, (unsigned __int16)word_1C001F1D0);
LABEL_15:
    EnumerateControlMethods(a1, (_DWORD *)(a1 + 1104));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      Sizeb[0] = *(ULONG *)(a1 + 1104);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0x2Au,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
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
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 280) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    if ( (*(_QWORD *)(a1 + 280) & 0xE0000000000LL) != 0 )
    {
      v17 = InitAcpiLpiStates(a1);
      if ( v17 >= 0 )
      {
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFCFFF80C88uLL;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v17;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Cu,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    if ( (*(_QWORD *)(a1 + 280) & 0x111300000F00LL) != 0 )
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
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 280) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x7F077LL) != 0 )
    {
      v19 = InitAcpiCStates(a1);
      if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v19;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Eu,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    v20 = *(_QWORD *)(a1 + 280);
    if ( (v20 & 0x7F077) == 0 )
    {
      v20 &= 0xFFFFFFFFFFFFFCFFuLL;
      *(_QWORD *)(a1 + 280) = v20;
    }
    if ( (v20 & 0x300000300LL) != 0 )
    {
      v39 = InitPepIdleStates(a1);
      if ( v39 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v39;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Fu,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFCFFFFFCFFuLL;
      }
    }
    v21 = *(_QWORD *)(a1 + 280);
    if ( (v21 & 0x1000000000LL) != 0 )
    {
      v40 = InitPepPerfStates(a1);
      v41 = *(_QWORD *)(a1 + 280);
      if ( v40 >= 0 )
      {
        v21 = v41 & 0xFFFFFFFF04CFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
      }
      else
      {
        v21 = v41 & 0xFFFFFFEFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v40;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x30u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
          v21 = *(_QWORD *)(a1 + 280);
        }
      }
    }
    if ( (v21 & 0x8000000) != 0 )
    {
      v22 = InitAcpiCpc(a1);
      v23 = *(_QWORD *)(a1 + 280);
      if ( v22 < 0 )
      {
        v21 = v23 & 0xFFFFFFFFF7FFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v22;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x31u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
          v21 = *(_QWORD *)(a1 + 280);
        }
      }
      else
      {
        v21 = v23 & 0xFFFFFFFF0CCFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
      }
    }
    if ( (v21 & 0x80000000) != 0 )
    {
      v42 = InitAcpiLegacyPcc(a1);
      v43 = *(_QWORD *)(a1 + 280);
      if ( v42 >= 0 )
      {
        v21 = v43 & 0xFFFFFFFF8CCFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
      }
      else
      {
        v21 = v43 & 0xFFFFFFFF7FFFFFFFuLL;
        *(_QWORD *)(a1 + 280) = v21;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v42;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x32u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
          v21 = *(_QWORD *)(a1 + 280);
        }
      }
    }
    if ( (v21 & 0x70000000) != 0 )
    {
      v44 = InitAcpiPerfStates(a1);
      if ( v44 < 0 )
      {
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v44;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x33u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
    {
      v45 = InitAcpiThrottleStates(a1);
      if ( v45 < 0 )
      {
        *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v45;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x34u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( qword_1C001F1D8 )
    {
      v46 = qword_1C001F1D8(a1);
      v7 = v46;
      if ( v46 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_77:
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C001F020);
LABEL_78:
          if ( v3 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          goto LABEL_80;
        }
        v47 = 53;
        Sizeb[0] = v46;
LABEL_165:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v47,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
        goto LABEL_77;
      }
    }
    v24 = *(_QWORD *)(a1 + 280);
    if ( (v24 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v24 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_1C001F1F8;
        *(_QWORD *)(a1 + 328) = qword_1C001F220;
        *(_QWORD *)(a1 + 312) = qword_1C001F208;
      }
      if ( (v24 & 0x40000000) == 0 )
      {
LABEL_46:
        if ( (v24 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1C001F228;
        if ( (v24 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1C001F238;
          *(_QWORD *)(a1 + 360) = qword_1C001F240;
        }
        if ( (v24 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_1C001F200;
          *(_QWORD *)(a1 + 320) = qword_1C001F210;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v24 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v24 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C001F230 )
          *(_QWORD *)(a1 + 344) = qword_1C001F230;
        InitAcpiProcessorDomains(a1, SetPerfStateIO, SetPerfStateIOHidden);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            ReleaseAcpiInterfaces(a1);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_77;
            v47 = 54;
            Sizeb[0] = v7;
            goto LABEL_165;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v25 = ((__int64 (__fastcall *)(__int64))qword_1C001F528)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v25;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_1C001F668 == dword_1C001F014
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1C001F2E8 )
        {
          qword_1C001F2E8(a1);
        }
        v26 = *(_DWORD *)(a1 + 280);
        v27 = 0;
        LODWORD(v54) = 0;
        if ( (v26 & 0x70000000) != 0 )
        {
          v48 = AcpiEval_PPC(a1, &v54);
          if ( v48 >= 0 )
          {
            v27 = (int)v54;
          }
          else if ( v48 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x38u,
                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v48;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v28 = *(_DWORD *)(a1 + 280);
        v29 = 0;
        LODWORD(v54) = 0;
        if ( (v28 & 0x3000000) != 0 )
        {
          v49 = AcpiEval_TPC(a1, &v54);
          if ( v49 >= 0 )
          {
            v29 = (int)v54;
          }
          else if ( v49 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x3Au,
                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v49;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v30 = (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C001F568)(a1) == 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C001F018,
          0LL);
        ProcLibCapChange(a1, v27, v29, 0x64u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001F018);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 )
          goto LABEL_65;
        if ( *(_QWORD *)(a1 + 552) )
        {
          v30 = RegisterXsdDomain((_QWORD *)a1);
        }
        else if ( !byte_1C001F578 )
        {
          goto LABEL_96;
        }
        if ( !v30 )
          goto LABEL_65;
LABEL_96:
        if ( (int)ValidatePerfDomainSymmetry(a1) < 0 )
          goto LABEL_65;
        v36 = *(_QWORD *)(a1 + 280);
        if ( (v36 & 0x1000000000LL) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C001F558)(a1);
        }
        else
        {
          if ( (v36 & 0x8000000) != 0 )
          {
            v37 = (void (__fastcall *)(__int64))qword_1C001F550;
LABEL_100:
            v37(a1);
            goto LABEL_65;
          }
          if ( (v36 & 0x80000000) != 0 )
          {
            ((void (__fastcall *)(__int64))qword_1C001F548)(a1);
          }
          else
          {
            v37 = (void (__fastcall *)(__int64))qword_1C001F530;
            if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) != 0 )
              goto LABEL_100;
            ((void (__fastcall *)(__int64))qword_1C001F540)(a1);
          }
        }
LABEL_65:
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_1C001F8E0 == dword_1C001F014 )
          {
            v38 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v57,
                    &HwDebugHiveCallbackRegistrationHandle);
            if ( v38 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizeb[0] = v38;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                4u,
                0x3Cu,
                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                *(_QWORD *)Sizeb);
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
        {
          if ( ++dword_1C001F8DC == dword_1C001F014 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_74;
        if ( ((__int64 (__fastcall *)(__int64))qword_1C001F298)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_74:
          if ( (Globals[0] & 0x800000000000LL) != 0 )
          {
            v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v31);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v32);
          }
        }
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_77;
      }
      v24 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v24 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v24 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v24 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v24;
    goto LABEL_46;
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
      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
      *(_QWORD *)Size);
  }
LABEL_80:
  if ( (*(_QWORD *)(a1 + 280) & *(_DWORD *)(a1 + 272) & 0x7F077) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV,
      0,
      0LL);
  v33 = *(_QWORD *)(a1 + 280);
  v34 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v33 & 0x40000000) == 0 )
    v34 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v34 & (unsigned int)v33) != (unsigned __int64)v34 )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_PERF_STATES_ERROR,
      (__int64)&PPM_ETW_PERF_STATES_ERROR_HV,
      0,
      0LL);
  if ( (*(_QWORD *)(a1 + 280) & *(_DWORD *)(a1 + 272) & 0x3300000) != (*(_DWORD *)(a1 + 272) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR,
      (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV,
      0,
      0LL);
  if ( (*(_QWORD *)(a1 + 280) & *(_DWORD *)(a1 + 272) & 0x80000000) != (*(_DWORD *)(a1 + 272) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_PCC_ERROR, (__int64)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 280) & *(_DWORD *)(a1 + 272) & 0x8000000) != (*(_DWORD *)(a1 + 272) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_CPC_ERROR, (__int64)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0);
  return (unsigned int)v7;
}
