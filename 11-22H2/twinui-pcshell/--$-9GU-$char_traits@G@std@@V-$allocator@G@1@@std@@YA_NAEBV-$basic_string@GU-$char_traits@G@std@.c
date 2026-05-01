/*
 * XREFs of ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1806EDFB8
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

bool __fastcall std::operator!=<unsigned short>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  return !std::_Traits_equal<std::char_traits<unsigned short>>((__int64)a1, v3, (__int64)a2, v2);
}
