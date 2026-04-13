/*
 * XREFs of ?_Tidy@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEAAXXZ @ 0x1800D0CE8
 * Callers:
 *     ??1?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAA@XZ @ 0x1800D0298 (--1-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEAA@XZ.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Init_::_1_::catch$0 @ 0x1800DD5AA (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--_Init_--_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
}
