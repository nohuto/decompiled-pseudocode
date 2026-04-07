/*
 * XREFs of ??0?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBUhstring@winrt@@N@std@@@1@@Z @ 0x1800F95A0
 * Callers:
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FB038 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FB2B8 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FB548 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800F8BE4 (--$_Emplace_hint@AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<winrt::hstring,double>::map<winrt::hstring,double>(__int64 *a1, __m128i *a2)
{
  __int64 v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // xmm0_8

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *a1 = v4;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Emplace_hint<std::pair<winrt::hstring const,double> const &>(
      a1,
      v4,
      v6);
    v6 += 16LL;
  }
  return a1;
}
