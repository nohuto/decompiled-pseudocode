/*
 * XREFs of ??0CSpatialProperties@@QEAA@XZ @ 0x180055F1C
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180055B34 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x180055FD0 (GetSpatialSettingsMonitoringPKey.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

CSpatialProperties *__fastcall CSpatialProperties::CSpatialProperties(CSpatialProperties *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 7706) = 0;
  *(_QWORD *)((char *)this + 7724) = 0LL;
  *(GUID *)((char *)this + 7708) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 124, 0, 0x48uLL);
  memset_0((char *)this + 200, 0, 0x1D52uLL);
  *(_OWORD *)((char *)this + 7732) = 0LL;
  *(_OWORD *)((char *)this + 7748) = 0LL;
  *(_QWORD *)((char *)this + 7764) = 0LL;
  GetSpatialSettingsMonitoringPKey((char *)this + 104);
  return this;
}
