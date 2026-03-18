/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1C0021FCC
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0002434 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceFanEvent @ 0x1C00030C0 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0021D68 (AcpiDiagTraceThermalNotification.c)
 *     ACPIReserveDependencies @ 0x1C0021F38 (ACPIReserveDependencies.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C002EEDC (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C002F08C (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0047AC4 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0048028 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C00482C0 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C004840C (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C0048564 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0048B0C (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005DDE4 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005E054 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0096764 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0006528 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v4; // r15
  _WORD *Pool2; // rbx
  __int64 result; // rax
  char *v7; // r12
  int v8; // esi
  unsigned int v9; // edi
  _WORD *v10; // r8
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // bp
  char *v13; // r9
  __int16 *v14; // r11
  char v15; // r10
  char v16; // cl
  __int16 v17; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0;
  Pool2 = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P, a3);
  if ( (int)result < 0 )
    return result;
  v7 = (char *)P;
  v8 = 0;
  v9 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v10 = Pool2;
      v11 = v4;
      v12 = 0;
      v13 = v7;
      v14 = Pool2;
      v15 = 1;
      while ( 1 )
      {
        if ( v12 > 0xFFFDu )
        {
          v9 = -1073741675;
          goto LABEL_36;
        }
        v12 += 2;
        v16 = *v13;
        if ( v4 < v12 )
          break;
        if ( (unsigned __int8)(v16 - 97) <= 0x19u
          || (unsigned __int8)(v16 - 65) <= 0x19u
          || (unsigned __int8)(v16 - 48) <= 9u )
        {
          v17 = *v13;
        }
        else if ( v16 == 95 )
        {
          v17 = 95;
        }
        else
        {
          v17 = 92;
          if ( v16 != 92 )
          {
            v17 = 46;
            if ( v16 != 46 )
            {
              if ( v16 )
              {
                v9 = -1073741811;
LABEL_36:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0x53706341u);
                goto LABEL_38;
              }
              v17 = 0;
              v15 = 0;
            }
          }
        }
        *v14++ = v17;
LABEL_10:
        ++v13;
        if ( !v15 )
          goto LABEL_11;
      }
      if ( v16 )
        goto LABEL_10;
LABEL_11:
      if ( v12 > v4 )
      {
        if ( Pool2 )
        {
          ExFreePoolWithTag(Pool2, 0x53706341u);
          Pool2 = 0LL;
        }
        if ( v8 )
        {
          v9 = -2147483643;
          goto LABEL_36;
        }
        Pool2 = (_WORD *)ExAllocatePool2(64LL, v12, 1399874369LL);
        if ( Pool2 )
        {
          v4 = v12;
          v8 = 1;
          continue;
        }
        v9 = -1073741670;
LABEL_38:
        v10 = 0LL;
        *(_OWORD *)a2 = 0LL;
        v11 = 0;
        goto LABEL_14;
      }
      break;
    }
    if ( ++v8 < 2 )
      continue;
    break;
  }
  *(_WORD *)a2 = v4 - 2;
LABEL_14:
  *(_WORD *)(a2 + 2) = v11;
  *(_QWORD *)(a2 + 8) = v10;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x53706341u);
  return v9;
}
