/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005170
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180004EB8 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18000C530 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_1801AE498 )
  {
    byte_1801AE498 = 1;
    _Atexit(tidy_global);
  }
  qword_1801AE458 = a1;
}
