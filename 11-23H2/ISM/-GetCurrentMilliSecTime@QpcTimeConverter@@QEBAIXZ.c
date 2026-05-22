/*
 * XREFs of ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800E9ADC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E9C54 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1800CD6F4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

__int64 __fastcall QpcTimeConverter::GetCurrentMilliSecTime(QpcTimeConverter *this)
{
  __int64 v2; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( QueryPerformanceCounter(&PerformanceCount)
    && (unsigned int)QpcTimeConverter::QpcToMicroSec(this, PerformanceCount.QuadPart, &v5) )
  {
    return (unsigned int)(v5 / 0x3E8);
  }
  else
  {
    LODWORD(v2) = GetTickCount();
  }
  return (unsigned int)v2;
}
