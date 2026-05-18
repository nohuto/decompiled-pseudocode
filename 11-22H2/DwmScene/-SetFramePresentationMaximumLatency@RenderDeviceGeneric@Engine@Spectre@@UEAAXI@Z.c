/*
 * XREFs of ?SetFramePresentationMaximumLatency@RenderDeviceGeneric@Engine@Spectre@@UEAAXI@Z @ 0x180053980
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

void __fastcall __noreturn Spectre::Engine::RenderDeviceGeneric::SetFramePresentationMaximumLatency(
        Spectre::Engine::RenderDeviceGeneric *this)
{
  _QWORD v1[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  std::string::string(v1, (__int64)"Not implemented");
  Spectre::Utils::SpectreException::SpectreException((__int64)pExceptionObject, (const char *)v1, 0);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
