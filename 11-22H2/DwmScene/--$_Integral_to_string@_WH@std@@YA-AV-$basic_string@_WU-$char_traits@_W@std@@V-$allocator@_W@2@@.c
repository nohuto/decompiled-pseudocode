/*
 * XREFs of ??$_Integral_to_string@_WH@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@H@Z @ 0x1800C3888
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??$_UIntegral_to_buff@_WI@std@@YAPEA_WPEA_WI@Z @ 0x1800C3A28 (--$_UIntegral_to_buff@_WI@std@@YAPEA_WPEA_WI@Z.c)
 */

char *__fastcall std::_Integral_to_string<wchar_t,int>(char *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = std::_UIntegral_to_buff<wchar_t,unsigned int>(v6);
  }
  else
  {
    v3 = std::_UIntegral_to_buff<wchar_t,unsigned int>(v6) - 2;
    *(_WORD *)v3 = v4 + 45;
  }
  *(_QWORD *)a1 = v4;
  *((_QWORD *)a1 + 2) = v4;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = v4;
  if ( (_BYTE *)v3 != v6 )
    std::wstring::assign(a1, (const void *)v3, (__int64)&v6[-v3] >> 1);
  return a1;
}
