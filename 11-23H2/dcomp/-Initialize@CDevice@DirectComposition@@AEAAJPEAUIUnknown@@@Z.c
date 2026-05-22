/*
 * XREFs of ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC
 * Callers:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 *     ?GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0005@@@Z @ 0x18001DF00 (-GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18001E058 (-IsVailContainer@@YA_NXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z @ 0x18008338C (-Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z.c)
 *     ??R?$default_delete@VChannel@DirectComposition@@@std@@QEBAXPEAVChannel@DirectComposition@@@Z @ 0x18008C48C (--R-$default_delete@VChannel@DirectComposition@@@std@@QEBAXPEAVChannel@DirectComposition@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::Initialize(DirectComposition::CDevice *this, struct IUnknown *a2)
{
  struct DirectComposition::CSurfaceFactory *v4; // rsi
  int v5; // edi
  int v6; // eax
  struct DirectComposition::Channel *v7; // rdx
  _DWORD *v8; // rax
  enum __MIDL___MIDL_itf_touchtelemetry_0000_0000_0005 *v9; // r8
  wil *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
  void *v14; // r14
  __int64 v15; // rdx
  struct DirectComposition::CSurfaceFactory *v16; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  char *v18; // [rsp+40h] [rbp-40h] BYREF
  struct DirectComposition::Channel **v19; // [rsp+48h] [rbp-38h] BYREF
  struct DirectComposition::Channel *v20; // [rsp+50h] [rbp-30h] BYREF
  char v21; // [rsp+58h] [rbp-28h]

  v18 = (char *)this + 96;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  v4 = 0LL;
  v16 = 0LL;
  if ( !DirectComposition::CDevice::s_qpcFrequency.QuadPart )
  {
    if ( !QueryPerformanceFrequency(&DirectComposition::CDevice::s_qpcFrequency) )
    {
      v5 = -2147467259;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(DirectComposition::CDevice *, struct DirectComposition::Channel ***))(*(_QWORD *)this + 40LL))(
      this,
      &v19);
  }
  if ( !a2 || (v6 = DirectComposition::CSurfaceFactory::Create(this, a2, 0LL, 0, &v16), v4 = v16, v5 = v6, v6 >= 0) )
  {
    v20 = 0LL;
    *((_DWORD *)this + 44) = 4096;
    v19 = (struct DirectComposition::Channel **)((char *)this + 160);
    v21 = 1;
    v5 = DirectComposition::KernelChannel::Create((unsigned int *)this + 44, (void **)this + 21, &v20);
    if ( v21 )
    {
      v7 = *v19;
      *v19 = v20;
      if ( v7 )
        std::default_delete<DirectComposition::Channel>::operator()();
    }
    if ( v5 >= 0 )
    {
      *((_DWORD *)this + 45) = *((_DWORD *)this + 44);
      v8 = DefaultHeap::AllocClear(0x20uLL);
      if ( v8 )
      {
        v8[2] = 0;
        *((_QWORD *)v8 + 3) = v8 + 4;
        *((_QWORD *)v8 + 2) = v8 + 4;
      }
      else
      {
        v8 = 0LL;
      }
      *((_QWORD *)this + 58) = v8;
      if ( v8 )
      {
        pv = 0LL;
        if ( (int)TelemetryHelper::GetCurrentAppInformation((TelemetryHelper *)&pv, (unsigned __int16 **)&v16, v9) < 0 )
          goto LABEL_26;
        v14 = pv;
        if ( !pv )
          goto LABEL_26;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_WORD *)pv + v15) );
        v5 = (*(__int64 (__fastcall **)(char *, __int64, LPVOID))(*((_QWORD *)this + 5) + 48LL))(
               (char *)this + 40,
               v15,
               pv);
        CoTaskMemFree(v14);
        if ( v5 >= 0 )
        {
LABEL_26:
          *((_QWORD *)this + 75) = v4;
          goto LABEL_18;
        }
      }
      else
      {
        v5 = -2147024882;
      }
    }
  }
  if ( v4 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((char *)v4 + 8);
LABEL_18:
  *((_BYTE *)this + 832) = IsVailContainer();
  if ( !wil::ProcessShutdownInProgress(v10) )
    wil::details::ApiTelemetryLogger::IsEnabled(v12, v11);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v18);
  return (unsigned int)v5;
}
