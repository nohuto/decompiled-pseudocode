/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0053870
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0055690 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0052530 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00535A8 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0055360 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x1C0055A1C (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x1C0055C2C (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C0055CE0 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0055FA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1C0085734 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0086734 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6F84 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8BEC (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C00AB7F4 (-ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C011ECDC (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C011EE58 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1C011EEFC (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011F458 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
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
  __int64 v13; // rax
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int128 v19; // xmm1
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // xmm1
  int v24; // eax
  __int128 v25; // xmm0
  int v26; // eax
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  wchar_t *v34; // rdx
  int v35; // r8d
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v42; // [rsp+5Ch] [rbp-ACh]
  int v43; // [rsp+64h] [rbp-A4h]
  unsigned int v44; // [rsp+68h] [rbp-A0h]
  _QWORD v45[3]; // [rsp+70h] [rbp-98h] BYREF
  GUID v46; // [rsp+88h] [rbp-80h] BYREF
  __int128 v47; // [rsp+98h] [rbp-70h] BYREF
  int v48; // [rsp+A8h] [rbp-60h]
  __int128 v49; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-48h]
  __int128 v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+E0h] [rbp-28h]
  __int128 v53; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v54; // [rsp+F8h] [rbp-10h]
  __int128 v55; // [rsp+108h] [rbp+0h]
  __int128 v56; // [rsp+118h] [rbp+10h] BYREF
  __int128 v57; // [rsp+128h] [rbp+20h]
  __int128 v58; // [rsp+138h] [rbp+30h]

  v1 = ndisConnectedStandby;
  v2 = ndisLastCsScenarioInstanceId;
  AoAc = a1->AoAc;
  v4 = 0;
  v52 = 0;
  v48 = 0;
  Flags = a1->Flags;
  v7 = 0;
  NewIrql = ndisConnectedStandby;
  v42 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  *(_OWORD *)&v45[1] = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v47 = 0LL;
  if ( (Flags & 0x80u) == 0 )
  {
    NewIrql_1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    ndisAoAcWriteRefcountRundown(a1, AoAc);
    if ( v1 )
    {
      ndisTraceNicAutoPowerSaver(a1, 1u);
      v9 = (_DWORD *)((char *)AoAc + 468);
      v10 = 544LL;
      v11 = 17LL;
      v12 = MEMORY[0xFFFFF78000000008];
      do
      {
        *(_QWORD *)((char *)AoAc + v10 - 8) = 0LL;
        v13 = 0LL;
        if ( *v9++ > 0 )
          v13 = v12;
        *(_QWORD *)((char *)AoAc + v10) = v13;
        v10 += 16LL;
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
      if ( (v15 & 0xFFFFFFFC) == 0 && v15 != 2 )
        *((_QWORD *)AoAc + 104) = v12;
    }
    else
    {
      v16 = (_QWORD *)((char *)AoAc + 544);
      v17 = 17LL;
      do
      {
        if ( *v16 )
        {
          *(v16 - 1) += MEMORY[0xFFFFF78000000008] - *v16;
          *v16 = 0LL;
        }
        v16 += 2;
        --v17;
      }
      while ( v17 );
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
      if ( (byte_1C00EE583 & 4) != 0 )
        McTemplateK0qxxq_EtwWriteTransfer(
          -444972355,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          *((_DWORD *)AoAc + 202));
      v18 = *((_DWORD *)AoAc + 212);
      v19 = *(_OWORD *)((char *)AoAc + 920);
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      v56 = *(_OWORD *)((char *)AoAc + 904);
      v44 = v18;
      v21 = *(_OWORD *)((char *)AoAc + 936);
      v22 = *((_DWORD *)AoAc + 213);
      v57 = v19;
      HIDWORD(v42) = v22;
      v23 = *(_OWORD *)((char *)AoAc + 952);
      v24 = *((_DWORD *)AoAc + 262);
      v58 = v21;
      v52 = v24;
      v25 = *(_OWORD *)((char *)AoAc + 968);
      v26 = *((_DWORD *)AoAc + 267);
      v53 = v23;
      v48 = v26;
      v27 = *(_OWORD *)((char *)AoAc + 984);
      v28 = *((_DWORD *)AoAc + 202);
      v54 = v25;
      LODWORD(v42) = v28;
      v29 = *(_OWORD *)((char *)AoAc + 1000);
      v55 = v27;
      v30 = *(_OWORD *)((char *)AoAc + 1016);
      v49 = v29;
      v31 = *(_OWORD *)((char *)AoAc + 1032);
      v50 = v30;
      v51 = v31;
      v32 = *(_OWORD *)((char *)AoAc + 1052);
      v45[1] = PhysicalDeviceObject;
      v47 = v32;
      if ( *((_QWORD *)AoAc + 103) )
      {
        v46 = 0LL;
        if ( (byte_1C00EE585 & 0x10) != 0 )
        {
          LOBYTE(v8) = v2;
          McTemplateK0ujjpx_EtwWriteTransfer(
            (_DWORD)PhysicalDeviceObject,
            v17,
            (_DWORD)a1 + 4008,
            v8,
            v39,
            (__int64)&a1->InterfaceGuid,
            (char)PhysicalDeviceObject,
            v2);
        }
        do
        {
          v33 = *((_QWORD *)AoAc + 2 * v4 + 67);
          if ( v33 )
          {
            v46 = GUID_CS_BLOCKER_GEN;
            v46.Data4[0] = v4;
            v34 = (&off_1C00D0800)[2 * (int)v4];
            v35 = *((_DWORD *)&off_1C00D0800 + 4 * (int)v4 + 2);
            v46.Data3 = a1->IfIndex;
            v36 = *((_QWORD *)AoAc + 103);
            v45[0] = v34;
            v43 = v35;
            if ( v33 > v36 )
            {
              *((_QWORD *)AoAc + 2 * v4 + 67) = v36;
              v33 = v36;
            }
            if ( (byte_1C00EE583 & 4) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                v33,
                v33 / 0x989680,
                (_DWORD)a1 + 4008,
                a1->NetLuid.Value,
                v4,
                v33 / 0x989680);
              v34 = (wchar_t *)v45[0];
              v35 = v43;
            }
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            {
              LOBYTE(v8) = v2;
              McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                v33,
                (_DWORD)v34,
                (_DWORD)a1 + 4008,
                v8,
                (__int64)&v45[1],
                v35,
                (__int64)v34,
                (__int64)&v46,
                *((_QWORD *)AoAc + 2 * v4 + 67),
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
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v49,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v47,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v56,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v53);
      v7 = v44;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, NewIrql_1);
    if ( v1 )
    {
      ndisUpdateMiniportCsTrafficStatistics(a1, 0LL);
    }
    else
    {
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v45[1], L"Power Transitions", (unsigned int)v42);
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v45[1], L"Surprise Wakes", v7);
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v45[1], L"Spurious Wakes", HIDWORD(v42));
      ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        v2,
        (const struct _GUID *)&v45[1],
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v49,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v47);
      ndisPublishSleepStudyCustomDataCsTraffic(
        v2,
        (const struct _GUID *)&v45[1],
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v56,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v53);
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v45[1],
        L"Last Wake IRP Latency (ms)",
        *((_QWORD *)AoAc + 137));
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v45[1],
        L"Max Wake IRP Latency (ms)",
        *((_QWORD *)AoAc + 138));
      v37 = ComputeRoundedAverage(*((_QWORD *)AoAc + 139), *((unsigned int *)AoAc + 270));
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v45[1], L"Avg Wake IRP Latency (ms)", v37);
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v45[1],
        L"Last SetPowerOid Latency (ms)",
        *((_QWORD *)AoAc + 141));
      ndisPublishSleepStudyCustomData(
        v2,
        (const struct _GUID *)&v45[1],
        L"Max SetPowerOid Latency (ms)",
        *((_QWORD *)AoAc + 142));
      v38 = ComputeRoundedAverage(*((_QWORD *)AoAc + 143), *((unsigned int *)AoAc + 280));
      ndisPublishSleepStudyCustomData(v2, (const struct _GUID *)&v45[1], L"Avg SetPowerOid Latency (ms)", v38);
      ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v2, (const struct _GUID *)&v45[1]);
    }
    ndisNicAutoPowerSaverResetTelemetryData(a1);
  }
  else
  {
    ndisWdfCsStateChange(a1, ndisConnectedStandby, ndisLastCsScenarioInstanceId);
  }
}
