/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBAPEBDPEBD0PEA_W@Z @ 0x18006B6E0
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800044E8 (_Mbrtowc.c)
 */

char *__fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char *a2, char *a3, wchar_t *a4)
{
  char *v6; // rbx
  const _Cvtvec *v7; // rbp
  char v8; // al
  wchar_t v9; // ax
  mbstate_t v11; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  wchar_t v13; // [rsp+70h] [rbp+18h] BYREF

  v6 = a2;
  if ( a2 != a3 )
  {
    v7 = (const _Cvtvec *)(a1 + 48);
    do
    {
      v8 = *v6;
      v11._Wchar = 0;
      v12 = v8;
      if ( Mbrtowc(&v13, &v12, 1uLL, &v11, v7) >= 0 )
        v9 = v13;
      else
        v9 = -1;
      *a4 = v9;
      ++v6;
      ++a4;
    }
    while ( v6 != a3 );
  }
  return v6;
}
