/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0058C80
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C005AAE0 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0057930 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00589B8 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005A790 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x1C005AE6C (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x1C005B080 (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C005B134 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C005B3F8 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1C008AA8C (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008B9F4 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AD344 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AED54 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C00B1240 (-ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C012A990 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C012AB0C (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1C012ABB0 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C012B10C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v1; // r15
  unsigned __int64 v2; // r14
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v4; // esi
  unsigned int Flags; // eax
  unsigned int v7; // r12d
  int v8; // r9d
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rsi
  bool v13; // cc
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int128 v20; // xmm1
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int128 v22; // xmm0
  int v23; // eax
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  int v27; // eax
  __int128 v28; // xmm1
  int v29; // eax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  unsigned __int64 v34; // rcx
  wchar_t *v35; // rdx
  int v36; // r8d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int v40; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v43; // [rsp+5Ch] [rbp-ACh]
  int v44; // [rsp+64h] [rbp-A4h]
  unsigned int v45; // [rsp+68h] [rbp-A0h]
  _QWORD v46[3]; // [rsp+70h] [rbp-98h] BYREF
  GUID v47; // [rsp+88h] [rbp-80h] BYREF
  __int128 v48; // [rsp+98h] [rbp-70h] BYREF
  int v49; // [rsp+A8h] [rbp-60h]
  __int128 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-48h]
  __int128 v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+E0h] [rbp-28h]
  __int128 v54; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v55; // [rsp+F8h] [rbp-10h]
  __int128 v56; // [rsp+108h] [rbp+0h]
  __int128 v57; // [rsp+118h] [rbp+10h] BYREF
  __int128 v58; // [rsp+128h] [rbp+20h]
  __int128 v59; // [rsp+138h] [rbp+30h]

  v1 = ndisConnectedStandby;
  v2 = ndisLastCsScenarioInstanceId;
  AoAc = a1->AoAc;
  v4 = 0;
  v53 = 0;
  v49 = 0;
  Flags = a1->Flags;
  v7 = 0;
  NewIrql = ndisConnectedStandby;
  v43 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  *(_OWORD *)&v46[1] = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v48 = 0LL;
  if ( (Flags & 0x80u) == 0 )
  {
    NewIrql_1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    ndisAoAcWriteRefcountRundown(a1, AoAc);
    if ( v1 )
    {
      ndisTraceNicAutoPowerSaver(a1, 1u);
      v9 = (_DWORD *)((char *)AoAc + 468);
      v10 = 0LL;
      v11 = 17LL;
      v12 = MEMORY[0xFFFFF78000000008];
      do
      {
        *(_QWORD *)((char *)AoAc + v10 + 536) = 0LL;
        v10 += 16LL;
        v13 = *v9 <= 0;
        v14 = 0LL;
        ++v9;
        if ( !v13 )
          v14 = v12;
        *(_QWORD *)((char *)AoAc + v10 + 528) = v14;
        --v11;
      }
      while ( v11 );
      *((_QWORD *)AoAc + 102) = 0LL;
      *((_DWORD *)AoAc + 202) = 0;
      *((_QWORD *)AoAc + 106) = 0LL;
      *((_QWORD *)AoAc + 103) = 0LL;
      *((_QWORD *)AoAc + 104) = 0LL;
      *((_QWORD *)AoAc + 105) = 0LL;
      *((_DWORD *)AoAc + 270) = 0;
      *((_QWORD *)AoAc + 136) = 0LL;
      *((_QWORD *)AoAc + 137) = 0LL;
      *((_QWORD *)AoAc + 138) = 0LL;
      *((_QWORD *)AoAc + 139) = 0LL;
      *((_DWORD *)AoAc + 280) = 0;
      *((_QWORD *)AoAc + 141) = 0LL;
      *((_QWORD *)AoAc + 142) = 0LL;
      *((_QWORD *)AoAc + 143) = 0LL;
      memset((char *)AoAc + 904, 0, 0xA8uLL);
      v15 = *((_DWORD *)AoAc + 94);
      if ( (v15 & 0xFFFFFFFC) == 0 )
      {
        v16 = *((_QWORD *)AoAc + 104);
        if ( v15 != 2 )
          v16 = v12;
        *((_QWORD *)AoAc + 104) = v16;
      }
    }
    else
    {
      v17 = (_QWORD *)((char *)AoAc + 544);
      v18 = 17LL;
      do
      {
        if ( *v17 )
        {
          *(v17 - 1) += MEMORY[0xFFFFF78000000008] - *v17;
          *v17 = 0LL;
        }
        v17 += 2;
        --v18;
      }
      while ( v18 );
      if ( *((_QWORD *)AoAc + 105) )
      {
        *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
        *((_QWORD *)AoAc + 105) = 0LL;
      }
      if ( *((_QWORD *)AoAc + 104) )
      {
        *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 104);
        *((_QWORD *)AoAc + 104) = 0LL;
      }
      if ( (byte_1C00F7643 & 4) != 0 )
        McTemplateK0qxxq_EtwWriteTransfer(
          -444972355,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          *((_DWORD *)AoAc + 202));
      v19 = *((_DWORD *)AoAc + 212);
      v20 = *(_OWORD *)((char *)AoAc + 920);
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      v57 = *(_OWORD *)((char *)AoAc + 904);
      v45 = v19;
      v22 = *(_OWORD *)((char *)AoAc + 936);
      v23 = *((_DWORD *)AoAc + 213);
      v58 = v20;
      HIDWORD(v43) = v23;
      v24 = *(_OWORD *)((char *)AoAc + 952);
      v25 = *((_DWORD *)AoAc + 262);
      v59 = v22;
      v53 = v25;
      v26 = *(_OWORD *)((char *)AoAc + 968);
      v27 = *((_DWORD *)AoAc + 267);
      v54 = v24;
      v49 = v27;
      v28 = *(_OWORD *)((char *)AoAc + 984);
      v29 = *((_DWORD *)AoAc + 202);
      v55 = v26;
      LODWORD(v43) = v29;
      v30 = *(_OWORD *)((char *)AoAc + 1000);
      v56 = v28;
      v31 = *(_OWORD *)((char *)AoAc + 1016);
      v50 = v30;
      v32 = *(_OWORD *)((char *)AoAc + 1032);
      v51 = v31;
      v52 = v32;
      v33 = *(_OWORD *)((char *)AoAc + 1052);
      v46[1] = PhysicalDeviceObject;
      v48 = v33;
      if ( *((_QWORD *)AoAc + 103) )
      {
        v47 = 0LL;
        if ( (byte_1C00F7645 & 0x10) != 0 )
        {
          LOBYTE(v8) = v2;
          McTemplateK0ujjpx_EtwWriteTransfer(
            (_DWORD)PhysicalDeviceObject,
            v18,
            (_DWORD)a1 + 4008,
            v8,
            v40,
            (__int64)&a1->InterfaceGuid,
            (char)PhysicalDeviceObject,
            v2);
        }
        do
        {
          v34 = *((_QWORD *)AoAc + 2 * v4 + 67);
          if ( v34 )
          {
            v47 = GUID_CS_BLOCKER_GEN;
            v47.Data4[0] = v4;
            v35 = (&off_1C00D7BE0)[2 * (int)v4];
            v36 = *((_DWORD *)&off_1C00D7BE0 + 4 * (int)v4 + 2);
            v47.Data3 = a1->IfIndex;
            v37 = *((_QWORD *)AoAc + 103);
            v46[0] = v35;
            v44 = v36;
            if ( v34 > v37 )
            {
              *((_QWORD *)AoAc + 2 * v4 + 67) = v37;
              v34 = v37;
            }
            if ( (byte_1C00F7643 & 4) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                v34,
                v34 / 0x989680,
                (_DWORD)a1 + 4008,
                a1->NetLuid.Value,
                v4,
                v34 / 0x989680);
              v34 = *((_QWORD *)AoAc + 2 * v4 + 67);
              v35 = (wchar_t *)v46[0];
              v36 = v44;
            }
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            {
              LOBYTE(v8) = v2;
              McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                v34,
                (_DWORD)v35,
                (_DWORD)a1 + 4008,
                v8,
                (__int64)&v46[1],
                v36,
                (__int64)v35,
                (__int64)&v47,
                v34,
                v2);
            }
          }
          ++v4;
        }
        while ( v4 < 0x11 );
        v1 = NewIrql;
      }
      ndisTraceNicAutoPowerSaver(a1, 0);
      NdisTraceLoggingPowerOnStatistics(a1);
      NdisTraceLoggingCsStateChange(
        a1,
        AoAc,
        v2,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v50,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v48,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v57,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v54);
      v7 = v45;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, NewIrql_1);
    if ( v1 )
    {
      ndisUpdateMiniportCsTrafficStatistics(a1, 0LL);
    }
    else
    {
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v46[1], L"Power Transitions", (unsigned int)v43);
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v46[1], L"Surprise Wakes", v7);
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v46[1], L"Spurious Wakes", HIDWORD(v43));
      ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        v2,
        (const struct _GUID *)&v46[1],
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v50,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v48);
      ndisPublishSleepStudyCustomDataCsTraffic(
        v2,
        (const struct _GUID *)&v46[1],
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v57,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v54);
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v46[1],
        L"Last Wake IRP Latency (ms)",
        *((_QWORD *)AoAc + 137));
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v46[1],
        L"Max Wake IRP Latency (ms)",
        *((_QWORD *)AoAc + 138));
      v38 = ComputeRoundedAverage(*((_QWORD *)AoAc + 139), *((unsigned int *)AoAc + 270));
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v46[1], L"Avg Wake IRP Latency (ms)", v38);
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v46[1],
        L"Last SetPowerOid Latency (ms)",
        *((_QWORD *)AoAc + 141));
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v46[1],
        L"Max SetPowerOid Latency (ms)",
        *((_QWORD *)AoAc + 142));
      v39 = ComputeRoundedAverage(*((_QWORD *)AoAc + 143), *((unsigned int *)AoAc + 280));
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v46[1], L"Avg SetPowerOid Latency (ms)", v39);
      ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v2, (const struct _GUID *)&v46[1]);
    }
    ndisNicAutoPowerSaverResetTelemetryData(a1);
  }
  else
  {
    ndisWdfCsStateChange(a1, ndisConnectedStandby, ndisLastCsScenarioInstanceId);
  }
}
