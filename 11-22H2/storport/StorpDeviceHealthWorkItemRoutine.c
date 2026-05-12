/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C0020820
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00208E4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00715F4 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0072334 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0072940 (StorpTelemetrySendUnitSmartAttributes.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  int v7; // eax

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 224);
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *((_DWORD *)DeviceExtension + 836);
      if ( v5 == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension, 0LL);
      }
      else if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (DeviceExtension[450] & 0x10) == 0 )
      {
        if ( v5 <= 0x13 )
        {
          v7 = 525570;
          if ( _bittest(&v7, v5) )
          {
            if ( !DeviceExtension[2045] )
              StorpTelemetrySendUnitScsiDiagnostics(DeviceExtension, 0LL);
          }
        }
      }
      else if ( !DeviceExtension[2045] )
      {
        StorpTelemetrySendUnitSmartAttributes(DeviceExtension, 0LL);
        StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
      }
      v6 = g_StorpTraceLoggingDeviceHealthTick + DeviceExtension[2045];
      *((_DWORD *)DeviceExtension + 510) |= 1u;
      DeviceExtension[2045] = v6 < 0x18 ? v6 : 0;
    }
  }
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
