/*
 * XREFs of ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x180073D5C
 * Callers:
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x180027AB8 (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180027D8C (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 */

__int64 __fastcall std::_UIntegral_to_string<char,unsigned int>(__int64 a1, unsigned int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)std::_UIntegral_to_buff<char,unsigned int>((__int64)v5, a2);
  std::string::string(a1, v3, v5);
  return a1;
}
