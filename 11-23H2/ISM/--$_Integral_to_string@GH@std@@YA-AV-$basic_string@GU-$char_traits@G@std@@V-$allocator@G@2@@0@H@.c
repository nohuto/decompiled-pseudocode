/*
 * XREFs of ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800AA60C
 * Callers:
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800ABD40 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1800AAA04 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Integral_to_string<unsigned short,int>(void **a1, int a2)
{
  __int64 v3; // rax
  void *v4; // r10
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6);
  }
  else
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6) - 2;
    *(_WORD *)v3 = (_WORD)v4 + 45;
  }
  *a1 = v4;
  a1[2] = v4;
  a1[3] = (void *)7;
  *(_WORD *)a1 = (_WORD)v4;
  if ( (_BYTE *)v3 != v6 )
    std::wstring::assign(a1, (void *)v3, (__int64)&v6[-v3] >> 1);
  return a1;
}
