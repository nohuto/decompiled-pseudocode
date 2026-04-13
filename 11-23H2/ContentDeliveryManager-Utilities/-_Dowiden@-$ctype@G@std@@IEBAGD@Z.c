/*
 * XREFs of ?_Dowiden@?$ctype@G@std@@IEBAGD@Z @ 0x1800606B8
 * Callers:
 *     ?do_widen@?$ctype@_W@std@@MEBA_WD@Z @ 0x180063E60 (-do_widen@-$ctype@_W@std@@MEBA_WD@Z.c)
 *     ?do_widen@?$ctype@_W@std@@MEBAPEBDPEBD0PEA_W@Z @ 0x180063E70 (-do_widen@-$ctype@_W@std@@MEBAPEBDPEBD0PEA_W@Z.c)
 * Callees:
 *     _Mbrtowc @ 0x180004B78 (_Mbrtowc.c)
 */

__int64 __fastcall std::ctype<unsigned short>::_Dowiden(__int64 a1, char a2)
{
  wchar_t v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  mbstate_t v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v5._Wchar = 0;
  if ( Mbrtowc(&v3, &v4, 1uLL, &v5, (const _Cvtvec *)(a1 + 48)) >= 0 )
    return v3;
  else
    return 0xFFFFLL;
}
