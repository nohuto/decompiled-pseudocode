/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C0015840
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0001310 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000172C (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002129C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0063D00 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // r8d

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 218);
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *((_DWORD *)DeviceExtension + 824);
      if ( v5 == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension, 0LL);
      }
      else if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (DeviceExtension[450] & 0x10) == 0 )
      {
        if ( v5 <= 0x13 )
        {
          v6 = 525570;
          if ( _bittest(&v6, v5) )
          {
            if ( !DeviceExtension[1997] )
              StorpTelemetrySendUnitScsiDiagnostics(DeviceExtension, 0LL);
          }
        }
      }
      else if ( !DeviceExtension[1997] )
      {
        StorpTelemetrySendUnitSmartAttributes((__int64)DeviceExtension);
        StorpTelemetrySendUnitDeviceStatistics((__int64)DeviceExtension);
      }
      v7 = g_StorpTraceLoggingDeviceHealthTick + DeviceExtension[1997];
      *((_DWORD *)DeviceExtension + 498) |= 1u;
      DeviceExtension[1997] = v7 < 0x18 ? v7 : 0;
    }
  }
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
