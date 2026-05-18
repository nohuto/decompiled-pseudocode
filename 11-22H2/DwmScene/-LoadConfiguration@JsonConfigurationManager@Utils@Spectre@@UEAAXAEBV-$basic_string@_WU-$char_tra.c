/*
 * XREFs of ?LoadConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4LoadPolicy@IConfigurationManager@23@@Z @ 0x1800DECB0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn Spectre::Utils::JsonConfigurationManager::LoadConfiguration()
{
  __int64 v0; // rbx
  void *v1; // rax
  __int64 v2; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  v1 = operator new(0x38uLL);
  try
  {
    v2 = (__int64)v1;
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      std::string::string(v4, (__int64)"Parsing configuration from JSON string is not supported");
      v0 = Spectre::Utils::SpectreException::SpectreException(v2, (const char *)v4, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsConfigurationManager,
      3,
      "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
