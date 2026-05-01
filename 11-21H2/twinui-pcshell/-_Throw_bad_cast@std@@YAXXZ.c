/*
 * XREFs of ?_Throw_bad_cast@std@@YAXXZ @ 0x18058C604
 * Callers:
 *     ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805DCEAC (--$use_facet@V-$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_cast(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad cast";
  pExceptionObject[0] = &cereal::Exception::`vftable';
  throw (std::bad_cast *)pExceptionObject;
}
