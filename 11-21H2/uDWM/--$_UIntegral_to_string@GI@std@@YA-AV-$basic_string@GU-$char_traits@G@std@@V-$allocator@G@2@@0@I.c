/*
 * XREFs of ??$_UIntegral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x1800F2448
 * Callers:
 *     ?StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5444 (-StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C8AE0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::_UIntegral_to_string<unsigned short,unsigned int>(char *a1, unsigned int a2)
{
  _WORD *v4; // r9
  _BYTE v6[6]; // [rsp+52h] [rbp-16h] BYREF

  v4 = v6;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  if ( v4 != (_WORD *)v6 )
    std::wstring::assign(a1, v4, (v6 - (_BYTE *)v4) >> 1);
  return a1;
}
