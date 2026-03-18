/*
 * XREFs of ACPIThermalLoopEx @ 0x1C00209D8
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0020500 (ACPIThermalDeviceControl.c)
 *     ACPIThermalLoop @ 0x1C00209C0 (ACPIThermalLoop.c)
 *     ACPIThermalEvent @ 0x1C0060D00 (ACPIThermalEvent.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C0060E60 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalRereadTemperature @ 0x1C0060F34 (ACPIThermalRereadTemperature.c)
 *     ACPIThermalStopZone @ 0x1C0061054 (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C006109C (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIThermalTMPCallback @ 0x1C00204A0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1C00209C0 (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0020E34 (ACPIThermalCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00217F4 (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0021D68 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C002EEDC (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C002F08C (AcpiDiagTraceTemperatureTelemetry.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  int v9; // ebp
  KIRQL v10; // r15
  char v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // edx
  KIRQL v22; // al
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // ecx

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v10 = v8;
  *(_DWORD *)(a1 + 192) = v9;
  v11 = 1;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v11 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v4);
          v11 = 1;
        }
        v12 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x40000000) != 0 )
          goto LABEL_18;
        v13 = v12;
        if ( (v12 & 0x10000000) == 0 )
        {
          LODWORD(v13) = v12 | 0x8000000;
          *(_DWORD *)(a1 + 192) = v12 | 0x8000000;
          if ( (v12 & 0x8000000) == 0 )
          {
            ACPISetDeviceWorker(a1, 0x2000LL);
            v13 = *(unsigned int *)(a1 + 192);
          }
        }
        if ( (v13 & 0x8000000) != 0 )
        {
LABEL_18:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          goto LABEL_19;
        }
        if ( (v13 & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x40000010;
          v19 = 17LL;
          goto LABEL_39;
        }
        if ( (v13 & 8) != 0 )
          break;
        *(_DWORD *)(a1 + 192) = v13 | 0x40000008;
        KeReleaseSpinLock(v4, v10);
        v20 = *(unsigned int *)(v3 + 100);
        v21 = 1346589535;
LABEL_41:
        v11 = 0;
        if ( (unsigned int)ACPIGet(a1, v21, 546308096, v20, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
          ACPIThermalLoop(a1, 0x40000000LL);
      }
      v14 = v13;
      if ( (v13 & 2) == 0 || !*(_QWORD *)(v3 + 120) )
        goto LABEL_12;
      v25 = *(_DWORD *)(v3 + 104);
      if ( v25 )
      {
        v26 = *(_DWORD *)(v3 + 108);
        v27 = *(_DWORD *)(v3 + 104);
        v28 = v26;
        if ( v26 > v25 && *(_DWORD *)(v3 + 16) <= v26 - v25 )
        {
          v14 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
          v28 = *(_DWORD *)(v3 + 108);
          v27 = *(_DWORD *)(v3 + 104);
        }
        LODWORD(v13) = v14;
        if ( ~v28 > v27 && *(_DWORD *)(v3 + 16) >= v27 + v28 )
        {
          LODWORD(v13) = v14 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v14 & 0xFFFFFBFF;
        }
      }
      v29 = *(_DWORD *)(v3 + 20);
      v30 = v13;
      if ( v29 )
      {
        if ( *(_DWORD *)(v3 + 108) < v29 )
        {
          if ( *(_DWORD *)(v3 + 16) < v29 )
            goto LABEL_64;
LABEL_63:
          v30 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
          goto LABEL_64;
        }
        if ( *(_DWORD *)(v3 + 108) > v29 && *(_DWORD *)(v3 + 16) <= v29 )
          goto LABEL_63;
      }
LABEL_64:
      v31 = *(_DWORD *)(v3 + 28);
      v32 = v30;
      if ( !v31 )
        goto LABEL_71;
      if ( *(_DWORD *)(v3 + 108) < v31 )
      {
        if ( *(_DWORD *)(v3 + 16) < v31 )
          goto LABEL_71;
LABEL_70:
        v32 = v30 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v30 & 0xFFFFFBFF;
        goto LABEL_71;
      }
      if ( *(_DWORD *)(v3 + 108) > v31 && *(_DWORD *)(v3 + 16) <= v31 )
        goto LABEL_70;
LABEL_71:
      v33 = *(_DWORD *)(v3 + 76);
      v34 = v32;
      if ( !v33 )
        goto LABEL_78;
      if ( *(_DWORD *)(v3 + 108) < v33 )
      {
        if ( *(_DWORD *)(v3 + 16) < v33 )
          goto LABEL_78;
LABEL_77:
        v34 = v32 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v32 & 0xFFFFFBFF;
        goto LABEL_78;
      }
      if ( *(_DWORD *)(v3 + 108) > v33 && *(_DWORD *)(v3 + 16) <= v33 )
        goto LABEL_77;
LABEL_78:
      v35 = *(_DWORD *)(v3 + 24);
      v14 = v34;
      if ( !v35 )
        goto LABEL_85;
      if ( *(_DWORD *)(v3 + 108) < v35 )
      {
        if ( *(_DWORD *)(v3 + 16) < v35 )
          goto LABEL_85;
LABEL_84:
        v14 = v34 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v34 & 0xFFFFFBFF;
        goto LABEL_85;
      }
      if ( *(_DWORD *)(v3 + 108) > v35 && *(_DWORD *)(v3 + 16) <= v35 )
        goto LABEL_84;
LABEL_85:
      v13 = 0LL;
      if ( !*(_BYTE *)(v3 + 32) )
        goto LABEL_95;
      do
      {
        v36 = *(_DWORD *)(v3 + 4 * v13 + 36);
        if ( !v36 )
          goto LABEL_93;
        if ( *(_DWORD *)(v3 + 108) < v36 )
        {
          if ( *(_DWORD *)(v3 + 16) < v36 )
            goto LABEL_93;
LABEL_92:
          *(_DWORD *)(a1 + 192) &= ~0x400u;
          goto LABEL_93;
        }
        if ( *(_DWORD *)(v3 + 108) > v36 && *(_DWORD *)(v3 + 16) <= v36 )
          goto LABEL_92;
LABEL_93:
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *(unsigned __int8 *)(v3 + 32) );
      v14 = *(_DWORD *)(a1 + 192);
LABEL_95:
      if ( (v14 & 0x400) == 0 )
      {
        *(_DWORD *)(a1 + 192) = v14 & 0xBFFFF9FF | 0x40000400;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
        KeReleaseSpinLock(v4, v10);
        v20 = *(unsigned int *)(v3 + 108);
        v21 = 1230259295;
        goto LABEL_41;
      }
LABEL_12:
      if ( (v14 & 4) == 0 )
      {
        v19 = 4LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000004;
        goto LABEL_39;
      }
      if ( (v14 & 1) == 0 )
      {
        v19 = 1LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000001;
        goto LABEL_39;
      }
      if ( (v14 & 0x100) == 0 )
      {
        v19 = 256LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000100;
        goto LABEL_39;
      }
      LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
      if ( (v14 & 0x202) == 2 && (_BYTE)v13 )
      {
        v19 = 512LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x44000200;
        goto LABEL_39;
      }
      if ( (v14 & 0x20000002) == 0x20000002 )
        goto LABEL_18;
      if ( *(_BYTE *)(v3 + 273) || (v14 & 2) != 0 )
      {
        if ( (v14 & 0x40) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x40;
          AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          v14 = *(_DWORD *)(a1 + 192);
        }
        if ( (v14 & 0x80u) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x80;
          AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          v14 = *(_DWORD *)(a1 + 192);
        }
        if ( (v14 & 0x800) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x800;
          AcpiDiagTraceTemperatureChange(v3, a1);
          v14 = *(_DWORD *)(a1 + 192);
        }
        if ( (v14 & 0x4000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x4000;
          AcpiDiagTraceTemperatureTelemetry(a1, v13);
          v14 = *(_DWORD *)(a1 + 192);
        }
        if ( (v14 & 0x1000) != 0 )
        {
          if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, v13) )
            goto LABEL_18;
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x1000;
          KeReleaseSpinLock(v4, v10);
          v11 = 0;
          v22 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          v23 = (_QWORD *)qword_1C0080BC8;
          v10 = v22;
          v24 = (_QWORD *)(a1 + 208);
          if ( *(__int64 **)qword_1C0080BC8 != &AcpiThermalZoneList )
            __fastfail(3u);
          *(_QWORD *)(a1 + 216) = qword_1C0080BC8;
          *v24 = &AcpiThermalZoneList;
          *v23 = v24;
          qword_1C0080BC8 = a1 + 208;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
        }
      }
      else
      {
        ++*(_DWORD *)v3;
        v15 = *(_DWORD *)(a1 + 192) | 2;
        *(_DWORD *)(a1 + 192) = v15;
        if ( (_BYTE)v13 )
        {
          v19 = 514LL;
          *(_DWORD *)(a1 + 192) = v15 | 0x44000200;
LABEL_39:
          ACPISetDeviceWorker(a1, v19);
        }
        else if ( *(_QWORD *)(v3 + 112) )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x40000000;
          KeReleaseSpinLock(v4, v10);
          *(_OWORD *)(v3 + 136) = 0LL;
          *(_OWORD *)(v3 + 152) = 0LL;
          *(_QWORD *)(v3 + 168) = 0LL;
          v11 = 0;
          if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1, v16, v17) || *(_DWORD *)(a1 + 548) == 1 )
          {
            v18 = AMLIAsyncEvalObject(*(__int64 **)(v3 + 112), v3 + 136, 0, 0LL, ACPIThermalTMPCallback, a1);
            if ( v18 != 259 )
              goto LABEL_37;
          }
          else
          {
            v18 = -1073741661;
LABEL_37:
            ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v18, v3 + 136, a1);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v15 & 0xEFFFFFFF;
        }
      }
    }
  }
LABEL_19:
  KeReleaseSpinLock(v4, v10);
}
