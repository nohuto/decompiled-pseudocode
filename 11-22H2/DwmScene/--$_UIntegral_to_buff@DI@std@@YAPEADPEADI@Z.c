/*
 * XREFs of ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180027D8C
 * Callers:
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x180073D5C (--$_UIntegral_to_string@DI@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned int>(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
