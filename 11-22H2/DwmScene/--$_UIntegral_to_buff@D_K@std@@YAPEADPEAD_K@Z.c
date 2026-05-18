/*
 * XREFs of ??$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z @ 0x1800C39E8
 * Callers:
 *     ??$_UIntegral_to_string@D_K@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@_K@Z @ 0x1800C3A68 (--$_UIntegral_to_string@D_K@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned __int64>(__int64 a1, unsigned __int64 a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  return a1;
}
