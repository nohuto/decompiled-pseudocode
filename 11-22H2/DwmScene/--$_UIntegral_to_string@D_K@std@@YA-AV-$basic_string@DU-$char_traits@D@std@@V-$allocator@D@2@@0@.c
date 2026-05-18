/*
 * XREFs of ??$_UIntegral_to_string@D_K@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@_K@Z @ 0x1800C3A68
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x180027AB8 (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z @ 0x1800C39E8 (--$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z.c)
 */

__int64 __fastcall std::_UIntegral_to_string<char,unsigned __int64>(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)std::_UIntegral_to_buff<char,unsigned __int64>((__int64)v5, a2);
  std::string::string(a1, v3, v5);
  return a1;
}
