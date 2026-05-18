/*
 * XREFs of ?InitializeDevice@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@@Z @ 0x180026B70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z @ 0x180017D08 (--4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDevice::InitializeDevice(
        Spectre::Engine::RenderDevice *this,
        const struct Spectre::Engine::DeviceDescription *a2,
        const struct Spectre::Engine::OutputDescription *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *((_DWORD *)a2 + 7) > *((_DWORD *)a2 + 8) )
  {
    std::string::string(
      v8,
      (__int64)"RenderDevice::InitializeDevice() -- MinFeatureLevelRequired must not exceed MaxFeatureLevelRequired");
    v5 = (unsigned int)std::string::string(
                         v7,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\renderer.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Spectre::Engine::DeviceDescription::operator=((__int64)this + 288, (__int64)a2);
  *((_OWORD *)this + 24) = *(_OWORD *)a3;
  *((_OWORD *)this + 25) = *((_OWORD *)a3 + 1);
  *((_DWORD *)this + 104) = *((_DWORD *)this + 77);
  (*(void (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)this + 280LL))(this);
  *((_BYTE *)this + 3976) = 1;
}
