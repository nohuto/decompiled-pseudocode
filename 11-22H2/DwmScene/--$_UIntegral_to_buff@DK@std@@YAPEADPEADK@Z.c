/*
 * XREFs of ??$_UIntegral_to_buff@DK@std@@YAPEADPEADK@Z @ 0x1800CC6B8
 * Callers:
 *     ??$_Integral_to_string@DJ@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@J@Z @ 0x1800CC650 (--$_Integral_to_string@DJ@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@J@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned long>(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
