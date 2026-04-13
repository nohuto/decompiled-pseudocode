/*
 * XREFs of ?_Tidy@?$_Mpunct@_W@std@@AEAAXXZ @ 0x180017B8C
 * Callers:
 *     _std::_Mpunct_unsigned_short_::_Init_::_1_::catch$0 @ 0x1800D4777 (_std--_Mpunct_unsigned_short_--_Init_--_1_--catch$0.c)
 *     _std::_Mpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800D47A0 (_std--_Mpunct_wchar_t_--_Init_--_1_--catch$0.c)
 *     _std::_Mpunct_char_::_Init_::_1_::catch$0 @ 0x1800D4A19 (_std--_Mpunct_char_--_Init_--_1_--catch$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x1800224E4 (--_V@YAXPEAX@Z_0.c)
 */

void __fastcall std::_Mpunct<wchar_t>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  operator delete[](a1[6]);
}
