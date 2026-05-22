/*
 * XREFs of ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x1800D5B7C
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D8638 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800DBB48 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
RawInputProvidersTracing::DeviceAttached *__fastcall RawInputProvidersTracing::DeviceAttached::DeviceAttached(
        RawInputProvidersTracing::DeviceAttached *this,
        __int64 a2,
        unsigned int *a3)
{
  char *v5; // rbx
  _QWORD *v6; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = (char *)this + 96;
  v5 = (char *)this + 56;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = "DeviceAttached";
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 1LL;
  v6 = (_QWORD *)((char *)this + 136);
  v6[19] = 0LL;
  v6[20] = 0LL;
  memset_0(v6, 0, 0x98uLL);
  *((_QWORD *)v5 + 31) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *(_QWORD *)this = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity(this, *a3);
  return this;
}
