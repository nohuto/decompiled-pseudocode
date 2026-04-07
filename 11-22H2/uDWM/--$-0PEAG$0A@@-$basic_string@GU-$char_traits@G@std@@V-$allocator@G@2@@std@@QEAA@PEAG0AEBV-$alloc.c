/*
 * XREFs of ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1800EF0B8
 * Callers:
 *     ?EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5428 (-EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001BC28 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( a2 != a3 )
    std::wstring::assign((char *)a1, a2, (a3 - a2) >> 1);
  return a1;
}
