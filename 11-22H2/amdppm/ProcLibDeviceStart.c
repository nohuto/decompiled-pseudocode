/*
 * XREFs of ProcLibDeviceStart @ 0x1C002C914
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0022C40 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00040F8 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     AcquireBiosPpmControl @ 0x1C00073F8 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00075B0 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary2 @ 0x1C00226CC (ProcLibTraceSummary2.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     AcpiEval_OSC @ 0x1C00273C0 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1C002794C (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0027A54 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C00282B8 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C002A3FC (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C002BD44 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C002C608 (ProcLibCapChange.c)
 *     InitAcpiProcessorDomains @ 0x1C002E040 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C002E2B8 (RegisterXsdDomain.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002FE84 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiPerfStates @ 0x1C0035F04 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C0036BC0 (InitAcpiCStates.c)
 *     InitPepIdleStates @ 0x1C0036C98 (InitPepIdleStates.c)
 *     EmiInit @ 0x1C0039780 (EmiInit.c)
 *     InitializeEnergyEstimation @ 0x1C003A02C (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x1C003A568 (InitPepPerfStates.c)
 *     InitPep @ 0x1C003B268 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C003B6CC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C003BAD4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003BD4C (InitAcpiLpiStates.c)
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
  int v17; // eax
  int PepCapabilites; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned __int16 v32; // r9
  __int64 v33; // rcx
  void (__fastcall *v34)(_QWORD, _QWORD); // rax
  void (__fastcall *v35)(_QWORD); // rax
  int v36; // ebx
  int v37; // eax
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  char v43; // si
  __int64 v44; // rax
  void (__fastcall *v45)(__int64); // rax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned int v50; // ecx
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
  v68 = aRegistryMachin[26];
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
  *(_QWORD *)(a1 + 264) = Globals;
  *(_QWORD *)(a1 + 280) = Globals;
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
         0LL) >= 0 )
  {
    if ( DWORD1(v63) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v63);
      *(_BYTE *)(a1 + 185) = BYTE8(v63);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v63 = 0LL;
    HIDWORD(v63) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v4 = HIDWORD(v63);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v63;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C0012A20)(a1);
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
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        *(_QWORD *)Size);
    }
    goto LABEL_192;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(&Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_1C0012DB8;
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
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
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
      WPP_RECORDER_SF_d(
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
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    v7 = -1073741670;
    goto LABEL_190;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124E0,
    0LL);
  v56 = 0LL;
  if ( qword_1C0012688 )
  {
    v14 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0012688, v13, &v56);
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
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
        if ( (v15 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_1C0012688 + 13),
            *(unsigned __int8 *)(qword_1C0012688 + 12),
            *(unsigned __int8 *)(qword_1C0012688 + 11),
            Type);
        if ( (v15 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = *(ULONG *)(qword_1C0012688 + 16);
          WPP_RECORDER_SF_d(
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
        *(_QWORD *)(a1 + 88) = v56;
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
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v14;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( qword_1C0012680 )
    AcpiEval_PDC(a1, (const void *)qword_1C0012680, word_1C0012690);
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
        WPP_RECORDER_SF_d(
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
      WPP_RECORDER_SF_d(
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
        WPP_RECORDER_SF_d(
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
      WPP_RECORDER_SF_d(
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
    v21 = InitPepIdleStates(a1);
    if ( v21 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v21;
        WPP_RECORDER_SF_d(
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
  v22 = *(_QWORD *)(a1 + 280);
  if ( (v22 & 0x1000000000LL) != 0 )
  {
    v23 = InitPepPerfStates(a1);
    v24 = *(_QWORD *)(a1 + 280);
    if ( v23 >= 0 )
    {
      v22 = v24 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
    }
    else
    {
      v22 = v24 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v23;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x30u,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
        v22 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v22 & 0x8000000) != 0 )
  {
    v25 = InitAcpiCpc(a1);
    v26 = *(_QWORD *)(a1 + 280);
    if ( v25 >= 0 )
    {
      v22 = v26 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
    }
    else
    {
      v22 = v26 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v25;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x31u,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
        v22 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v22 & 0x80000000) != 0 )
  {
    v27 = InitAcpiLegacyPcc(a1);
    v28 = *(_QWORD *)(a1 + 280);
    if ( v27 >= 0 )
    {
      v22 = v28 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
    }
    else
    {
      v22 = v28 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v22;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v27;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x32u,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
        v22 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v22 & 0x70000000) != 0 )
  {
    v29 = InitAcpiPerfStates(a1);
    if ( v29 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v29;
        WPP_RECORDER_SF_d(
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
    v30 = InitAcpiThrottleStates(a1);
    if ( v30 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v30;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( !qword_1C0012698 || (v31 = qword_1C0012698(a1), v7 = v31, v31 >= 0) )
  {
    v33 = *(_QWORD *)(a1 + 280);
    if ( (v33 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v33 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_1C00126B8;
        *(_QWORD *)(a1 + 328) = qword_1C00126E0;
        *(_QWORD *)(a1 + 312) = qword_1C00126C8;
      }
      if ( (v33 & 0x40000000) == 0 )
      {
LABEL_114:
        if ( (v33 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1C00126E8;
        if ( (v33 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1C00126F8;
          *(_QWORD *)(a1 + 360) = qword_1C0012700;
        }
        if ( (v33 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_1C00126C0;
          *(_QWORD *)(a1 + 320) = qword_1C00126D0;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v33 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v33 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C00126F0 )
          *(_QWORD *)(a1 + 344) = qword_1C00126F0;
        InitAcpiProcessorDomains(a1, SetPerfStateIO, SetPerfStateIOHidden);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            v34 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
            if ( v34 )
              v34(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
            v35 = *(void (__fastcall **)(_QWORD))(a1 + 120);
            if ( v35 )
              v35(*(_QWORD *)(a1 + 104));
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_189;
            v32 = 54;
            Sizeb[0] = v7;
            goto LABEL_102;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v36 = ((__int64 (__fastcall *)(__int64))qword_1C00129E8)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v36 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v36;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_1C0012B28 == dword_1C00124D4
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1C00127A8 )
        {
          qword_1C00127A8(a1);
        }
        v37 = *(_DWORD *)(a1 + 280);
        v38 = 0;
        LODWORD(v56) = 0;
        if ( (v37 & 0x70000000) != 0 )
        {
          v39 = AcpiEval_PPC(a1, (int *)&v56);
          if ( v39 >= 0 )
          {
            v38 = (int)v56;
          }
          else if ( v39 == -1073741772 )
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
            Sizeb[0] = v39;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v40 = *(_DWORD *)(a1 + 280);
        v41 = 0;
        LODWORD(v56) = 0;
        if ( (v40 & 0x3000000) != 0 )
        {
          v42 = AcpiEval_TPC(a1, (unsigned int *)&v56);
          if ( v42 >= 0 )
          {
            v41 = (int)v56;
          }
          else if ( v42 == -1073741772 )
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
            Sizeb[0] = v42;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v43 = (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0012A28)(a1) == 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00124D8,
          0LL);
        ProcLibCapChange(a1, v38, v41, 0x64u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00124D8);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 552) )
          {
            v43 = RegisterXsdDomain(a1);
          }
          else if ( !byte_1C0012A38 )
          {
            goto LABEL_163;
          }
          if ( v43 )
          {
LABEL_163:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v44 = *(_QWORD *)(a1 + 280);
              if ( (v44 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0012A18)(a1);
              }
              else if ( (v44 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0012A10)(a1);
              }
              else if ( (v44 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1C0012A08)(a1);
              }
              else
              {
                v45 = (void (__fastcall *)(__int64))qword_1C00129F0;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v45 = (void (__fastcall *)(__int64))qword_1C0012A00;
                v45(a1);
              }
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_1C0012DA0 == dword_1C00124D4 )
          {
            v46 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v59,
                    &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
            if ( v46 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizeb[0] = v46;
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
          if ( ++dword_1C0012D9C == dword_1C00124D4 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_186;
        if ( ((__int64 (__fastcall *)(__int64))qword_1C0012758)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_186:
          if ( (Globals & 0x800000000000LL) != 0 )
          {
            v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v47);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v48);
          }
        }
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_189;
      }
      v33 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v33 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v33 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v33 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v33;
    goto LABEL_114;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = 53;
    Sizeb[0] = v31;
LABEL_102:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v32,
      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
      *(_QWORD *)Sizeb);
  }
LABEL_189:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124E0);
LABEL_190:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_192:
  if ( (*(_QWORD *)(a1 + 280) & *(_DWORD *)(a1 + 272) & 0x7F077) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR,
      (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV,
      0,
      0LL);
  v49 = *(_QWORD *)(a1 + 280);
  v50 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v49 & 0x40000000) == 0 )
    v50 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v50 & (unsigned int)v49) != (unsigned __int64)v50 )
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
