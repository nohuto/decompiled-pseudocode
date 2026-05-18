/*
 * XREFs of ?SerializeConfiguration@JsonConfigurationManager@Utils@Spectre@@UEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x1800DEDA0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn Spectre::Utils::JsonConfigurationManager::SerializeConfiguration(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rdi
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  pExceptionObject[2] = a3;
  v3 = 0LL;
  v4 = operator new(0x38uLL);
  pExceptionObject[1] = v4;
  if ( v4 )
  {
    std::string::string(v6, (__int64)"Serializing configuration to JSON string is not supported");
    v3 = Spectre::Utils::SpectreException::SpectreException((__int64)v4, (const char *)v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
