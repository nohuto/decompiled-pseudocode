/*
 * XREFs of ??$_UIntegral_to_buff@_WI@std@@YAPEA_WPEA_WI@Z @ 0x1800C3A28
 * Callers:
 *     ??$_Integral_to_string@_WH@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@H@Z @ 0x1800C3888 (--$_Integral_to_string@_WH@std@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<wchar_t,unsigned int>(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
