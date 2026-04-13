/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBA_WD@Z @ 0x18006B690
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800044E8 (_Mbrtowc.c)
 */

__int64 __fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char a2)
{
  wchar_t v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  mbstate_t v5; // [rsp+50h] [rbp+18h] BYREF

  v5._Wchar = 0;
  v4 = a2;
  if ( Mbrtowc(&v3, &v4, 1uLL, &v5, (const _Cvtvec *)(a1 + 48)) >= 0 )
    return v3;
  else
    return 0xFFFFLL;
}
