/*
 * XREFs of ?do_narrow@?$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z @ 0x18006B380
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x180005B4C (_Wcrtomb.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 */

wchar_t *__fastcall std::ctype<wchar_t>::do_narrow(__int64 a1, wchar_t *a2, wchar_t *a3, char a4, _BYTE *a5)
{
  wchar_t *v8; // rbx
  const _Cvtvec *v9; // rbp
  wchar_t v10; // dx
  int v11; // eax
  char Byte; // dl
  mbstate_t v14; // [rsp+20h] [rbp-38h] BYREF

  v8 = a2;
  if ( a2 != a3 )
  {
    v9 = (const _Cvtvec *)(a1 + 48);
    do
    {
      v10 = *v8;
      v14._Wchar = 0;
      v11 = Wcrtomb((char *)&v14._Byte, v10, &v14, v9);
      Byte = v14._Byte;
      if ( v11 != 1 )
        Byte = a4;
      ++v8;
      *a5++ = Byte;
    }
    while ( v8 != a3 );
  }
  return v8;
}
