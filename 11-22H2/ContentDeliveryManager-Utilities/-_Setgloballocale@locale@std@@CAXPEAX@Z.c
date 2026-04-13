/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005800
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005548 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18000CC24 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_1801954D8 )
  {
    byte_1801954D8 = 1;
    _Atexit(tidy_global);
  }
  qword_180195498 = a1;
}
